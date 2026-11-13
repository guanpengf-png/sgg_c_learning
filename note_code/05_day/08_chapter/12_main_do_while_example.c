#include <stdio.h>
int main()
{
  // 不确定循环次数的do-while循环
  // 需求:提示用户输入密码(123),如果错误则一直提示输入
  int pwd = 0;
  do
  {
    printf("输入密码:\n");
    scanf("%d", &pwd);
  } while (pwd != 123);
  printf("程序结束\n");

  // while循环和do-while循环都可以实现循环次数不确定的循环操作

  return 0;
}