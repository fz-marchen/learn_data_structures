#define MaxSize 100

struct ElemType {
  int value;
}

typedef struct BiTNode {
  ElemType data;
  struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void visit(BiTNode *p) {
  printf("%c", p->data);
}
// 先序遍历: 根左右 前缀表达式
void PreOrder(BiTree T) {
  if(T != NULL) {
    visit(T);
    PreOrder(T->lchild);
    PreOrder(T->rchild);
  }
}

// 中序遍历: 左根右 中缀表达式
void InOrder(BiTree T) {
  if(T != NULL) {
    InOrder(T->lchild);
    visit(T);
    InOrder(T->rchild);
  }
}

// 后序遍历: 左右根 后缀表达式

void PostOrder(BiTree T) {
  if(T != NULL) {
    PostOrder(T->lchild);
    PostOrder(T->rchild);
    visit(T);
  }
}

int treeDepth(BiTree T) {
  if(T == NULL) {
    return 0;
  }
  else {
    int l = treeDepth(T->lchild);
    int r = treeDepth(T->rchild);

    return l > r ? l + 1 : r + 1;
  }
}
int main() {

}
