#define MaxSize 100

struct ElemType {
  int value;
}

typedef struct BiTNode {
  ElemType data;
  struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;


int main() {
    BiTree root = NULL;

    root = (BiTree) malloc(sizeof(BiTNode));
    root->data = {1};
    root->lchild = NULL;
    root->rchild = NULL;

    BiTNode *p = (BiTNode *) malloc(sizeof(BiTNode));
    p->data = {2};
    p->lchild = NULL;
    p->rchild = NULL;
    root->lchild = p;
}



