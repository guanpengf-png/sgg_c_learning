#include <stdio.h>
int main()
{
  // 需求:提示用户输入密码(123),如果错误则一直提示输入
  // 不确定次数的while循环的例子
  int pwd = 0;
  while (pwd != 123)
  {
    printf("请您输入密码:\n");
    scanf("%d", &pwd);
  }
  printf("程序结束\n");

  return 0;
}