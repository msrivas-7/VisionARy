using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System.Collections.Generic;

public class ARTrackedImageHandler : MonoBehaviour
{
    public ARTrackedImageManager trackedImageManager;

    [System.Serializable]
    public class ImagePrefabMapping
    {
        public string trackedImageName;
        public GameObject prefab;
    }

    public ImagePrefabMapping[] imagePrefabMappings;

    public bool singleActivePrefab = true;

    private Dictionary<string, GameObject> imagePrefabDictionary = new Dictionary<string, GameObject>();
    private Dictionary<string, GameObject> activePrefabs = new Dictionary<string, GameObject>();

    private void Awake()
    {
        foreach (var mapping in imagePrefabMappings)
        {
            imagePrefabDictionary.Add(mapping.trackedImageName, mapping.prefab);
        }
        Debug.Log("Image-Prefab dictionary created with " + imagePrefabDictionary.Count + " entries.");
    }

    private void OnEnable()
    {
        trackedImageManager.trackedImagesChanged += OnTrackedImagesChanged;
        Debug.Log("OnEnable called and event handler added.");
    }

    private void OnDisable()
    {
        trackedImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
        Debug.Log("OnDisable called and event handler removed.");
    }

    void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        Debug.Log("Tracked images changed. Added: " + eventArgs.added.Count + ", Updated: " + eventArgs.updated.Count + ", Removed: " + eventArgs.removed.Count);

        foreach (var trackedImage in eventArgs.added)
        {
            Debug.Log("New image tracked: " + trackedImage.referenceImage.name);
            UpdateTrackedImage(trackedImage);
        }

        foreach (var trackedImage in eventArgs.updated)
        {
            Debug.Log("Updated tracked image: " + trackedImage.referenceImage.name);
            UpdateTrackedImage(trackedImage);
        }

        if (singleActivePrefab)
        {
            foreach (var trackedImage in eventArgs.removed)
            {
                Debug.Log("Tracked image lost: " + trackedImage.referenceImage.name);
                if (activePrefabs.TryGetValue(trackedImage.referenceImage.name, out GameObject prefabInstance))
                {
                    prefabInstance.SetActive(false);
                    activePrefabs.Remove(trackedImage.referenceImage.name);
                    Debug.Log("Deactivated and removed prefab for image: " + trackedImage.referenceImage.name);
                }
            }
        }
    }

    void UpdateTrackedImage(ARTrackedImage trackedImage)
    {
        if (imagePrefabDictionary.TryGetValue(trackedImage.referenceImage.name, out GameObject prefab))
        {
            Debug.Log("Found prefab for tracked image: " + trackedImage.referenceImage.name);
            GameObject prefabInstance;
            if (singleActivePrefab)
            {
                foreach (var activePrefab in activePrefabs.Values)
                {
                    activePrefab.SetActive(false);
                    Debug.Log("Deactivated active prefab.");
                }
                activePrefabs.Clear();
                Debug.Log("Cleared active prefabs dictionary.");

                if (!activePrefabs.TryGetValue(trackedImage.referenceImage.name, out prefabInstance))
                {
                    prefabInstance = Instantiate(prefab);
                    activePrefabs[trackedImage.referenceImage.name] = prefabInstance;
                    Debug.Log("Instantiated and added new prefab for tracked image: " + trackedImage.referenceImage.name);
                }

                prefabInstance.SetActive(true);
                Debug.Log("Activated prefab for tracked image: " + trackedImage.referenceImage.name);
            }
            else
            {
                prefabInstance = Instantiate(prefab);
                Debug.Log("Instantiated new prefab for tracked image (singleActivePrefab is false): " + trackedImage.referenceImage.name);
            }
        }
        else
        {
            Debug.LogWarning("No prefab found for tracked image: " + trackedImage.referenceImage.name);
        }
    }
}
