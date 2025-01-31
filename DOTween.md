### 示例：位置补间

```
using UnityEngine;
using DG.Tweening;

public class DOTweenPositionExample : MonoBehaviour
{
    public Transform target;
    public float duration = 1.0f;

    void Start()
    {
        // 使用 DOTween 将对象移动到目标位置
        transform.DOMove(target.position, duration);
    }
}

renderer = GetComponent<Renderer>();
// 使用 DOTween 将对象的透明度淡出
renderer.material.DOFade(0, duration);

// 使用 DOTween 将对象旋转到目标角度
transform.DORotate(targetRotation, duration);

// 使用 DOTween 将对象缩放到目标大小
transform.DOScale(targetScale, duration);

renderer = GetComponent<Renderer>();
// 使用 DOTween 将对象的颜色变为目标颜色
renderer.material.DOColor(targetColor, duration);

public class DOTweenPathExample : MonoBehaviour {
    public Transform[] waypoints;
    public float duration = 2.0f;

    void Start() {
        // 使用 DOTween 沿路径移动对象
        Vector3[] path = new Vector3[waypoints.Length];
        for (int i = 0; i < waypoints.Length; i++) {
            path[i] = waypoints[i].position;
        }
        transform.DOPath(path, duration, PathType.Linear);
    }
}
```
不使用DOTween

```
//位置补间
void Start() {
    StartCoroutine(MoveToTarget());
}

IEnumerator MoveToTarget() {
    Vector3 startPosition = transform.position;
    Vector3 endPosition = target.position;
    float elapsedTime = 0;

    while (elapsedTime < duration) {
        transform.position = Vector3.Lerp(startPosition, endPosition, elapsedTime / duration);
        elapsedTime += Time.deltaTime;
        yield return null;
    }

    transform.position = endPosition;
}


public class FadeLerpExample : MonoBehaviour {
    public float duration = 1.0f;
    private Renderer renderer;

    void Start() {
        renderer = GetComponent<Renderer>();
        StartCoroutine(FadeOut());
    }

    IEnumerator FadeOut() {
        Color startColor = renderer.material.color;
        Color endColor = new Color(startColor.r, startColor.g, startColor.b, 0);
        float elapsedTime = 0;

        while (elapsedTime < duration) {
            renderer.material.color = Color.Lerp(startColor, endColor, elapsedTime / duration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        renderer.material.color = endColor;
    }
}

public class RotateLerpExample : MonoBehaviour {
    public Vector3 targetRotation;
    public float duration = 1.0f;

    void Start() {
        StartCoroutine(RotateToTarget());
    }

    IEnumerator RotateToTarget() {
        Quaternion startRotation = transform.rotation;
        Quaternion endRotation = Quaternion.Euler(targetRotation);
        float elapsedTime = 0;

        while (elapsedTime < duration) {
            transform.rotation = Quaternion.Lerp(startRotation, endRotation, elapsedTime / duration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        transform.rotation = endRotation;
    }
}

public class ScaleLerpExample : MonoBehaviour {
    public Vector3 targetScale;
    public float duration = 1.0f;

    void Start() {
        StartCoroutine(ScaleToTarget());
    }

    IEnumerator ScaleToTarget() {
        Vector3 startScale = transform.localScale;
        Vector3 endScale = targetScale;
        float elapsedTime = 0;

        while (elapsedTime < duration) {
            transform.localScale = Vector3.Lerp(startScale, endScale, elapsedTime / duration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        transform.localScale = endScale;
    }
}

```