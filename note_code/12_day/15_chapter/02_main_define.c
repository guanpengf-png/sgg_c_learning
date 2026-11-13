#include <stdio.h>
// 预处理指令之宏定义
// 语法:
// #define 宏名 文本内容
// 代码中使用宏名,会在预处理阶段进行文本替换操作---宏替换

// 1. 使用宏定义可以进行常量的定义
#define PI 3.14

// 2. 宏定义可以定义数据类型
#define BOOL int
#define TRUE 1
#define FALSE 0
int main()
{
  double r = 5.0;
  double s = PI * r * r;
  printf("结果:%.2lf\n",s);

  BOOL flag = TRUE;

  return 0;
}