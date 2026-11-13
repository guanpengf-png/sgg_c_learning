#include <stdio.h>
int main()
{
  // 指针数组:就是数组,里面存储的是指针变量/内存地址/变量的内存地址
  // 指针数组的声明或定义的语法:
  // 声明的语法:数据类型名 *指针数组名[长度];
  // 赋值的语法: 指针数组名[索引] = 内存地址/指针变量/&变量名;
  // 声明的同时直接赋值的语法: 数据类型名 *指针数组名[长度]={指针1,指针2,...};

  // int num1 = 10, num2 = 20, num3 = 30;
  // // 先声明后赋值:
  // int *ptr_arr[3]; // 声明了一个指针数组,类型是:int*[3],并设定长度为3
  // ptr_arr[0] = &num1;
  // ptr_arr[1] = &num2;
  // ptr_arr[2] = &num3;

  // // 声明的同时直接赋值
  // int *ptr_arr2[] = {&num1,&num2,&num3};

  // // 声明的同时直接赋值
  // int *ptr1 = &num1;
  // int *ptr2 = &num2;
  // int *ptr3 = &num3;
  // int *ptr_arr3[] = {ptr1,ptr2,ptr3};

  int num1 = 10, num2 = 20, num3 = 30;
  printf("num1变量的内存地址:%p\n",&num1);
  printf("num2变量的内存地址:%p\n",&num2);
  printf("num3变量的内存地址:%p\n",&num3);
  // 声明一个指针数组,并存储三个变量的内存地址,类型是int*[3];
  int *ptr_arr[] = {&num1, &num2, &num3};
  int len = sizeof(ptr_arr) / sizeof(ptr_arr[0]); // 计算数组长度
  for (int i = 0; i < len; i++)
  {
    printf("索引:%d,元素值(内存地址):%p,对应的数据值:%d\n", i, ptr_arr[i], *(ptr_arr[i]));
  }

  return 0;
}