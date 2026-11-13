#include <stdio.h>
int main()
{
   int nums[] = {10, 20, 30, 40, 50};
  int len = sizeof(nums) / sizeof(int); // 计算数组长度
  for (int i = 0; i < len; i++)
    printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, nums[i], &nums[i]);
  printf("\n========================\n");
  // 声明了一个int*类型的指针变量,起名为ptr,指向的是数组中第一个元素的内存地址
  int *ptr = &nums[0];
  // int *ptr = nums;
  printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);
  printf("第一个元素的内存地址:%p,对应的元素值:%d\n", &nums[0], nums[0]);
  printf("nums数组名指向的内存地址:%p,对应的数据值:%d\n", nums, *nums);
  printf("nums+1的结果:%p,对应的数据值:%d\n",nums+1,*(nums+1));
  printf("ptr+1的结果:%p,对应的数据值:%d\n",ptr+1,*(ptr+1));
  // 指针的指向是可以改变的
  // ptr += 1;
  // ptr++;
  // ptr = ptr + 1;
  // 下面的这个指针变量的指向没有改变
  // ptr + 1;
  // nums + 1; // 指向没有改变
  // nums++;
  // nums += 1;
  // nums = nums + 1;

  // 数组不是指针,指向不可改变
  // nums = {20,30,40};

  return 0;
}