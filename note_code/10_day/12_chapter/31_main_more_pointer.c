#include <stdio.h>
int main()
{
  // 指针可以分为一级指针和多级指针
  // 一级指针:普通的指针变量指向的是变量的内存地址,声明的时候使用的是一个*
  // 二级指针:指针变量指向的是一级指针的内存地址,声明的时候使用的是两个*
  // 多级指针:除了一级指针以外,其他的指针(超过一级的指针)都属于多级指针

  int num = 10; // 声明了一个int类型的变量,起名是num
  // ptr1是一级指针
  int *ptr1 = &num; // 声明了一个int*类型的指针变量,起名是ptr1,指向的是num变量的内存地址
  // ptr2是二级指针
  int **ptr2 = &ptr1; // 声明了一个int**指针,指向的是一级指针的ptr1的内存地址
  // ptr3是三级指针
  int ***ptr3 = &ptr2; // 声明了一个int***指针,指向的是二级指针的ptr2的内存地址

  printf("num变量的值是:%d,对应的内存地址:%p\n",num,&num);
  printf("ptr1指针指向的内存地址对应的内存空间中的数据是:%d\n",*ptr1);
  printf("ptr1指针指向的内存地址:%p\n",ptr1);
  printf("ptr1指针变量自己的内存地址:%p\n",&ptr1);
  printf("\n===============\n");
  printf("ptr2指针变量指向的内存地址(一级指针的内存地址)对应的指针ptr1所指向的内存地址对应的内存空间中的数据值是:%d\n",**ptr2);
  printf("ptr2指针变量指向的ptr1指针指向的内存地址:%p\n",*ptr2);
  printf("ptr2指针变量指向的内存地址:%p\n",ptr2);
  printf("ptr2指针变量自己的内存地址:%p\n",&ptr2);
  printf("\n===============\n");
  printf("ptr3指针变量指向ptr2指针指向的ptr1指针指向的内存地址对应空间中的数据:%d\n",***ptr3);
  printf("ptr3指针变量指向的ptr2指针指向的ptr1指针指向的内存地址:%p\n",**ptr3);
  printf("ptr3指针变量指向的ptr2指针指向的内存地址:%p\n",*ptr3);
  printf("ptr3指针变量指向的ptr2指针的内存地址:%p\n",ptr3);
  printf("ptr3指针变量自己的内存地址:%p\n",&ptr3);

  return 0;
}