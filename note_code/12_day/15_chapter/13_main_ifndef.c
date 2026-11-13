#include <stdio.h>
// FLAG这个宏没有定义吗
#ifndef FLAG
int num = 10;
#else
int num = 20;
#endif
int main()
{

  printf("num=%d\n", num);
  return 0;
}