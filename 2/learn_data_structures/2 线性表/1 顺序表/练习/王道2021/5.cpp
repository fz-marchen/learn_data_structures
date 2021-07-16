
// P19.5
// 从顺序表中删除其值在给定值s与t之间(包含s和t, 要求s < t)的所有元素,
// 如果s或t不合理或顺序表为空, 则显示出错信息并退出运行

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
    list.data[i] = data[i];
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

// P19.5
// 从顺序表中删除其值在给定值s与t之间(包含s和t, 要求s < t)的所有元素,
// 如果s或t不合理或顺序表为空, 则显示出错信息并退出运行
void Del(List &list, int s, int t)
{
  int k = 0;
  for (int i = 0; i < list.length; i++)
  {
    if (list.data[i] > s && list.data[i] < t)
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
  Del(list, 3, 8);

  PrintList(list);
}