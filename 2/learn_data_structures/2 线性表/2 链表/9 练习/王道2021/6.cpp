//有一个带头结点的单链表L,设计一个算法使其元素递增有序
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
  ElemType data[13] = {10, 6, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 6};
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

#pragma endregion;

void sort(LinkList &L)
{
  LNode *pre, *p = L->next, *r = p->next;
  p->next = NULL;
  p = r;
  while (p != NULL)
  {
    r = p->next;
    pre = L;
    while (pre->next != NULL && pre->next->data < p->data)
    {
      pre = pre->next;
    }
    p->next = pre->next;
    pre->next = p;
    p = r;
  }
}
int main()
{
  LinkList l;
  InitList(l);
  HeadCreatList(l);
  printLinkList(l);
  sort(l);
  std::cout << "======" << std::endl;
  printLinkList(l);
}
