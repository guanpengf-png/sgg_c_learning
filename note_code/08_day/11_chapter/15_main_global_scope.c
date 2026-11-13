#include <stdio.h>
// int num;         // 全局变量
// const double PI; // 全局常量
// char chs[10];    // 全局字符数组
// 全局变量/全局常量/全局数组声明未赋值,默认是0或者\0
// 局部变量/局部常量/局部数组声明未赋值,一般默认是垃圾值/随机值(不敢保证)
int main()
{
  int num;                  // 局部变量
  const double PI;          // 局部常量
  char chs[100];            // 局部字符数组
  printf("num=%d\n", num);  //
  printf("PI=%.2lf\n", PI); //
  printf("chs=%s\n", chs);  //
  for (int i = 0; i < 100; i++)
    printf("%c ", chs[i]);


  // 全局变量/全局常量/全局数组作用域范围:在整个.c文件中,任何的函数中也访问和使用
  // 全局变量/全局常量/全局数组只是声明未初始化,默认值是0或\0
  // 全局变量/全局常量/全局数组在某个位置修改后,其他位置访问的时候是修改后的数据值

  return 0;
}