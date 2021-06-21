

#define MaxSize 10
#define ElemType int

// top指针初始值为0
typedef struct {
    ElemType data[MaxSize];
    int top;
} SqStack;

void InitStack(SqStack& S) {
    S.top = 0;
}

bool StackEmpty(SqStack S) {

    if (S.top == 0) {
        return true;
    }
    else {
        return false;
    }
}
bool Push(SqStack& S, ElemType x) {
    if (S.top == MaxSize - 1) return false;
    // S.top = S.top + 1;
    // S.data[S.top] = x;
    S.data[S.top++] = x;
    return true;
}

bool Pop(SqStack& S, ElemType &x) {
    if (S.top == -1) return false;
    //  x = S.data[S.top];
    //  S.top = S.top - 1;
    x = S.data[--S.top];
    return true;
}

bool GetTop(SqStack& S, ElemType& x) {
    if (S.top == 0) return false;
    x = S.data[--S.top];
    return true;
}

int main()
{
    SqStack S;
    InitStack(S);

    for (int i = 0; i < 10; i++) {
        Push(S, i);
    }
    
    bool b = StackEmpty(S);

    return 0;
}