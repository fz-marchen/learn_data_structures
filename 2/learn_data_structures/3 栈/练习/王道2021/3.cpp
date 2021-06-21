#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//假设以I和O分别表示入栈和出栈操作。栈的初态和终态均为空, 入栈和出栈的操作序列可表示为仅由I和O组成的序列, 可以操作的序列称为合法序列, 否则称为非法序列
//(1)下面所示的序列中哪些是合法的
//    A.IOIIOIOO 合法 B.IOOIOIIO C.IIIOIOIO D.IIIOOIOO  合法
//(2)通过对(1)的分析, 写出一个算法, 判定所给的操作序列是否合法。若合法, 返回true，否则返回 false(假定被判定的操作序列已存入一维数组中)

void judge(vector<char> A)
{
  int k = 0, j = 0;
  for (int i = 0; i < A.size(); i++)
  {
    if (A[i] == 'I')
    {
      k++;
    }
    if (A[i] == 'O')
    {
      j++;
    }
  }
  if (j == k)
  {
    cout << "hefa 序列合法" << endl;
  }
  else
  {
    cout << "buhefa 序列不合法" << endl;
  }
}

int main()
{
  vector<char> str1 = {'I', 'O', 'I', 'I', 'O', 'I', 'O', 'O'};
  judge(str1);
}