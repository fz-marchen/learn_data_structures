

#define MaxSize 10
#define ElemType int

typedef struct
{
    ElemType data[MaxSize]; // 静态数组存放栈中元素
    int top0;               // 0号栈栈顶指针
    int top1;               // 1号栈栈顶指针
} ShStack;

void InitStack(SqStack &S)
{
    S.top0 = -1;
    S.top = MaxSize;
}

int main()
{

    return 0;
}