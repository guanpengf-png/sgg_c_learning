#include <stdio.h>
// 需求:通过指针函数实现计算两个数字的最大值,返回最大值的内存地址
// int *(int x,int y) 
// int *(int,int) 
int *get_max_number(int x, int y)
{
  static int max_num; // 静态局部变量
  max_num = x > y ? x : y;
  return &max_num;
}
int main()
{
  int a = 10, b = 20;
  int *ptr = get_max_number(a, b);
  printf("最大值的内存地址:%p\n", ptr);
  printf("最大值的结果是:%d\n", *ptr);

  return 0;
}