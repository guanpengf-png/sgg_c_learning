#include <stdio.h>
int get_sum(int x, int y)
{
  return x + y;
}
int main()
{
  // 声明一个函数指针指向的是get_sum函数的内存地址
  int (*ptr1)(int x, int y) = &get_sum;
  int sum1 = (*ptr1)(100, 200); // 函数指针调用函数的写法2
  printf("和为:%d\n", sum1);
  int sum2 = ptr1(10, 20); // 函数指针调用函数的写法1
  printf("和为:%d\n", sum2);

  int (*ptr2)(int, int) = &get_sum;
  int sum3 = ptr2(11, 22);
  printf("和为:%d\n", sum3);
  int (*ptr3)(int x, int y) = get_sum;
  int sum4 = ptr3(111, 222);
  printf("和为:%d\n", sum4);
  int (*ptr4)(int, int) = get_sum;
  int sum5 = ptr4(1000, 2000);
  printf("和为:%d\n", sum5);

  // get_sum(10,20);
  // ptr1(10, 20);
  // 函数指针:就是指针/指针变量,指向的是函数的内存地址
  // 函数的内存地址获取: &函数名/函数名
  // 函数指针声明或定义的语法:
  // 先声明后赋值的语法:
  // 返回值类型 (*函数指针变量名)(参数类型 参数名,参数类型 参数名)
  // 函数指针变量名 = &函数名;
  // 函数指针变量名 = 函数名;
  // 声明的同时直接赋值语法:
  // 返回值类型 (*函数指针变量名)(参数类型 参数名,参数类型 参数名) = &函数名;
  // 返回值类型 (*函数指针变量名)(参数类型 参数名,参数类型 参数名) = 函数名;
  // 函数指针的作用:多了一种调用函数的方式

  // get_sum(10, 20); // &get_sum
  // int num = 10; // &num
  // printf("函数的内存地址:%p\n",&get_sum);
  // printf("函数的内存地址:%p\n",get_sum);

  // // 声明一个函数指针指向的是get_sum函数的内存地址
  // int (*ptr1)(int x, int y) = &get_sum;
  // int sum1 = (*ptr1)(100, 200); // 函数指针调用函数的写法2
  // printf("和为:%d\n", sum1);
  // int sum2 = ptr1(10, 20); // 函数指针调用函数的写法1
  // printf("和为:%d\n", sum2);

  // int (*ptr2)(int, int) = &get_sum;
  // int sum3 = ptr2(11, 22);
  // printf("和为:%d\n", sum3);
  // int (*ptr3)(int x, int y) = get_sum;
  // int sum4 = ptr3(111, 222);
  // printf("和为:%d\n", sum4);
  // int (*ptr4)(int, int) = get_sum;
  // int sum5 = ptr4(1000, 2000);
  // printf("和为:%d\n", sum5);

  return 0;
}