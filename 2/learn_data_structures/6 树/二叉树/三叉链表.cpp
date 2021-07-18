#define MaxSize 100

struct ElemType {
  int value;
}

typedef struct BiTNode {
  ElemType data;
  struct BiTNode *lchild, *rchild;
  struct BiTNode *parent; // 父节点指针
} BiTNode, *BiTree;


int main() {
    BiTree root = NULL;

}

