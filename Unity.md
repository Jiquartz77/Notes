1. Local & Global direction
2. Debug.Log/LogWarning/LogError
3.  #### Move
    1. `moveY = CharacRigid.velocity.y; //vertical stays; ` \
       `moveY = Input.GetAxisRaw("Vertical"); // vertical move`
    2. `Rigidbody rb = GetComponent<Rigidbody>();` \
        `rb.transform.velocity = new Vector3(moveX, moveY, moveZ);`
    3. `transform.Translate(translation, 0, 0);`


    

1. 
![image here](.\images\unity_struct.jpeg "Title")

1. #region A #endregion
2. [Header("Examples")]
3. Box collider encounters [Ghost Verticle](https://forum.unity.com/threads/solved-character-gets-stuck-in-floor.571909/)
4. ### Frames
    - Interaction Mode 16ms;
    - Application.targetFrameRate = 60;
5. Invoke("AttackEnd", AttackInterval);
6. Start() vs Awake()
7. Projetct Settings - Physics 2D - Collision Matrix
8. AudioClip audioClip; AudioSource sous; sous.PlayShot(audioClip, SoundVolume);
9. Collision:
   - >=2 colliders
   - >=1 rigidbody