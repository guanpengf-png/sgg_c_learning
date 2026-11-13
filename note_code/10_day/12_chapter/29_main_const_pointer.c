#include <stdio.h>
int main()
{
  // const 指针:有两种写法:
  // 方式1: const 数据类型名 * 指针名;
  // 方式2: 数据类型名 const* 指针名;
  // const指针指向的内存地址可以修改,但是不能通过解引用的方式修改内存空间中的数据值
  int num1 = 10;
  // const int *ptr1 = &num1;
   int const *ptr1 = &num1;
  printf("num1变量的值是:%d,内存地址:%p\n", num1, &num1);
  printf("ptr1指针指向变量的内存地址对应的空间中的数据是:%d,对应的内存地址:%p\n", *ptr1, ptr1);
  // *ptr1 += 20; // 指针指向的内存地址对应的空间中的数据值不可修改
  int num2 = 20;
  ptr1 = &num2; // 指针的指向是可以改变的
  printf("num1变量的值是:%d,内存地址:%p\n", num1, &num1);
  printf("num2变量的值是:%d,内存地址:%p\n", num2, &num2);
  printf("ptr1指针指向变量的内存地址对应的空间中的数据是:%d,对应的内存地址:%p\n", *ptr1, ptr1);
 

  return 0;
}