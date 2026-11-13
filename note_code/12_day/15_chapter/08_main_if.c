#include <stdio.h>
// 条件编译指令也是预处理指令,作用:条件为真,则对应的代码会被编译,否则不会被编译
#define FLAG 1
#if FLAG
double PI = 3.14;
#endif

int main()
{
  printf("PI=%.2lf\n",PI);

  return 0;
}