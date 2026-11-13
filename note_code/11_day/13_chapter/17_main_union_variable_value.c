#include <stdio.h>
// 定义一个共用体类型
union Data{
  short s; // 2
  int n;   // 4
  char ch; // 1
};

int main()
{
  // 方式1:先声明变量,后通过变量.成员名赋值
  union Data dt1;
  dt1.n = 20;
  // 方式2:通过大括号给默认第一个成员赋值
  union Data2{
    int n;   // 4
    char ch; // 1
  } dt2 = {90};
  // 方式3:
   union Data3{
    int n;   // 4
    char ch; // 1
    double d; // 8
  } dt3={.ch='A'};

  return 0;
}