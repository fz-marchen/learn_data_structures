// 1
// 没计一个递归算法, 删除不带头结点的单链表中所有值为×的结点
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
  L = NULL;
  return true;
}
// 头插法
LinkList HeadCreatList(LinkList &L)
{
  ElemType data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 6};
  int size = sizeof(data) / sizeof(data[0]);
  if (L == NULL)
  {
    L = (LinkList)malloc(sizeof(LNode));
    L->data = data[0];
    L->next = NULL;
  }

  LinkList p = L;
  for (int i = 1; i < size; i++)
  {
    LNode *s = (LinkList)malloc(sizeof(LNode));
    s->data = data[i];
    s->next = NULL;
    p->next = s;
    p = s;
  }
}

void printLinkedList(struct LNode *head)
{ //把链表输出
  struct LNode *p;
  p = head;
  while (p != NULL)
  {
    printf(" %d", p->data);
    p = p->next;
  }
  printf("\n");
}

#pragma endregion

void Del_X(LinkList &l, ElemType x)
{
  if (l == NULL)
    return;
  LNode *p;
  if (l->data == x)
  {
    p = l;
    l = l->next;
    free(p);
    Del_X(l, x);
  }
  else
  {
    Del_X(l->next, x);
  }
}
int main()
{
  LinkList head;
  InitList(head);
  HeadCreatList(head);
  printLinkedList(head);
  Del_X(head, 6);
  printLinkedList(head);
}
