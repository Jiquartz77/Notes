#include "leetcode.h"
using namespace std;

class LinkList {
public:
    class LinkNode{
        public:
        int val;
        LinkNode* next;

        LinkNode(int val): val(val), next(nullptr){}
    };

LinkList(){
    _dummy = new LinkNode(0);
    _size = 0;
}

int getIndexAt(int index) {
    if (index >= _size || index < 0){
        return -1;
    }

    LinkNode* cur = _dummy;
    while (index--){
        cur=cur->next;
    }
    return cur->val;
}

void insert_front(int val){
    LinkNode* newNode = new LinkNode(val);

    newNode->next = _dummy->next;
    _dummy->next = newNode;
    _size++;
}
void insert_back(int val){
    LinkNode* newNode = new LinkNode(val);
    LinkNode * cur=_dummy;

    while (cur->next != nullptr){
        cur=cur->next;
    }
    cur->next=newNode;
    _size++;
}

bool addAtIndex(int index, int val){
    if (index > _size ){ // can be size()
        return false;
    }
    if (index < 0){
        index=0;
    }

    LinkNode* newNode = new LinkNode(val);
    LinkNode* cur=_dummy;
    while (index--){
        cur=cur->next;
    }
    newNode->next=cur->next;
    cur->next=newNode;
    _size++;

    return true;
}

bool deleteAtIndex(int index){
    if (index >= _size || index < 0){ // can't be _size()
        return false;
    }

    LinkNode* cur=_dummy;
    while (index--){
        cur=cur->next;
    }

    LinkNode* delNode=cur->next;
    cur->next=delNode->next;
    delete delNode;
    _size--;
    return true;
}

private:
LinkNode* _dummy;
int _size;
};

int main(){
    return 0;
}