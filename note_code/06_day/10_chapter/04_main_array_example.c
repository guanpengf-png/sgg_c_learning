#include <stdio.h>
int main()
{
  int nums[] = {10, 20, 30, 40, 50}; // 声明一个int[5]的数组,起名为nums,并赋值
  printf("索引:0,对应位置的元素值:%d\n", nums[0]);
  nums[0] = 100; // 把索引为0的位置的数据重新赋值为100
  printf("索引:0,对应位置的元素值:%d\n", nums[0]);
  nums[0] = nums[0] + 10; // 把索引为0的位置的数据取出来加10,然后重新赋值
  printf("索引:0,对应位置的元素值:%d\n", nums[0]);
  nums[0] += 10;
  printf("索引:0,对应位置的元素值:%d\n", nums[0]);

  return 0;
}