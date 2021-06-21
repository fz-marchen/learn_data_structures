#include <iostream>
using namespace std;

#define MaxSize 10

// 顺序表 静态
// sequence：顺序 list：表
typedef struct {
    int data[MaxSize];
    int length;
} SqList;


void InitList(SqList &L) {
    L.length = 0;
}

// 时间复杂度 O(n)
bool ListInsert(SqList& L, int i, int e) {
    if (i < 1 || i > L.length + 1) {
        return false;
    }
    if (L.length >= MaxSize) {
        return false;
    }
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

// 时间复杂度 O(n)
bool ListDelete(SqList& L, int i, int &e) {
    if (i < 1 || i > L.length + 1) {
        return false;
    }
    e = L.data[i - 1];
    for (int j = L.length; j >= i; j--) {
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;
}

// 按位查找
// 时间复杂度 O(1)
int GetElem(SqList L, int i) {
    return L.data[i - 1];
}

// 按值查找
// 时间复杂度 O(n)
int GetElem(SqList L, int e) {
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == e) {
            return i + 1;
        }
    }
    return 0;
}

int main()
{
    SqList L;
    InitList(L);
    ListInsert(L, 1, 1);
    ListInsert(L, 2, 2);
    ListInsert(L, 3, 3);

    int e = -1;
    if (ListDelete(L, 3, e)) {
        printf("已删除第三个元素，删除元素值为=%d\n", e);
    }
    else {
        printf("位序i不合法，删除失败\n");
    }
    
    return 0;
}