#include <stdio.h>
void f1()
{

  int num = 10;           // 局部变量
  const double PI = 3.14; // 局部常量
  char chs[] = "hell0";   // 局部数组
}
void f2()
{
  // printf("num=%d\n", num);  //
  // printf("PI=%.2lf\n", PI); //
  // printf("chs=%s\n", chs);  //
}
int main()
{
  // 局部变量/局部常量/局部数组的使用和访问范围在当前的函数中,其他函数不能直接访问
  // 局部变量/局部常量/局部数组只声明未赋值,默认一般都是垃圾值
  // 函数调用结束后,这些数据会销毁和释放

  return 0;
}