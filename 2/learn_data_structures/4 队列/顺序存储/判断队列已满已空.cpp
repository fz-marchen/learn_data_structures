#define MaxSize 10
#define ElemType int

// 判断队列已满/已空
// 1 牺牲一个存储单元，用来判断队列是否满了

typedef struct1 {
    ElemType data[MaxSize];
    int front, rear;
} SqQueue1;

void InitQueue(SqQueue1& Q) {
    Q.front = Q.rear = 0;
}

// 2 添加一个size，用来记录长度
// 初始化是赋值0，插入成功++，删除成功--
// 空: size=0 满: size=MaxSize

typedef struct2 {
    ElemType data[MaxSize];
    int front, rear;
    init size;
} SqQueue2;


// 3 添加一个tag，用来记录最近进行的是删除/插入
// 每次插入成功时，令tag=1。每次删除成功时，令tag=0


typedef struct3 {
    ElemType data[MaxSize];
    int front, rear;
    init tag;
} SqQueue3;


int main()
{

    return 0;
}