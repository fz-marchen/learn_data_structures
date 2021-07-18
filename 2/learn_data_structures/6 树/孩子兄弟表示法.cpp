#define MaxSize 100


// 链式存储
struct ElemType {
  int value;
}

typedef struct CSNode  {
  ElemType data;
  struct CSNode *firstchild, *nextsibling; // 双亲位置域
} CSNode, *CSTree;


int main() {

}



