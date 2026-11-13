#include <stdio.h>
// 指针可以作为函数的参数使用
void f1(int *ptr)
{
  printf("数据值是:%d====对应的内存地址是:%p\n", *ptr, ptr);
  *ptr = 100;
  printf("数据值是:%d====对应的内存地址是:%p\n", *ptr, ptr);
}
void f2(int x)
{
  printf("x=%d\n", x);
  x = 200;
  printf("x=%d\n", x);
}
int main()
{
  int num = 10;
  // int *ptr1 = &num;
  // printf("数据值是:%d====对应的内存地址是:%p\n",*ptr1,ptr1);
  printf("数据值是:%d====对应的内存地址是:%p\n", num, &num);
  // f1(ptr1);
  f1(&num);
  printf("数据值是:%d====对应的内存地址是:%p\n", num, &num);
  // printf("\n=======================\n");
  // int a = 10;
  // printf("a=%d\n", a);
  // f2(a);
  // printf("a=%d\n", a);
  // 总结:指针可以作为函数的参数使用,如果向函数中传入指针,函数内部是可以通过指针修改其他函数中的数据值
  return 0;
}