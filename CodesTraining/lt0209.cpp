#include "leetcode.h"
using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int sum, len, res;
        sum=len=0;
        res = INT32_MAX;
        int start, end;
        start=end=0;
        for (;end<nums.size();end++){
            sum+=nums[end];
            while (sum>=s){
                len=end-start+1;
                res = res<len ? res : len;
                sum-=nums[start];
                start++;
            }
        }
        if (res == INT32_MAX){
            return 0;
        }
        return res;
    }

};