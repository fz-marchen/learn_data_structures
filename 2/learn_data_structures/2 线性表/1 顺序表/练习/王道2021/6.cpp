//P19.6
//从有序顺序表中删除所有其值重复的元素,使表中所有元素的值均不同
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX 13
#define ElemType int

typedef struct
{
  ElemType data[MAX];
  int length;
} List;

#pragma region

void PrintList(List list)
{
  for (int i = 0; i < list.length; i++)
  {
    cout << list.data[i] << " ";
  }
  cout << endl;
}
#pragma endregion

//P19.6
//从有序顺序表中删除所有其值重复的元素,使表中所有元素的值均不同
void Del(List &list)
{
  for (int i = 0; i < list.length; i++)
  {
    if (list.data[i] == list.data[i + 1])
    {

      for (int j = i; j < list.length; j++)
      {
        list.data[j] = list.data[j + 1];
      }

      list.length--;

      i--;
    }
  }
}

int main()
{
  List list;
  list.length = MAX;
  int Data[] = {1, 1, 1, 3, 3, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 0; i < MAX; i++)
  {
    list.data[i] = Data[i];
  }

  PrintList(list);

  Del(list);

  PrintList(list);
}