using UnityEngine;

public class UIScaler : MonoBehaviour
{
    private Transform cameraTransform;
    public float scaleSpeed = 1.0f;
    public Vector3 targetScale;

    void Start()
    {
        cameraTransform = Camera.main.transform;
    }

    void Update()
    {
        Vector3 directionToCamera = cameraTransform.position - transform.position;
        float dotProduct = Vector3.Dot(transform.forward, directionToCamera.normalized);

        if (dotProduct > 0.5f) // Adjust this threshold as needed
        {
            // Camera is facing the UI panel
            transform.localScale = Vector3.Lerp(transform.localScale, targetScale, Time.deltaTime * scaleSpeed);
        }
        else
        {
            // Camera is not facing the UI panel
            transform.localScale = Vector3.Lerp(transform.localScale, Vector3.zero, Time.deltaTime * scaleSpeed);
        }
    }
}
