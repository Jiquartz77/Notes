#include "leetcode.h"
using namespace std;

class LinkList {
public:
    class LinkNode{
        public: int val; LinkNode* next;
        LinkNode(int val): val(val), next(nullptr){}
    };
    LinkList(){
        _dummy = new LinkNode(0);
        _size = 0;
    }
private: LinkNode* _dummy; int _size;
};


class Solution{
public:
ListNode* reverseList(ListNode* head) {
    ListNode * pre = nullptr;
    ListNode * cur = head;
    ListNode * tmp = head->next;

    while (cur!=nullptr){

    }
}
};

int main(){
    return 0;
}