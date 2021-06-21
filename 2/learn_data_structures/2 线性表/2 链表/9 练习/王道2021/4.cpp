//试编写在带头结点的单链表中删除一个最小值结点的高效算法(假设最小值结点是唯一的)
#include <iostream>
using namespace std;

#define ElemType int

typedef struct LNode
{
  ElemType data;
  LNode *next;
} LNode, *LinkList;

#pragma region
// 初始化链表
bool InitList(LinkList &L)
{
  L = (LNode *)malloc(sizeof(LNode));
  // 内存不足 分配失败
  if (L == NULL)
  {
    return false;
  }
  L->next = NULL;
  return true;
}

// 头插法
LinkList HeadCreatList(LinkList &L)
{
  ElemType data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 6};
  int size = sizeof(data) / sizeof(data[0]);

  LinkList p = L;
  for (int i = 0; i < size; i++)
  {
    LNode *s = (LinkList)malloc(sizeof(LNode));
    s->data = data[i];
    s->next = NULL;
    p->next = s;
    p = s;
  }
}

void printLinkList(LinkList &l)
{ //把链表输出
  LNode *p;
  p = l->next;
  while (p != NULL)
  {
    std::cout << " " << p->data;
    p = p->next;
  }
  std::cout << "" << ::endl;
}

#pragma endregion

bool Del_Min(LinkList &L)
{
  LNode *pre = L, *p = pre->next;
  LNode *minpre = pre, *minp = p;
  while (p != NULL)
  {
    if (p->data < minp->data)
    {
      minp = p;
      minpre = pre;
    }
    pre = p;
    p = p->next;
  }
  minpre->next = minp->next;
  free(minp);
}
int main()
{
  LinkList l;
  InitList(l);
  HeadCreatList(l);
  printLinkList(l);
  Del_Min(l);
  std::cout << "======" << std::endl;
  printLinkList(l);
}
