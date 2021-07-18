#define MaxSize 100


// 顺序存储
struct ElemType {
  int value;
}

typedef struct  {
  ElemType data;
  int parent; // 双亲位置域
} PTNode;

typedef struct  {
  PTNode nodes[MaxSize];
  int n; // 结点数
} PTtree;



int main() {

}



