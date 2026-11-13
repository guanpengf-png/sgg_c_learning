#include <stdio.h>
int main()
{

  // 乘法口诀表的方式1:
  for (int i = 1; i <= 9; i++) // 控制的是行数
  {
    for (int j = 1; j <= i; j++)         // 控制的是列数
      printf("%d*%d=%d\t", j, i, i * j); // 式子
    printf("\n");                        // 换行
  }
  printf("\n============\n");
  // 乘法口诀表的方式2:
  for (int i = 9; i >= 1; i--) // 控制的是行数
  {
    for (int j = 1; j <= i; j++)         // 控制的是列数
      printf("%d*%d=%d\t", j, i, i * j); // 式子
    printf("\n");                        // 换行
  }
  printf("\n============\n");
  // 乘法口诀表的方式3:
  for (int i = 1; i <= 9; i++) // 控制的是行数
  {
    // 设置每一行\t的数量
    for (int j = 1; j <= 9 - i; j++)
      printf("\t");
    for (int j = 1; j <= i; j++)         // 控制的是列数
      printf("%d*%d=%d\t", j, i, i * j); // 式子
    printf("\n");                        // 换行
  }
  printf("\n============\n");
  // 乘法口诀表的方式4:
  for (int i = 9; i >= 1; i--) // 控制的是行数
  {
    // 设置每一行\t的数量
    for (int j = 1; j <= 9 - i; j++)
      printf("\t");
    for (int j = 1; j <= i; j++)         // 控制的是列数
      printf("%d*%d=%d\t", j, i, i * j); // 式子
    printf("\n");                        // 换行
  }
  printf("\n============\n");
  return 0;
}