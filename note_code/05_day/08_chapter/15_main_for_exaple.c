#include <stdio.h>
int main()
{
  //  需求:提示用户输入密码(123),如果错误则一直提示输入
  // for循环也可以执行不确定次数的循环操作
  for (int pwd = 0; pwd != 123;)
  {
    printf("请输入密码:\n");
    scanf("%d", &pwd);
  }
  printf("程序结束\n");

  return 0;
}