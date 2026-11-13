#include <stdio.h>
int main()
{
  int nums[] = {10, 20, 30, 40, 50};
  printf("索引:0,对应的元素值:%d\n", nums[0]);
  printf("索引:1,对应的元素值:%d\n", nums[1]);
  printf("索引:2,对应的元素值:%d\n", nums[2]);
  printf("索引:3,对应的元素值:%d\n", nums[3]);
  printf("索引:4,对应的元素值:%d\n", nums[4]);
  // 数组越界
  printf("索引:5,对应的元素值:%d\n", nums[5]);
  printf("索引:-1,对应的元素值:%d\n", nums[-1]);

  // 数组的长度确定后是3个,赋值的时候超过3个的数据都不属于该数组
  int arr[3] = {10,20,30,40,50};
  printf("索引:0,对应的元素值:%d\n", arr[0]);
  printf("索引:1,对应的元素值:%d\n", arr[1]);
  printf("索引:2,对应的元素值:%d\n", arr[2]);
  printf("索引:3,对应的元素值:%d\n", arr[3]);
  printf("索引:4,对应的元素值:%d\n", arr[4]);

  // 数组越界位置的数据不要进行计算

  return 0;
}