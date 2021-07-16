//P19.2
//设计一个高效算法，将顺序表的所有元素逆置，要求算法的空间复杂度为O⑴
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

//P19.2
//设计一个高效算法，将顺序表的所有元素逆置，要求算法的空间复杂度为O⑴
void resever(List &list)
{

  for (int i = 0; i < list.length / 2; i++)
  {
    int temp = list.data[i];
    // int a = list.data[list.length - i - 1];
    list.data[i] = list.data[list.length - i - 1];
    list.data[list.length - i - 1] = temp;
  }
}

int main()
{
  List list;
  vector<int> data;             //创建一个向量存储容器 int
  for (int i = 1; i <= 30; i++) // push_back(elem)在数组最后添加数据
  {
    data.push_back(i);
  }
  InitList(list);
  CreateList(list, data);
  PrintList(list);
  resever(list);

  PrintList(list);
}