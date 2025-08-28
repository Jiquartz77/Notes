# Solved
1. 为什么会倒？
    - A: Free Rotation Zaxis
    >float moveX =inputX * speed;
    >float moveY = CharacRigid.velocity.y;

    >CharacRigid.velocity = new Vector2(moveX, moveY);

    >if (Input.GetKeyDown(KeyCode.Space) == true){
    >CharacRigid.velocity= new Vector2(CharacRigid.velocity.x, jumpForce);
    >}
2. Physics Material vs PM2D 
- A: 3D vs 2D
3. 

# Unsolved
3. Serialized Varibles
1. - transform.Translate( translation, 0, 0); // 平移 vs rolling 
1. - CheckInput(): if (Input.GetButtonDown("Horizontal")) { Movement();}  // frame bug
    - Movement(); CheckInput(); // Normal
1. Background shakes when moving
1. render mode: wolrd space, screen space 
1. why character controller 对不齐
1. Loading animation 