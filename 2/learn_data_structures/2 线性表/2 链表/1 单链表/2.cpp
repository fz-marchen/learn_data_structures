#include <stdlib.h>
#include <iostream>
using namespace std;



typedef struct LNode {
    int data;
    struct LNode* next;
} LNode, *LinkList;



bool InitList(LinkList& L) {
    L = (LNode*)malloc(sizeof(LNode));
    if (L == NULL) return false;
    L -> next = NULL;
    return true;

}
bool Empty(LinkList L) {
    if (L->next == NULL) {
        return false;
    }
    else {
        return true;
    }
}

bool ListInsert(LinkList& L, int i, int e) {
    if (i < 1) return false;
    LNode* p;
    int j = 0;
    p = L;
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
   /* if (p == NULL) return false;
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;*/
    InsertNextNode(p, e);
}

bool InsertNextNode(LNode *p, int e) {
    if (p == NULL) return false;
    LNode* s = (LNode*)malloc(sizeof(LNode));
    if (s == NULL)  return false;
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

bool InsertPriorNode(LNode* p, int *e) {
    if (p == NULL) return false;
    LNode* s = (LNode*)malloc(sizeof(LNode));
    if (s == NULL)  return false;
    s->next = p->next;
    p->next = s;
    s->data = p->data;
    p->data = e;
    return e;
}



bool DeleteNode(LNode* p) {
    if (p == NULL) return false;

    LNode* q = p->next;
    p->data = q->data;
    p->next = q->next;
    free(q);
    return true;
}

// O(N)
bool ListDelete(LinkList& L, int i, int * e) {
    if(i < 1) return false;
    LNode* p;
    int j = 0;
    p = L;
    while (p != NULL && i < j - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL)  return false;
    if (p->next == NULL)  return false;
    LNode* q = p->next;
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}

LNode * getElem(LinkList& L, int i ) {
    if (i < 1) return NULL;
    int j = 0;
    LNode* p = L;
    while (p!=NULL && j < i) {
        p = p->next;
        j++;
    }
    return p;
}

LNode* locateElem(LinkList& L, int *e) {
    LNode* p = L->next;
    while (p != NULL && p->data != e) {
        p = p->next;
    }
    return p;
}

int Length(LinkList L) {
    int len = 0;
    LNode* p = L;
    while (p->next != NULL) {
        p = p->next;
        len++;
    }
    return len;
}


LinkList List_TailInsert(LinkList& L) {
    int x;
    LinkList* L = (LinkList*)malloc(sizeof(LNode));
    LNode* s, * r = L;
    scanf("%d", &x);
    while (x != 9999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
    return L;
}

// 头插法
LinkList List_HeadInsert(LinkList& L) {
    int x;
    LNode* s;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d", &x);
    while (x != 9999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}



int main() {
    LinkList L;

    InitList(L);
    /* for (int i = 0; i < MaxSize; i++) {
         cout << "i=" << i << endl;
     }*/
    cout << "i=" << endl;
    return 0;
}


