#include <stdlib.h>
#include <iostream>
using namespace std;

#define InitSize 10


// 循环单链表
typedef struct DLNode {
    int data;
    struct DLNode* prior, * next;
} DLNode, * DLinkList;


// 初始化循环单链表
bool InitDLinkList(DLinkList& L) {
    L = (DLNode*)malloc(sizeof(DLNode));
    if (L == NULL) return false;
    L->prior = L;
    L->next = L;
    return true;
}

bool empty(DLinkList L) {
    if (L->next == L) {
        return true;
    }
    else {
        return false;
    }
}

bool isTail(DLinkList L, DLNode* p) {
    if (p->next == L) {
        return true;
    }
    else {
        return false;
    }
}




int main()
{
    DLinkList L;
    InitDLinkList(L);

    /* for (int i = 0; i < MaxSize; i++) {
         cout << "i=" << i << endl;
     }*/
    cout << "i=" << endl;
    return 0;
}
