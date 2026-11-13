#include <stdio.h>
// 求和的函数
int get_sum(int x, int y)
{
  return x + y;
}
// 求差的函数
int get_sub(int x,int y){
  return x - y;
}
// 求最大值的函数
int get_max(int x,int y){
  return x > y ? x : y;
}
// 求平均值的函数
int get_avg(int x,int y){
  return (x + y) / 2;
}
int main()
{
  // 声明了一个函数指针,类型是int(*)(int,int),起名为ptr,指向get_sum函数的内存地址
  int (*ptr)(int, int) = get_sum;
  printf("和为:%d\n",ptr(10,20));
  ptr = get_sub; // 更改函数指针的指向,指向了get_sub函数的内存地址
  printf("差为:%d\n",ptr(100,20));
  ptr = get_max;
  printf("最大值为:%d\n",ptr(100,200));
  ptr = get_avg;
  printf("平均值为:%d\n",ptr(10,20));

  return 0;
}