using UnityEngine;
using TMPro;
using System.IO;

public class EmailHandler : MonoBehaviour
{
    public TMP_InputField emailInputField;

    public void OnEmailSubmit()
    {
        string email = emailInputField.text;
        Debug.Log("Email entered: " + email);

        //string filePath = Path.Combine(Application.persistentDataPath, "emails.csv");

        //using (StreamWriter writer = new StreamWriter(filePath, true))
        //{
        //    writer.WriteLine(email);
        //}

        //Debug.Log("Email saved to: " + filePath);
    }
}
