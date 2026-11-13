#include <stdio.h>
int main()
{
  int nums[] = {10, 20, 30, 40, 50};
  int len = sizeof(nums) / sizeof(int); // 计算长度
  for (int i = 0; i < len; i++)
    printf("索引:%d,元素值:%d,内存地址:%p\n", i, nums[i], &nums[i]);
  printf("\n==============\n");
  int arr[3][4] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120};
  int rows = sizeof(arr) / sizeof(arr[0]); // 行数
  int cols = sizeof(arr[0]) / sizeof(int); // 列数
  for (int i = 0; i < rows; i++)
    for (int j = 0; j < cols; j++)
      printf("元素值:%d,内存地址:%p\n", arr[i][j], &arr[i][j]);
  return 0;
}