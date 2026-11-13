#include <stdio.h>
int main()
{
  // continue是一个关键字,用来结束本次循环,继续下一次循环

  // for (int i = 0; i <= 5; i++)
  // {
  //   if (i == 3)
  //     continue;
  //   printf("%d\n", i);
  // }
  // 输出100以内（包括100）的数字，跳过那些7的倍数或包含7的数字
  for (int i = 0; i <= 100; i++)
  {
    if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
      continue;
    printf("%d ", i);
  }

  return 0;
}