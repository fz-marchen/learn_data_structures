#include <stdlib.h>
#include <iostream>
#define MaxSize 10
#define ElemType int

// 链栈
typedef struct LinkStack
{
    int data;
    struct LinkStack *next;
} LinkStack, *LinkStackList;

// 创

void InitStack(LinkStackList &Ls)
{
    Ls = (LinkStack *)malloc(sizeof(LinkStack));
    Ls->next = NULL;
}

// 增
LinkStackList Push(LinkStackList &Ls, ElemType x)
{
    LinkStackList p = Ls;
    LinkStack *q = (LinkStack *)malloc(sizeof(LinkStack));
    q->data = x;
    q->next = p->next;
    p->next = q;
}
// 删
bool Pop(LinkStackList &Ls)
{
    LinkStackList p = Ls;
    if (p->next == NULL)
        return false;
    LinkStack *q = p->next;
    free(q);
    p->next = q->next;
}

// 查
bool GetTop(LinkStackList &Ls, ElemType &x)
{
    if (Ls->next == NULL)
        return false;
    x = Ls->next->data;
    return true;
}

// 判空
bool StackEmpty(LinkStackList Ls)
{
    if (Ls->next == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// 判满

int main()
{
    LinkStackList Ls;
    InitStack(Ls);
    Push(Ls, 1);
    Push(Ls, 2);
    Pop(Ls);
    return 0;
}