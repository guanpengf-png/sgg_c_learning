#include <stdio.h>
int main()
{
  // 空指针:指的是指针变量指向的是NULL
  // 声明指针变量未赋值,此时可以赋值为空指针
  // 当一个指针使用后,想要被释放,此时可以赋值为NULL,空指针
  // 空指针不能解引用,程序会异常

  int num = 10;
  int *ptr = NULL; // 空指针
  printf("ptr指针变量指向的内存地址:%p\n", ptr);
  printf("ptr指向的内存空间对应的数据值:%d\n",*ptr);
  ptr = &num;
  printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);

  return 0;
}