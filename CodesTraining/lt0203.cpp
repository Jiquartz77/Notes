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
private: LinkNode* _dummy; int _size;
};


class Solution{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        LinkNode* fast, *slow;
        fast->next = slow->next = head;

        while (n--){
            fast = fast->next;
        }
    }
};

int main(){
    return 0;
}