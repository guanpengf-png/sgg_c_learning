#include <stdio.h>
// 共用体类型变量的三种声明方式

// 方式1: 先定义共用体类型,后声明变量
union Data1
{
  char ch;
  int n;
};
union Data1 dt1;
// 方式2: 定义共用体类型的同时声明变量
union Data2
{
  float f;
  int n;
} dt2, dt3;
// 方式3: 定义共用体类型的同时声明变量,省略类型名
union
{
  float f;
  int n;
  short s;
} dt4, dt5, dt6;

int main()
{

  return 0;
}