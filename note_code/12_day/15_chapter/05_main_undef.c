#include <stdio.h>
// 宏定义
#define PI 3.14
// 函数原型声明/函数声明
void func(double r);

// void func2();
int main()
{
  func(5.0);
  
  return 0;
}
// 函数定义/函数实现
void func(double r)
{
  double s = PI * r * r;
  printf("结果:%.2lf\n",s);
}
// 取消宏定义
#undef PI 
// void func2(){
//   printf("结果:%.2lf\n",PI);
// }