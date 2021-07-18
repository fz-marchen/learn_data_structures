#define MaxSize 100


// 顺序 + 链式存储
struct ElemType {
  int value;
};

typedef struct CTNode  {
  int child; // 孩子结点在数组中的位置
  struct CTNode *next; // 下一个孩子
};

typedef struct  {
  ElemType data;
  struct CTNode *firstChild; //第下一个孩子
} CTBox;

typedef struct  {
  CTBox nodes[MaxSize];
  int b, r; // 结点数和根的位置
} CTree;


int main() {

}



