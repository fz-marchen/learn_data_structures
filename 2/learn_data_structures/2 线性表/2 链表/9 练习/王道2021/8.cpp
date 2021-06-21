// 给定两个单链表,编写算法找出两个链表的公共结点
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

LinkList find(LinkList &L1, LinkList &L2)
{
  LNode *l1 = L1->next, *l2 = L2->next;
  LinkList l;
  while (l1 != NULL)
  {
    while (l2 != NULL)
    {
      if (l1->data == l2->data)
      {
        l = l1;
      }
    }
    l1 = l1->next;
  }
  return l;
}

int main()
{
  LinkList l;
  InitList(l);
  HeadCreatList(l);
  printLinkList(l);
  // RangeDel(l, 1, 10);
  std::cout << "======" << std::endl;
  printLinkList(l);
}
