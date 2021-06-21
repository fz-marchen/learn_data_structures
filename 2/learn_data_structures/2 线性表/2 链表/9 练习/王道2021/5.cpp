//试编写算法将带头结点的单链表就地逆置,所谓“就地”是指辅助空间复杂度为O(1)
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

bool reveser(LinkList &L)
{
  if (L->next == NULL)
  {
    return false;
  }

  LNode *pre, *p = L->next, *r = p->next;

  p->next = NULL;
  while (r != NULL)
  {
    pre = p;
    p = r;
    r = r->next;
    p->next = pre;
  }
  L->next = p;
}
int main()
{
  LinkList l;
  InitList(l);
  HeadCreatList(l);
  printLinkList(l);
  reveser(l);
  std::cout << "======" << std::endl;
  printLinkList(l);
}
