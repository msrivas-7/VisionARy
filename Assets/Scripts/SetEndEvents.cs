using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SetEndEvents : MonoBehaviour
{
    public UnityEvent OnClose;


    private void OnDisable()
    {
        OnClose.Invoke();
    }
}
