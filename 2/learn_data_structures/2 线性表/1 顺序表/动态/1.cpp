#include <stdlib.h>
#include <iostream>
using namespace std;

#define InitSize 10


// 顺序表 动态
typedef struct {
    int* data;
    int MaxSize;
    int length;
} SeqList;


void InitList(SeqList& L) {
    L.data = (int*)malloc(InitSize * sizeof(int));
    L.length = 0;
    L.MaxSize = InitSize;
}

// 增加动态数组的长度
void IncreaseSize(SeqList& L, int len) {
    int* p = L.data;
    L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
    for (int i = 0; i < L.length; i++) {
        L.data[i] = p[i];
        cout << "p[i=" << p[i] << endl;
    }

    L.MaxSize = L.MaxSize + len;
    free(p);
}


int main()
{
    SeqList L;
    InitList(L);

    IncreaseSize(L, 5);
    /* for (int i = 0; i < MaxSize; i++) {
         cout << "i=" << i << endl;
     }*/
    cout << "i=" << endl;
    return 0;
}
