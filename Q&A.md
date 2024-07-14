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
3. Serialized Varibles