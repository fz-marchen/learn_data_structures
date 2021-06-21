// 从顺序表中删除具有最小值的元素（假设唯一）并由函数返回被删元素的值。空出的位置由最后一个元素填补，若顺序表为空则显示出错信息并退出运行

ElemType Del_Min(SqLiLt &L) {
  if(L.length == 0) return false;
  ElemType min = L.data[0];
  int pos = 0;
  for(int i = 1; i < L.length; i++) {
    if(min > L.data[i]) {
      min = L.data[i];
      pos = i;
    }
  }
  L.data[pos] = L.data[L.length - 1];
  L.length --;
  return true;
}

// 设计一个高效算法，将顺序表L的所有元素逆置，要求算法的空间复杂度为O(1)
      
void reverse(SqLiLt &L) {
  int halfLen = L.length / 2;
  ElemType temp;
  for(int i = 0; i < halfLen; i++) {
    ElemType temp = L[L.length - 1 - i];
    L[L.length - 1 - i] = L[i];
    L[i] = temp;
  }
}

// 对长度为n的顺序表L，编写一个时间复杂度为O(n)，空间复杂度为O(1)的算法，该算法删除线性表中所有值为x的数据元素

void Del_X(SqLiLt &L, ElemType x) {
  int len = 0;
  for(int i = 0; i < L.length; i++) {
    if(L.data != x) L.data[len++] = L.data[i];
  }
  L.length = len;
}

// 从有序顺序表中删除其值在给定值s与t之间（要求s<t）的所有元素，如果s或t不合理或顺序表为空，则显示出错信息并退出运行。
void Del_X_1(SqLiLt &L, ElemType s, ElemType t) {
  if(L.length == 0) return false;
  int pos = 0, i;
  for(i = 0; i < L.length; i++) {
    if(L.data[i] > s && L.data[i]  < t) {
      pos ++;
    } else {
      L.data[i - pos] = L.data[i];
    }
  }
  L.length -= k;
  return true;
}
// 从顺序表中删除其值在给定值s与t之间（包含s和t，要求s<t）的所有元素，如果s或t不合理或顺序表为空，则显示出错信息并退出运行。
void Del_X_2(SqLiLt &L, ElemType s, ElemType t) {
  if(L.length == 0 || s > t) return false;
  int pos = 0, i;
  for(i = 0; i < L.length; i++) {
    if(L.data[i] > s && L.data[i]  < t) {
      pos ++;
    } else {
      L.data[i - pos] = L.data[i];
    }
  }
  L.length -= k;
  return true;
}

// 从有序顺序表中删除所有其值重复的元素，使表中所有元素的值均不同
void Del_Same(SqLiLt &L) {
  int pos = 0;
  ElemType p = L.data[o]
  for(int i = 1; i < L.length; i++) {
    if (p == L.data[i]) {
      pos++;
    } else {
      L.data[i - pos] = L.data[i]
    }
    p = L.data[i];
  }
  L.length -= pos;
  return true;
}
// void Del_Same(SqLiLt &L) {
//   int pos = 0;
//   for(int i = 0; i < L.length; i++) {
//     for(int j = 1; j < L.length; j++) {
//       if (L.data[i] == L.data[j]) {
//         pos ++;
//       } else {
//         L.data[i - pos] = L.data[i];
//       }
//       L.length -= pos;
//     }
//   }
//   return true;
// }

// 将两个有序顺序表合并为一个新的有序顺序表，并由函数返回结果顺序表
void sort(SqLiLt &L, SqLiLt &L1, SqLiLt &R) {
  
  int i = 0;
  int j = 0;
  int k = 0;
  while(i < L.length && j < L1.length) {
    if (L.data[i] < L1.data[j]) {
      R.data[k++] = L.data[i++];
    } else {
      R.data[k++] = L.data[j++];
    }
  }
  while(i < L.length) {
    R.data[k++] = L.data[i++];
  }
  while(j < L.length) {
    R.data[k++] = L.data[j++];
  }
  R.length = k;
  return true;
}

// 已知在一堆一位数组A[m + n]中依次存放两个线性表（a1，a2，a3......，am）和（b1，b2，b3......，bn）。试编写一个函数将数组中两个顺序表的位置互换，即将（b1，b2，b3......，bn）放在（a1，a2，a3......，am）的前面。

void reverse(SqLiLt &L, int left, int right) {
    int mid = (left + right) / 2
    for(int i = 0; i <= mid - left; i++) {
      ElemeType temp = L.data[left + i];
      L.data[left + i] = L.data[right - i];
      L.data[right - i] = temp;
    }
    // int mid1 = m / 2
    // for(int i = 0; i < mid1; i++) {
    //   ElemeType temp = L.data[i];
    //   L.data[i] = L.data[m - i];
    //   L.data[m - i] = temp;
    // }
    // int mid2 = n / 2
    // for(int i = m; i < m + n; i++) {
    //   ElemeType temp = L.data[i];
    //   L.data[i] = L.data[m + n - i];
    //   L.data[m + n - i] = temp;
    // }
}
void Ex_Change(SqLiLt &L, int m, int n) {
  reverse(L, 0, m + n - 1)
  reverse(L, 0, n - 1)
  reverse(L, n, m + n - 1)
}

// 线性表（a1，a2，a3......，an）中的元素递增有序且按顺序存储于计算机内，要求设计一算法，完成用最少时间在表中查找数值为x的元素，若找到则将其与后继元素位置相交换，若找不到则将其插入表中并使表中元素仍递增有序

void serach(SqList &L, ElemType x) {
  int low = 0, high = L.length - 1, index = -1;
  while(low <= high) {
    int mid = (low + high) / 2;
    if(L.data[mid] == x) {
      index = mid;
      break
    }
    if(L.data[mid] > x) {
      high = mid - 1;
    } else if(L.data[mid] < x) {
      low = mid + 1;
    } 
  }
  if (index !== -1) {
    for(int i = L.length; i <= index; i--) {
      L.data[i] = L.data[i-1];
    }
    Ldata[index] = x;
  } else {
    ElemeType temp = L.data[high]
    L.data[high] = L.data[high + 1]
    L.data[high + 1] = temp
  }
}