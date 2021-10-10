
// 直接插入排序
// 空间复杂度：O(1)
// 时间复杂度：O(n^2)
void InsertSort(int A[], int n) {
  int i, j, temp;
  for(i = 1; i < n; i++) { // 将各元素插入已排好序的序列中
    if(A[i] < A[i - 1]) {  // 若A[i]关键字小于前驱
      temp = A[i];         // temp暂存A[i]
      for(j = i - 1; j >= 0 && A[j] > temp; --j) { // 检查所有前面已排好序的元素
        A[j + 1] = A[j]; // 所有大于temp的元素向后挪拉
      }
      A[j + 1] = temp; // 复制到插入位置

    }
  }
}