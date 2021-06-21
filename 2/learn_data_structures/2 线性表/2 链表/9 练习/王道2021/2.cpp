//在带头结点的单链表中, 删除所有值为x的结点, 并释放其空间, 假设为x的结点不唯一
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

bool Del_X(LinkList &L, ElemType x)
{
  LNode *p = L->next, *pre = L, *temp;
  while (p != NULL)
  {
    if (p->data == x)
    {
      temp = p;
      p = p->next;
      pre->next = p;
      free(temp);
    }
    else
    {
      pre = p;
      p = p->next;
    }
  }
}
int main()
{
  LinkList l;
  InitList(l);
  HeadCreatList(l);
  printLinkList(l);
  Del_X(l, 9);
  printLinkList(l);
}
