#define MaxSize 100

struct ElemType {
  int value;
}

typedef struct BiTNode {
  ElemType data;
  struct BiTNode *lchild, *rchild;
  int ltag, rtag; // tag == 0 表示指针指向孩子 tag == 0  表示指针指向线索
} BiTNode, *BiTree;






BiTNode *p; // 目标结点
BiTNode *pre = NULL; // 指向当前访问结点的前驱
BiTNode *final = NULL; // 用于记录最终结果

void visit(BiTNode *q) {
  if(q == p) {
    final = pre;
  } else {
    pre = q;
  }
  printf("%c", p->data);
}
void FindPre(BiTree T) {
  if(T != NULL) {
    FindPre(T->lchild);
    visit(T);
    FindPre(T->rchild);
  }
}

int main() {

}


