#include <stdio.h>
int main()
{
  // 指针变量可以加等于(相加赋值)/减等于一个整数(相减赋值),自身指向改变,表示向后或向前移动多少个单位
  int nums[] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++)
    printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, nums[i], &nums[i]);
  // 声明了一个int*类型的指针变量,起名为ptr,指向的是数组中第一个元素的内存地址
  int *ptr = &nums[0];
  printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);
  // ptr = ptr + 2; // 指针变量向后移动2个单位,重新赋值后自身指向改变了
  ptr += 2; // 指针变量进行相加赋值运算
  printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);
  ptr = &nums[4]; // 指向的是50对应的内存地址
  printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);
  ptr -= 3; // ptr = ptr-3; 向前移动3个单位(12个字节)
  printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);

  return 0;
}