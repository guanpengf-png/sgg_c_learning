#include <stdio.h>
// #ifdef 就是#if define 的简写

// #define FLAG 100
// // FLAG宏定义了吗?
// #ifdef FLAG
// int num = 10;
// #endif
// #ifdef FLAG
// int num = 10;
// #else
// int num = 20;
// #endif


// #if defined  的缩写 就是 #ifdef
#if defined FLAG
int num = 10;
#else
int num = 20;
#endif
int main()
{

  printf("num=%d\n",num);
  return 0;
}