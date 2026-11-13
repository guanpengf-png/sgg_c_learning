#include <stdio.h>
int main()
{
  // 指针变量的作用:多了一种访问或修改数据的方式
  double num = 12.34;  // 声明了一个double类型的变量,起名为num并赋值
  double *ptr1 = &num; // 声明了一个double*类型的指针变量,起名为ptr1,指向num变量的内存地址
  printf("num变量的值:%.2lf,num变量的内存地址:%p\n", num, &num);
  printf("ptr1指针变量指向的内存地址对应的内存空间中的数据值:%.2lf\n", *ptr1);
  printf("ptr1指针变量指向的内存地址:%p\n", ptr1);
  num += 10; // 修改变量的值
  printf("num变量的值:%.2lf,num变量的内存地址:%p\n", num, &num);
  printf("ptr1指针变量指向的内存地址对应的内存空间中的数据值:%.2lf\n", *ptr1);
  printf("ptr1指针变量指向的内存地址:%p\n", ptr1);
  *ptr1 += 100;
  printf("num变量的值:%.2lf,num变量的内存地址:%p\n", num, &num);
  printf("ptr1指针变量指向的内存地址对应的内存空间中的数据值:%.2lf\n", *ptr1);
  printf("ptr1指针变量指向的内存地址:%p\n", ptr1);
  double *ptr2 = ptr1; // 声明了一个double*类型的指针变量,起名为ptr2,指向的是ptr1指针变量所指向的内存地址
  printf("ptr2指针变量指向的内存地址对应的内存空间中的数据值:%.2lf\n", *ptr2);
  printf("ptr2指针变量指向的内存地址:%p\n", ptr2);
  *ptr2 = 100.12; // 解引用后重新赋值(修改数据值)
  printf("num变量的值:%.2lf,num变量的内存地址:%p\n", num, &num);
  printf("ptr1指针变量指向的内存地址对应的内存空间中的数据值:%.2lf\n", *ptr1);
  printf("ptr1指针变量指向的内存地址:%p\n", ptr1);
  printf("ptr2指针变量指向的内存地址对应的内存空间中的数据值:%.2lf\n", *ptr2);
  printf("ptr2指针变量指向的内存地址:%p\n", ptr2);

  return 0;
}