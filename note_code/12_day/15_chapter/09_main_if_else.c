#include <stdio.h>
// 如果FLAG为真,则int num = 10会被编译,否则 int num = 20会被编译
#if FLAG
int num = 10;
#else
int num = 20;
#endif

int main()
{
  printf("num=%d\n",num);

  return 0;
}