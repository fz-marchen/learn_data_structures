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

bool bracketCheck(ElemType str[], int length) {
  SqStack S;
  InitStack(S);
  for(int i = 0; i < length; i++) {
    if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
      Push(S, str[i]);
    } else {
      if(StackEmpty(S)) return false;
      ElemType topElem;
      Pop(S, topElem);
      if(str[i] == ')' && topElem != '(') return false;
      if(str[i] == ']' && topElem != '[') return false;
      if(str[i] == '}' && topElem != '{') return false;
    }
  }


}


int main()
{

  std::cout << "======" << std::endl;
}