#include "leetcode.h"
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left, right, mid;
        left= 0; right = nums.size();
        while (left <right){
            mid = (right - left )/2 + left;
            if (nums[mid] < target){
                left = mid +1;
            }else if (nums [mid] > target){
                right = mid;
            }else {
                return mid;
            }
        }

        return right;
    }
};

int main(){
    return 0;
}