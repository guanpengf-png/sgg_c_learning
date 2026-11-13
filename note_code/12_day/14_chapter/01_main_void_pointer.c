#include <stdio.h>
int main()
{
  // 任意类型的指针都可以隐式的转换成void*类型的指针
  // void*类型的指针是不能解引用的,原因:没有明确类型,及所占字节不清楚,也有安全性
  // void*类型的指针可以和其他类型的指针进行互转  不行
  // void*类型的指针可以看成是其他所有类型指针的 大的类型指针(宽类型指针)
  // 其他类型的指针转void*类型的指针属于隐式转换
  // void *类型的指针转其他类型的指针最好使用显示转换(强制类型转换)
  // void *ptr; // 野指针
  // printf("内存地址:%p\n",ptr);
  // int num = 10;
  // // int *ptr =&num;
  // // int *类型的指针可以隐式转换成void*类型的指针
  // // int *ptr1 = &num;
  // void *ptr = &num;
  // printf("num变量的内存地址:%p,数据值:%d\n",&num,num);
  // printf("ptr指针变量指向的内存地址:%p\n",ptr);
  // // printf("ptr指针变量指向的内存地址对应内存空间中的数据:%d\n",*ptr);
  // // *ptr += 10; // 不行
  // // int *ptr2 = ptr;
  // int *ptr2 = (int*)ptr;
  // printf("ptr2指向的内存地址:%p\n",ptr2);
  // printf("ptr2指向的内存地址对应的数据:%d\n",*ptr2);
  // *ptr2 += 100;
  // printf("num变量的内存地址:%p,数据值:%d\n",&num,num);
  // printf("ptr2指向的内存地址:%p\n",ptr2);
  // printf("ptr2指向的内存地址对应的数据:%d\n",*ptr2);

  double d = 12.34;
  void *ptr = &d;
  printf("d的内存地址:%p,数据值:%.2lf\n", &d, d);
  printf("ptr指向的地址:%p\n", ptr);
  // printf("ptr指向的地址对应的数据:%.2lf\n",*ptr);
  double *ptr2 = (double *)ptr;
  printf("ptr2指向的地址:%p\n", ptr2);
  printf("ptr2指向的地址对应的数据:%.2lf\n", *ptr2);

  return 0;
}