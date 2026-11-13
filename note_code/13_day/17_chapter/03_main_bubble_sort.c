#include <stdio.h>
// 需求:交换两个变量的值,使用函数实现
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
// 冒泡排序的函数
void bubble_sort(int *arr, int len)
{
  for (int i = 0; i < len - 1; i++)       // 外层循环控制的是比较的轮数
    for (int j = 0; j < len - 1 - i; j++) // 内层循环控制的是每一轮的比较次数
      if (arr[j] > arr[j + 1])            // 比较前后的两个数据
        swap(&arr[j], &arr[j + 1]);       // 交换前后的两个数据
}
// 遍历数组的函数
void printf_array(int *arr, int len)
{
  for (int i = 0; i < len; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
int main()
{
  int nums[] = {30, 20, 10, 100, 50, 40, 60, 80, 70, 90};
  int len = sizeof(nums) / sizeof(int);
  bubble_sort(nums, len);  // 冒泡排序函数调用
  printf_array(nums, len); // 遍历数组函数调用调用

  return 0;
}