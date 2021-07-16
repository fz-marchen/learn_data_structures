//P19.3
//对长度为n的顺序表L, 编写一个时间复杂度为O(m)空间复杂度为O(1)的算法,
//该算法删除线性表中所有值为x的数据元素
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX 10
#define ElemType int

typedef struct
{
  ElemType data[MAX];
  int length;
} List;

#pragma region
void InitList(List &L)
{
  for (int i = 0; i < MAX; i++)
  {
    L.data[i] = 0;
  }
  L.length = 0;
}

void CreateList(List &list, vector<int> data)
{
  for (int i = 0; i < data.size(); i++)
  {
    if (data[i] % 5 == 0)
    {
      list.data[i] = 99;
    }
    else
    {
      list.data[i] = data[i];
    }

    list.length++;
  }
}
void PrintList(List list)
{
  for (int i = 0; i < list.length; i++)
  {
    cout << list.data[i] << " ";
  }
  cout << endl;
}
#pragma endregion

//P19.3
//对长度为n的顺序表L, 编写一个时间复杂度为O(m)空间复杂度为O(1)的算法,
//该算法删除线性表中所有值为x的数据元素
void DelX(List &list, int x)
{
  int k = 0;
  for (int i = 0; i < list.length; i++)
  {
    if (list.data[i] == x)
    {
      k++;
    }
    else
    {
      list.data[i - k] = list.data[i];
    }
  }
  list.length = list.length - k;
}

int main()
{
  List list;
  vector<int> data;              //创建一个向量存储容器 int
  for (int i = 1; i <= MAX; i++) // push_back(elem)在数组最后添加数据
  {
    data.push_back(i);
  }
  InitList(list);
  CreateList(list, data);
  PrintList(list);
  DelX(list, 99);

  PrintList(list);
}