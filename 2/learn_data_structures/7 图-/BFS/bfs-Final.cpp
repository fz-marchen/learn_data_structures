// BFS算法（Final版）
#define MAX_VERTEX_NUM 100

bool visited[MAX_VERTEX_NUM]; // 访问标记数组

void visit(int v) {}
void DeQueue(Queue Q, int v) {}
void EnQueue(Queue Q, int v) {}
void isEmpty(Queue Q) {}
void NextNeighbor(Graph G, int v) {}
void FirstNeighbor(Graph G, int v) {}

// QueueList Q;

void BFSTraverse(Graph G)
{
  for (i = 0; i < G.vexnum; ++i)
  {
    visited[i] = false; // 访问标记数组初始化
  }
  InitQueue(Q);                  // 初始化辅助队列Q
  for (i = 0; i < G.vexnum; ++i) // 从0号顶点开始遍历
  {
    if (!visited[i]) // 对每个连通分量调用一次BFS
    {
      BFS(G, i); // vi未访问过，从vi开始BFS
    }
  }
}

void BFS(Graph G, int v) // 从顶点v出发，广度优先遍历图G
{
  visit(v);          // 访问初始顶点
  visited[v] = true; // 对v做已访问标记
  EnQueue(Q, v);     // 顶点v入队列Q
  while (!isEmpty(Q))
  {
    DeQueue(Q, v); // 顶点v出队列

    for (w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w))
    {
      // 检测v所有领接点
      if (!visited[w]) // w为v的尚未访问的邻接顶点
      {
        visit(w);          // 访问顶点w
        visited[w] = true; // 对w做已访问标记
        EnQueue(Q, w);     // 顶点w入队列
      }
    }
  }
}

int main()
{
}
