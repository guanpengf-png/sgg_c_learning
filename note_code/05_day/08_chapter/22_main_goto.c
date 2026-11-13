#include <stdio.h>
int main()
{
  // goto 是一个关键字,和标签名组合使用,可以在程序进行跳转操作
  //   printf("1\n");
  //   goto three;
  //   printf("2\n");
  // three:
  //   printf("3\n");

  int i = 0;
two:
  if (i < 5)
  {
    printf("%d\n", i);
    i++;
    goto two;
  }

  return 0;
}