#define MaxSize 100

struct ElemType {
  int value;
}

typedef struct ThreadNode {
  ElemType data;
  struct ThreadNode *lchild, *rchild;
  int ltag, rtag; // tag == 0 表示指针指向孩子 tag == 0  表示指针指向线索
} ThreadNode, *ThreadTree;


ThreadNode *pre = NULL;

// 中序线索二叉树, 一遍遍历一遍线索化
void InThread(ThreadTree T) {

  if(T != NULL) {
    InThread(T->lchild);
    visit(T);
    InThread(T->rchild);
  }
}
void visit(ThreadNode *q) {
  if(q->lchild == NULL) {
    q->lchild = pre;
    q->ltag = 1;
  } 
  if(pre != NULL && pre->rchild == NULL) {
    pre->rchild = q;
    pre->rtag = 1;
  }
  pre = q;
}

void CreateInThread(ThreadTree T) {
  pre = NULL;
  if(T != NULL) {
    InThread(T);
    if(pre->rchild == NULL) {
      pre->rtag = 1;
    }
  }
}




int main() {

}


