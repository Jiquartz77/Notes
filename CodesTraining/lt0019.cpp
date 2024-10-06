#include "leetcode.h"
using namespace std;

class LinkNode{
    public: int val; LinkNode* next;
    LinkNode(int val): val(val), next(nullptr){}
};

class LinkList {
public:
    LinkList(){
        _dummy = new LinkNode(0);
        _size = 0;
    }
    private:
    LinkNode* _dummy; int _size;
};

class Solution{
public:
    LinkNode* removeNthFromEnd(LinkNode* head, int n) {
        LinkNode *dummy = new LinkNode(0);
        LinkNode* tmp, *fast, *slow;

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

        return dummy->next;
    }
};

int main(){
    return 0;
}