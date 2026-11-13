#include <stdio.h>
#include <stdbool.h>
int main()
{
  // break是一个关键字,用来跳出switch-case语句,也可以用来跳出所在的循环语句

  // for (int i = 0; i < 10; i++)
  // {
  //   if (i == 3)
  //     break;
  //   printf("%d\n", i);
  // }

  // 编写程序，要求输入一个数字，判断该数字是否是质数(素数)。
  // 说明：质数指只能被1和自身整除且大于1的数字。
  // 7  7%2 7%3 7%4 7%5 7%6

  int prime_num;
  printf("输入一个整数:\n");
  scanf("%d", &prime_num);
  // bool flag = true; // 假设,默认所有输入的整数都是质数
  bool flag = prime_num > 1 ? true : false;
  for (int i = 2; i <= prime_num / 2; i++)
  {
    if (prime_num % i == 0)
    {
      flag = false;
      break;
    }
  }
  if (flag)
    printf("%d是质数\n", prime_num);
  else
    printf("%d不是质数\n", prime_num);
  // printf("%d%s\n",prime_num, flag?"是质数":"不是质数");

  return 0;
}