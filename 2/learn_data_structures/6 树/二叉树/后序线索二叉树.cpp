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


void PostThread(ThreadTree T) {

  if(T != NULL) {
    PostThread(T->lchild);
    PostThread(T->rchild);
    visit(T);
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

void CreatePostThread(ThreadTree T) {
  pre = NULL;
  if(T != NULL) {
    PostThread(T);
    if(pre->rchild == NULL) {
      pre->rtag = 1;
    }
  }
}


int main() {

}


