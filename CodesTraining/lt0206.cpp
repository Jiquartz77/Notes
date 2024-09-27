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
LinkNode* reverseList(LinkNode* head) {
    LinkNode * pre = nullptr;
    LinkNode * cur = head;
    LinkNode * tmp = nullptr;

    while (cur!=nullptr){
        tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }

    return pre;
}
};

int main(){
    return 0;
}