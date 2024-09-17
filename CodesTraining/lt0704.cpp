#include "leetcode.h"
using namespace std;

class Solution{
public:
    int search(vector<int>& nums, int target) {
        if (nums.size()==0){
            return -1;
        }

        if (nums.empty()){
            return -1;
        }

        int left, right, mid;
        left =0; right = nums.size();
        while (left < right){
            mid = (right - left)/2 +left;
            if (nums[mid] > target){
                right = mid -1;
            }else if (nums[mid] < target){
                left = mid +1;
            }else {
                return mid;
            }
        }

        return -1;
    }
};

int main(){
    Solution *sol =new Solution();
    vector<int> nums= {-1,0,3,5,9,12};
    int target = 5;
    auto res = sol->search(nums, target);
    cout<<res<<endl;

    return 0;
}