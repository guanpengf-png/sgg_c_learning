#include <stdio.h>
int main()
{
  // 指针变量可以进行比较运算
  int nums[] = {10, 20, 30, 40, 50};
  int len = sizeof(nums) / sizeof(int); // 计算数组长度
  for (int i = 0; i < len; i++)
    printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, nums[i], &nums[i]);
  printf("\n========================\n");
  int *ptr1 = &nums[0];
  int *ptr2 = &nums[3];
  int *ptr3 = nums;
  double d = 12.34;
  printf("ptr1>ptr2的结果:%d\n", ptr1 > ptr2);   // 0
  printf("ptr1<ptr2的结果:%d\n", ptr1 < ptr2);   // 1
  printf("ptr1==ptr3的结果:%d\n", ptr1 == ptr3); // 1
  double *ptr4 = &d;
  printf("ptr1>ptr4的结果:%d\n", ptr1 > ptr4); // 1

  int num1 = 10;
  int num2 = 20;
  int *p1 = &num1;
  p1 = &num2;

  return 0;
}