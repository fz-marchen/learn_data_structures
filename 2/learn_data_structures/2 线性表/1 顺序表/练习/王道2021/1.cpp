// 从顺序表中删除具有最小值的元素（假设唯一）并由函数返回被删元素的值。空出的位置由最后一个元素填补，若顺序表为空则显示出错信息并退出运行
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX 30
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

bool DelMin(List &L)
{
  if (L.length == 0)
    return false;
  ElemType min = L.data[0];
  int pos = 0;
  for (int i = 1; i < L.length; i++)
  {
    if (min > L.data[i])
    {
      min = L.data[i];
      pos = i;
    }
  }
  L.data[pos] = L.data[L.length - 1];
  L.length--;
  return true;
}

int main()
{
  List list;
  vector<int> data;            //创建一个向量存储容器 int
  for (int i = 1; i < 10; i++) // push_back(elem)在数组最后添加数据
  {
    data.push_back(i);
  }
  InitList(list);
  CreateList(list, data);
  PrintList(list);
  DelMin(list);
  PrintList(list);
}