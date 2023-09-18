using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class SceneLoader : MonoBehaviour
{
    public float fadeToBlackDuration = 1f;
    public float blackScreenDuration = 1f;
    public float fadeToNormalDuration = 1f;

    private Texture2D fadeTexture;
    private float fadeAlpha = 0;
    private int fadeDir = -1;

    public static SceneLoader Instance { get; private set; }

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void OnGUI()
    {
        fadeAlpha += fadeDir * (fadeDir == 1 ? fadeToBlackDuration : fadeToNormalDuration) * Time.deltaTime;
        fadeAlpha = Mathf.Clamp01(fadeAlpha);

        GUI.color = new Color(GUI.color.r, GUI.color.g, GUI.color.b, fadeAlpha);
        GUI.depth = -1000;
        GUI.DrawTexture(new Rect(0, 0, Screen.width, Screen.height), fadeTexture);
    }

    public void LoadScene(string sceneName)
    {
        StartCoroutine(FadeAndLoadScene(sceneName));
    }

    private IEnumerator FadeAndLoadScene(string sceneName)
    {
        fadeDir = 1;
        yield return new WaitForSeconds(fadeToBlackDuration);

        fadeAlpha = 1; // Ensure the screen is black before loading the new scene
        yield return new WaitForSeconds(blackScreenDuration);

        SceneManager.LoadScene(sceneName);

        fadeDir = -1;
        yield return new WaitForSeconds(fadeToNormalDuration);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.M) && (Input.GetKey(KeyCode.LeftControl) || Input.GetKey(KeyCode.RightControl)))
        {
            LoadScene("Intro");
        }
    }

    private void Start()
    {
        fadeTexture = new Texture2D(2, 2);
        fadeTexture.SetPixel(0, 0, Color.black);
        fadeTexture.SetPixel(1, 0, Color.black);
        fadeTexture.SetPixel(0, 1, Color.black);
        fadeTexture.SetPixel(1, 1, Color.black);
        fadeTexture.Apply();
    }
}
