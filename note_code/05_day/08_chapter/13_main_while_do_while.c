#include <stdio.h>
int main()
{
  {
    int pwd = 0;
    while (pwd != 123)
    {
      printf("请您输入密码:\n");
      scanf("%d", &pwd);
    }
    printf("程序结束\n");
  }

  printf("\n==================\n");
  {
    int pwd = 0;
    do
    {
      printf("输入密码:\n");
      scanf("%d", &pwd);
    } while (pwd != 123);
    printf("程序结束\n");
  }

  // 区别:相同点:都可以实现有限次数和无限次数的循环
  // 不同点:while循环先判断条件是否成立,再决定循环体语句是否执行,do-while循环先执行一次循环体语句,然后再判断循环条件是否成立
  // while循环先判断后执行,do-while是先执行后判断,前者有可能一次循环体都不执行,后者至少执行一次循环体
  // 什么情况用哪种循环?看个人

  return 0;
}