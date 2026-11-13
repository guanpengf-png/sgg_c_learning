#include <stdio.h>
int main()
{
  int nums[] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++)
    printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, nums[i], &nums[i]);
  // 声明了一个int*类型的指针变量,起名为ptr,指向的是数组中第一个元素的内存地址
  printf("\n========================\n");
  int *ptr = &nums[0];
  // printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);
  // ptr++; // 向后移动1个单位(4个字节),自身指向改变了
  // printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);
  printf("\n========================\n");
  // 使用指针变量自增的方式正序输出数组元素值及内存地址
  for (int i = 0; i < 5; i++)
  {
    printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, *ptr, ptr);
    ptr++;
  }
  printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);
  printf("\n========================\n");
  for (int i = 0; i < 5; i++)
  {
    ptr--;
    printf("索引:%d,元素值:%d,对应的内存地址:%p\n", 4-i, *ptr, ptr);
  }

  // 指针变量可以遍历数组中的元素值及内存地址

  return 0;
}