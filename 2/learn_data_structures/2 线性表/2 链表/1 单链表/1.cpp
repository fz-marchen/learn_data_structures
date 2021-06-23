#include <stdlib.h>
#include <iostream>
using namespace std;



typedef struct LNode {
    int data;
    struct LNode* next;
} LNode, *LinkList;


bool InitList(LinkList &L) {
    L = NULL;
    return true;
}
bool Empty(LinkList L) {
    retutrn(L == NULL);
}

bool ListInsert(LinkList& L, int i, int e) {
    if (i < 1) return false;
    if (i == 1) {
        LNode* s = (LNode*)malloc(sizeof(LNode));
        s->data = e;
        s->next = L;
        L = s;
        return true;
    }

    LNode* p;
    int j = 1;
    p = L;
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL) return false;
    LNode* s = (LNode*)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;

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



   


