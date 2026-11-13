#include <stdio.h>
// 二分查找法
int binary_search(int *ptr, int start, int end, int target)
{
  int mid=0;
  while (start <= end)
  {
    mid = (start + end) / 2; // 中间位置的索引
    if (target > ptr[mid])       // 查找的数据在右侧
      start = mid + 1;
    else if (target < ptr[mid]) // 查找的数据在左侧
      end = mid - 1;
    else
      return mid; // 查找的数据在中间
  }
  return -1;
}
int main()
{
  int nums[] = {5, 10, 20, 30, 40, 50, 60, 100}; // 数组中的数据必须是有序的
  int len = sizeof(nums) / sizeof(int); // 计算长度
  int target = 40;                      // 目标数据
  int index = binary_search(nums, 0, len - 1, target);
  printf("索引:%d\n", index);

  return 0;
}