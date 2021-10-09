#define MaxVertexNum 100
#define VertextType int
// 边/弧
typedef struct ArcNode
{
  int adjvex;           // 边/弧指向那个结点
  struct ArcNode *next; // 指向下一条弧的指针

} ArcNode;

// 顶点
typedef struct VNode
{
  VertextType data; // 顶点信息
  ArcNode *first;   // 第一条边/弧

} VNode, AdjList[MaxVertexNum];

// 用领接表存储的图
typedef struct
{
  AdjList vertices;
  int vexnum, arcnum;

} ALGraph;

int main()
{
}
