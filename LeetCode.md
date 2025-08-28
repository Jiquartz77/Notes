1. 通常一维数组，要寻找任一个元素的右边or左边第一个比自己大or小的元素的位置，此时可用单调栈。
2. binSearch range left
     
```
//寻找第一个>=目标值的索引, 找不到则返回数组长度
private int search(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        while (left <= right){
            int mid = (right - left) / 2 + left;
            if (nums[mid] >= target){
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
```

3. slide window
```
滑动窗口的模板

//外层循环扩展右边界，内层循环扩展左边界
for (int l = 0, r = 0 ; r < n ; r++) {
	//当前考虑的元素
	while (l <= r && check()) {//区间[left,right]不符合题意
        //扩展左边界
    }
    //区间[left,right]符合题意，统计相关信息
}
```
4. 二叉树的最大深度==根节点的高度
深度：
高度：
根节点高度：

5. 求深度：前序； 高度：后序
前序： void getDepth(int &ans, int depth)
getDepth(ans, depth+1);

后序：int getDepth(TreeNode*);