#include <stdio.h>
int main()
{
  // 指针变量和数组之间的区别
  int nums[] = {10, 20, 30, 40, 50};
  int len = sizeof(nums) / sizeof(int); // 数组长度
  int *ptr = &nums[0];                  // ptr指针变量指向的是数组中第一个元素的内存地址
  if (ptr == nums)
    printf("相同\n");
  else
    printf("不同\n");
  printf("ptr指针变量指向的内存地址:%p\n", ptr);
  printf("nums数组名指向的内存地址:%p\n", nums);
  // nums数组中存储的是第一个元素的内存地址
  printf("使用sizeof计算的结果:%zu\n",sizeof(nums)); // 20---数组的总字节数
  printf("使用sizeof计算的结果:%zu\n",sizeof(ptr)); // 8---内存地址所占的字节数
  // ptr + 1; // 可以进行整数的加减运算
  // nums + 1; // 可以进行整数的加减运算
  // ptr += 1; // 可以进行相加赋值运算
  // nums += 1; // 不可以进行相加赋值运算
  // ptr++; // 可以自增或自减运算
  // nums++; // 不可以

  // 指针变量指向的是内存地址,数组名指向的是数组中第一个元素的内存地址
  // 指针变量可以进行加减整数运算,数组名也可以进行加减整数运算
  // sizeof运算指针变量的结果是内存地址所占的字节数,sizeof运算数组计算的是数组的总字节数
  // 指针变量可以改变指向,数组名不可以改变指向

  return 0;
}