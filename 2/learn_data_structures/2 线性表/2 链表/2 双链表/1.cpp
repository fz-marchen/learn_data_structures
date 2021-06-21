#include <stdlib.h>
#include <iostream>
using namespace std;

#define InitSize 10


// 双链表
typedef struct DNode {
    int data;
    struct DNode* prior, * next;
} DNode, * DlinkList;


// 初始化双链表
bool InitDLinkList(DlinkList& L) {
    L = (DNode*)malloc(sizeof(DNode));
    if (L == NULL) return false;
    L->prior = NULL;
    L->next = NULL;
    return true;
}

// 后插法，在p节点之后插入s节点
bool InsertNextDNode(DNode* p, DNode* s) {
    if (p == NULL || s == NULL) return false;
    DNode* q = p->next;
    s->next = q;
    if (q != NULL) {
        q->prior = s;
    }
    s->prior = p;
    p->next = s;
    return true;
}

// 删除p节点的后继节点
bool DeleteNextDNode(DNode* p) {
    if (p == NULL) return false;
    DNode* q = p->next;
    if (q == NULL) return false;
    p->next = q->next;
    if (q->next != NULL) {
        q->next->prior = p;
    }
    free(q);
    return true;
}

void DestroyList(DlinkList& L) {
    while (L->next != NULL) {
        DeleteNextDNode(L);
    }
    free(L);
    L = NULL;
}

DNode* xx(DlinkList& L) {
    DNode* p = L;
    while (p != NULL) {
        p = p->next;
    }
}

bool Empty(DlinkList L) {
    if (L->next == NULL) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    DlinkList L;
    InitDLinkList(L);


    return 0;
}
