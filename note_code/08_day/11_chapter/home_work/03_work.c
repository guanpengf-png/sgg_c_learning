#include <stdio.h>
#include <stdbool.h>
// （4）定义函数，判断一个数字是否是质数。
bool is_prime_number(int num)
{
  // 假设默认的传入进来的数据都是质数,小于2的整数都不是质数
  bool flag = num >= 2 ? true : false;
  for (int i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      flag = false;
      break;
    }
  }
  return flag;
}

bool is_prime_number2(int num)
{
  // 假设默认的传入进来的数据都是质数,小于2的整数都不是质数
  if(num<=1)
    return false;
  for (int i = 2; i <= num / 2; i++)
    if (num % i == 0)
      return false;
  return true;
}

int main()
{
  bool flag = is_prime_number(2);
  printf("%s\n",flag?"是质数":"不是质数");
  // if (flag)
  // {
  //   printf("是质数\n");
  // }
  // else
  // {
  //   printf("不是质数\n");
  // }

  return 0;
}