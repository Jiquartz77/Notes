#include "leetcode.h"
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left, right;
        left = UpperBound(nums, target);
        right = UpperBound(nums, target+1)-1;
        if (left >= nums.size() || nums[left]!= target){
            return {-1, -1};
        }
        return {left, right};
    }

    int UpperBound(vector<int>& nums, int target){
        int l, r, mid;
        l=0; r= nums.size();
        while (l<r){
            mid = (r-l)/2+l;
           if(nums[mid] < target){
                l = mid+1;
            }else {
                r=mid;
            }
        }
         return l;
    }
};