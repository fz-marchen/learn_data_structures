#include <iostream>
using namespace std;

#define MaxSize 10
#define ElemType char

// top指针初始值为-1
typedef struct
{
    ElemType data[MaxSize];
    int top;
} SqStack;

void InitStack(SqStack &S)
{
    S.top = -1;
}

bool StackEmpty(SqStack S)
{
    if (S.top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Push(SqStack &S, ElemType x)
{
    if (S.top == MaxSize - 1)
        return false;
    // S.top = S.top + 1;
    // S.data[S.top] = x;
    S.data[++S.top] = x;
    return true;
}

bool Pop(SqStack &S, ElemType &x)
{
    if (S.top == -1)
        return false;
    //  x = S.data[S.top];
    //  S.top = S.top - 1;
    x = S.data[S.top--];
    return true;
}

// 例子1
// 前缀表达式 + a b
// 中缀表达式 a + b
// 后缀表达式 a b +

// 例子2
// 前缀表达式 - + a b c
// 中缀表达式 a + b - c
// 后缀表达式 a b + c -

// 例子3
// 前缀表达式 - + a b * c d
// 中缀表达式 a + b - c * d
// 后缀表达式 a b + c d * -

// 例子4    
// 前缀表达式 
// 中缀表达式 ((15 / (7 - (1 + 1))) * 3) - (2 + (1 + 1))
// 后缀表达式 15 7 1 1 + - / 3 * 2 1 1 + + -

// 中缀表达式转后缀表达式
// 中缀表达式 A + B * (C - D) - E / F
// 后缀表达式1 A B C D - * + E F / - 左优先
// 后缀表达式2 A B C D - * E F / - + 不符合左优先原则

// 中缀表达式转前缀表达式
// 中缀表达式 A + B * (C - D) - E / F
// 前缀表达式1 + A - * B - CD / E F 右优先
// 前缀表达式2 - + A * B - C D / E F 不符合右优先原则

// 前缀表达式-波兰表达式

// 中缀表达式

// 后缀表达式-逆波兰表达式




int main()
{

  std::cout << "======" << std::endl;
}