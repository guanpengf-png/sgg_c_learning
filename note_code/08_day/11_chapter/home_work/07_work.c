#include <stdio.h>
// （7）函数实现空心三角形
void show_star(int rows)
{
  for (int i = 1; i <= rows; i++) // 控制的是行数
  {
    for (int j = 1; j <= rows - i; j++) // 随着行数增加,空格的列数减少
      printf(" ");
    for (int j = 1; j <= 2 * i - 1; j++) // 控制的是列数
    {
      if (j == 1 || j == 2 * i - 1 || i == rows) // 第一列和最后一列和最后一行
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}
int main()
{
  show_star(5);

  return 0;
}