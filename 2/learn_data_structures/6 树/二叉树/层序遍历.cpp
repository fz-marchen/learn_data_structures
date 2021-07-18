#define MaxSize 100

struct ElemType {
  int value;
}

typedef struct BiTNode {
  ElemType data;
  struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

// 队列带头结点
typedef struct LinkNode {
    ElemType data;
    struct LinkNode* next;
} LinkNode;


typedef struct {
   LinkNode* front, * rear;
} LinkQueue;

void visit(BiTNode *p) {
  printf("%c", p->data);
}

void levelorder(BiTree T) {
  LinkQueue Q;
  InitQuque(Q);
  BiTree p;
  EnQueue(Q, T);
  while(!IsEmpty(Q)) {
    Dequeue(Q, p);
    visit(p);
    if(p->lchild != NULL) {
      EnQueue(Q, p->lchild)
    }

    if(p->rchild != NULL) {
      EnQueue(Q, p->rchild)
    }
  }
}

int main() {

}
