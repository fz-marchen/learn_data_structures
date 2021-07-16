
typedef struct
{
  char *ch;
  int length;
} SString;

// 朴素模式匹配
// 模式串长度为m，主串长度为n
// 最好时间复杂度：O(m)
// 最坏时间复杂度：O(nm)
int Index(SString S, SString T)
{
  int k = 1;
  int i = k, j = 1;
  while (i <= S.length && j <= T.length)
  {
    if (S.ch[i] == T.ch[j])
    {
      ++i;
      ++j;
    }
    else
    {
      k++;
      i = k;
      j = 1;
    }
  }
  if (j > T.length)
    return k;
  else
    return 0;
}

// KMP模式匹配算法
// 模式串长度为m，主串长度为n

int Index1(SString S, SString T, int next[])
{

  int i = 1, j = 1;
  while (i <= S.length && j <= T.length)
  {
    if (j == 0 || S.ch[i] == T.ch[j])
    {
      ++i;
      ++j;
    }
    else
    {
      j = next[j];
    }
  }
  if (j > T.length)
    return i - T.length;
  else
    return 0;
}
