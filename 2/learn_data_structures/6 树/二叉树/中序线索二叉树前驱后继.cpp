#define MaxSize 100

struct ElemType {
  int value;
}

typedef struct ThreadNode {
  ElemType data;
  struct ThreadNode *lchild, *rchild;
  int ltag, rtag; // tag == 0 表示指针指向孩子 tag == 0  表示指针指向线索
} ThreadNode, *ThreadTree;


ThreadNode *Firstnode(ThreadNode *p) {
  while(p->ltag == 0) p = p->lchild;
  return p;
}

ThreadNode *Nextnode(ThreadNode *p) {
  if(p->rtag == 0) Firstnode(p->rchild);
  else return p->rchild;
}

void Inorder(ThreadNode *T) {
  for(ThreadNode *p = Firstnode(T); p != NULL; p = Nextnode(p))
  visit(p);
}

ThreadNode *Lastnode(ThreadNode *p) {
  while(p->rtag == 0) p = p->rchild;
  return p;
}

ThreadNode *Prenode(ThreadNode *p) {
  if(p->ltag == 0) Lastnode(p->lchild);
  else return p->rclchildhild;
}

void RevInorder(ThreadNode *T) {
  for(ThreadNode *p = Lastnode(T); p != NULL; p = Prenode(p))
    visit(p);
}



int main() {

}


