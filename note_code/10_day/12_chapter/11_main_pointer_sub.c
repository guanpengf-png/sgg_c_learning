#include <stdio.h>
int main()
{
  int nums[] = {10, 20, 30, 40, 50};
  int len = sizeof(nums) / sizeof(int); // 计算数组长度
  for (int i = 0; i < len; i++)
    printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, nums[i], &nums[i]);
  printf("\n========================\n");
  int *ptr1 = &nums[0];
  int *ptr2 = &nums[3];
  // 相差了3个元素数/相差了12个字节
  printf("ptr1-ptr2=%td\n",ptr1-ptr2); // -3
  printf("ptr2-ptr1=%td\n",ptr2-ptr1); // 3

  double d1 = 12.34;
  double d2 = 23.45;
  double *ptr3 = &d1;
  double *ptr4 = &d2; 
  printf("ptr3-ptr4=%td\n",ptr3-ptr4); // 1
  printf("ptr4-ptr3=%td\n",ptr4-ptr3); // -1

  return 0;
}