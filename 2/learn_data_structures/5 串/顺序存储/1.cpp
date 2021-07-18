#define MAXLEN 255


// 静态数组实现（定长顺序存储）
typedef struct {
  char ch[MAXLEN];
  int length;
}SString;

int StringLength(SString S) {
  return S.length;
}

// 求子串
bool SubString(SString &Sub, SString S, int pos, int len) {
  if(pos+len-1 > S.length) return false;
  for(int i = pos; i < pos+len; i++)
    Sub.ch[i - pos + 1] = S.ch[i]
  Sub.length = len;
  return true;
}

// 比较大小
int StrCompare(SString S, SString T) {
  for(int i = 1; i <S.length && i <= T.length; i++) {
    if(S.ch[i] != T.ch[i])
      return S.ch[i] - T.ch[i];
  }
  return S.length - T.length;
}

// 求串在主串中的位置
int Index(SString S, SString T) {
  int i = 1, n = StringLength(S), m = StringLength(T);
  SString sub;
  while(i <= n - m + 1) {
    SubString(sub, S, i, m);
    if(StrCompare(sub, T) != 0) ++i;
    else return i;
  }
  return 0;
}