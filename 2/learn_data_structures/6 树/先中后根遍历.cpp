#define MaxSize 100

struct ElemType {
  int value;
}

typedef struct BiTNode {
  ElemType data;
  struct BiTNode *lchild, *rchild;
} BiTNode, *TreeNode;R
void visit(BiTNode *p) {
  printf("%c", p->data);
}
// 先根遍历: 根左右 
void PreOrder(TreeNode R) {
  if(R != NULL) {
    visit(R);
    while() {
      PreOrder(T);
    }
 
  }
}



// 后根遍历: 左右根 

void PostOrder(TreeNode R) {
  if(R != NULL) {

    while() {
      PostOrder(R);
    }
    visit(R);
  }
}

// 层序遍历

int main() {

}
