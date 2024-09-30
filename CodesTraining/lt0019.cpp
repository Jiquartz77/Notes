#include "leetcode.h"
using namespace std;

class Solution{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode(0);
        ListNode* tmp, *fast, *slow;

        dummy->next=head;
        fast = slow = dummy;

        while (n--  && fast !=nullptr){
            fast=fast->next;
        }
        fast= fast->next;  //let slow be the previous node of the target

        while (fast !=nullptr){
            fast=fast->next;
            slow=slow->next;
        }

        tmp=slow->next;
        slow->next=tmp->next;
        delete tmp;

        return head;
    }
};

int main(){
    return 0;
}