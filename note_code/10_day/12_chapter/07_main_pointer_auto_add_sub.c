#include <stdio.h>
int main()
{
  // 指针变量可以自增或自减运算,自身指向改变了,也表示向后或向前移动1个单位
  int nums[] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++)
    printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, nums[i], &nums[i]);
  // 声明了一个int*类型的指针变量,起名为ptr,指向的是数组中第一个元素的内存地址
  int *ptr = &nums[0];
  printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);
  ptr++; // ptr = ptr+1 ;  ptr+=1
  printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);
  ptr = &nums[4]; // 指向的是最后一个元素的内存地址
  printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);
  ptr--;
  printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);

  return 0;
}