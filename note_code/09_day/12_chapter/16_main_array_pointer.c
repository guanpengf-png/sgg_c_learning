#include <stdio.h>
int main()
{
  int nums[] = {10, 20, 30, 40, 50};
  int(*ptr)[5] = &nums; // 声明了数组指针,指向数组的内存地址
  // ptr -----&nums
  // *ptr------nums
  // 利用数组指针遍历数组
  for (int i = 0; i < 5; i++)
  {
    printf("索引:%d,元素值:%d,内存地址:%p\n", i, (*ptr)[i], &((*ptr)[i]));
  }
  printf("数组的内存地址:%p\n", &nums);
  printf("数组名对应的内存地址:%p\n", nums);
  printf("数组中第一个元素的内存地址:%p\n", &nums[0]);

  return 0;
}