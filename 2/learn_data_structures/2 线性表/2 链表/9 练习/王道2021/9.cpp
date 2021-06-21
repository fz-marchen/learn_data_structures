//给定一个带表头结点的单链表, 设head为头指针, 结点结构为(data, next), data为整型元素, next为指针, 试写出算法:按递增次序输出单链表中各结点的数据元素,并释放结点所占的存储空间(要求 : 不允许使用数组作为辅助空间)
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

void MinDel(LinkList &L, ElemType min, ElemType max)
{
  // LNode *pre = L, *p = L->next;
  // while (p != NULL)
  // {
  //   if (p->data > min && p->data < max)
  //   {
  //     pre->next = p->next;
  //     free(p);
  //   }
  //   else
  //   {
  //     pre = p;
  //   }

  //   p = p->next;
  // }
}

int main()
{
  LinkList l;
  InitList(l);
  HeadCreatList(l);
  printLinkList(l);
  MinDel(l, 1, 10);
  std::cout << "======" << std::endl;
  printLinkList(l);
}
