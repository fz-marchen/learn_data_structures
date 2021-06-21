// 设在一个带表头结点的单链表中所有元素结点的数据值无序，试编写一个函数，删除表中所有介于给定的两个值（作为函数参数给出）之间的元素的元素（若存在）
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

// 设在一个带表头结点的单链表中所有元素结点的数据值无序，试编写一个函数，删除表中所有介于给定的两个值（作为函数参数给出）之间的元素的元素（若存在）
void RangeDel(LinkList &L, ElemType min, ElemType max)
{
  LNode *pre = L, *p = L->next;
  while (p != NULL)
  {
    if (p->data > min && p->data < max)
    {
      pre->next = p->next;
      free(p);
    }
    else
    {
      pre = p;
    }

    p = p->next;
  }
}
int main()
{
  LinkList l;
  InitList(l);
  HeadCreatList(l);
  printLinkList(l);
  RangeDel(l, 1, 10);
  std::cout << "======" << std::endl;
  printLinkList(l);
}
