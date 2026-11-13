#include <stdio.h>
int main()
{
  // int nums[] = {10, 20, 30, 40, 50};
  // printf("数组的总字节数:%zu\n",sizeof(nums)); // 20
  // printf("数组中第一个元素的字节数:%zu\n",sizeof(nums[0])); // 4
  // printf("数组中每个数据所占的字节数:%zu\n",sizeof(int)); // 4
  // // 数组的长度 = 数组的总字节数/数组中第一个元素的字节数
  // // 数组的长度 = 数组的总字节数/数组元素所占的字节数
  // printf("数组的长度:%zu\n",sizeof(nums)/sizeof(nums[0])); // 5
  // printf("数组的长度:%zu\n",sizeof(nums)/sizeof(int)); // 5
  // for (int i = 0; i < 5; i++)
  //   printf("索引:%d,对应的元素值:%d\n", i, nums[i]);

  int nums[] = {10, 20, 30, 40, 50,60,70,80};
  // 计算数组长度
  int len1 = sizeof(nums) / sizeof(nums[0]);
  // int len2 = sizeof(nums) / sizeof(int);
  // 遍历数组
  for (int i = 0; i < len1; i++)
    printf("索引:%d,元素值:%d\n", i, nums[i]);

  return 0;
}