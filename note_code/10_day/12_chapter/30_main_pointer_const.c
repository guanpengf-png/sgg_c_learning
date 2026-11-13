#include <stdio.h>
int main()
{
  // 指针const
  // 语法: 数据类型名 * const 指针
  int num1 = 10;
  int *const ptr1 = &num1;
  printf("num1变量的值是:%d,内存地址:%p\n", num1, &num1);
  printf("ptr1指针指向变量的内存地址对应的空间中的数据是:%d,对应的内存地址:%p\n", *ptr1, ptr1);
  *ptr1 += 100; // 指针指向的内存空间中的数据值可以修改
  printf("num1变量的值是:%d,内存地址:%p\n", num1, &num1);
  printf("ptr1指针指向变量的内存地址对应的空间中的数据是:%d,对应的内存地址:%p\n", *ptr1, ptr1);
  int num2 = 200;
  // ptr1 = &num2; // 指向不可修改


  // 总结:const指针有两种写法,指针const有一种写法
  // const指针特点指向可修改,指向的值不可修改
  // 指针const特点指向不可修改,指向的值可修改

  return 0;
}