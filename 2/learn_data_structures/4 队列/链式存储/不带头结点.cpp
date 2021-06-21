#define ElemType int

// 队列不带头结点
typedef struct LinkNode {
    ElemType data;
    struct LinkNode* next;
} LinkNode;


typedef struct {
    LinkNode* front, * rear;
}LinkQueue;

void InitQueue(LinkQueue& Q) {
    Q.front = NULL;
    Q.rear = NULL;
}

bool IseEmpty(LinkQueue Q) {
    if (Q.front == NULL) {
        return true;
    }
    else {
        return false;
    }
}
void EnQueue(LinkQueue& Q, ElemType x) {
    LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
    s->data = x;
    s->next = NULL;
    if (Q.front == NULL) {
        Q.front = s;
        Q.rear = s;
    }
    else {
        Q.rear->next = s;
        Q.rear = s;
    }
}

bool DeQueue(LinkQueue& Q, ElemType& x) {
    if (Q.front == NULL) return false;
    LinkNode* p = Q.front;
    x = p->data;
    Q.front = p->next;
    if (Q.rear == p) {
        Q.rear = NULL;
        Q.front = NULL;
    }
    free(p);
    return true;
}

int main()
{
    LinkQueue Q;
    InitQueue(Q);

    return 0;
}