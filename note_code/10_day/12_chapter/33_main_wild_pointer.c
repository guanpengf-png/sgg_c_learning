#include <stdio.h>
int *func()
{
  int num = 10;
  return &num;
}
int main()
{
  // 野指针:也是指针(指针变量)
  /*
  1. 指针声明未赋值
  2. 指针指向的数组越界的位置
  3. 指向了已经释放的内存地址
  如何避免使用野指针?
  1. 指针声明赋值
  2. 指针不要指向的数组越界的位置
  3. 指针不要指向已经释放的内存地址

  指针变量在使用之前最好判断是不是NULL指针

  */

  // 1.指针声明未赋值
  int *ptr1;
  printf("ptr1指向的地址:%p,对应的数据:%d\n", ptr1, *ptr1);
  // 2.指针指向的数组越界的位置
  int nums[] = {10, 20, 30};
  int *ptr2 = &nums + 1;
  printf("ptr2指向的地址:%p,对应的数据:%d\n", ptr2, *ptr2);
  // 3. 指向了已经释放的内存地址
  int *ptr3 = func();
  printf("ptr3指向的地址:%p\n", ptr3);
  printf("对应的数据:%d\n", *ptr3);

  return 0;
}