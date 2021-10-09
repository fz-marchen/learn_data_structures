#define MAX_VERTEX_NUM 100

bool visited[MAX_VERTEX_NUM];

void visit(int v) {}
void DeQueue(Queue Q, int v) {}
void EnQueue(Queue Q, int v) {}
void isEmpty(Queue Q) {}
void NextNeighbor(Graph G, int v) {}
void FirstNeighbor(Graph G, int v) {}

// QueueList Q;

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
