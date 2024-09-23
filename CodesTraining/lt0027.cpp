#include "leetcode.h"
using namespace std;

class Solution{
public:
    int removeElement(vector<int>& nums, int val) {
        int fast, slow;
        fast = slow = 0;

        while (fast < nums.size()) {
            if (nums[fast] != val) {
                nums[slow++] = nums[fast];
            }
            fast++;
        }

    }
};

int main(){
    return 0;
}