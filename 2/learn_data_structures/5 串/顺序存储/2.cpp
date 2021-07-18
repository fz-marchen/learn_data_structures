#define MAXLEN 255

// 动态数组实现（堆分配存储）
typedef struct {
  char *ch;
  int length;
}HString;

HString S;
S.ch = (char*)malloc(InitSize * sizeof(char))