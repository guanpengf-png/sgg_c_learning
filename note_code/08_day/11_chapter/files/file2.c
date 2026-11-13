#include <stdio.h>
// extern 声明外部链接
extern int num1; // 全局变量
extern const double PI1; // 全局常量
extern char chs1[] ; // 全局数组
extern void func1();


extern int num2; // 全局变量
extern const double PI2; // 全局常量
extern char chs2[] ; // 全局数组
extern void func2();
int main()
{
  printf("num1=%d\n",num1);
  printf("PI1=%.2lf\n",PI1);
  printf("chs1=%s\n",chs1);
  func1();

   printf("num2=%d\n",num2);
  // printf("PI2=%.2lf\n",PI2);
  // printf("chs2=%s\n",chs2);
  // func2();

  return 0;
}