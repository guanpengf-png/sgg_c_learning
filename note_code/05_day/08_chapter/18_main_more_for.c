#include <stdio.h>
int main()
{
  // 多重循环:嵌套循环
  /*
    while循环可以有while循环/do-while循环/for循环
    do-while循环可以有while循环/do-while循环/for循环
    for循环可以有while循环/do-while循环/for循环
    注意:一般不建议循环嵌套层数超过三层


  */

  /*
  [0,0][0,1][0,2][0,3]
  [1,0][1,1][1,2][1,3]
  [2,0][2,1][2,2][2,3]



  */
  int rows = 0, cols = 0;
  printf("请您输入行和列:\n");
  scanf("%d %d", &rows, &cols);
  for (int i = 0; i < rows; i++) // 外层循环的是行数
  {
    for (int j = 0; j < cols; j++) // 内存循环的是列数
      printf("[%d,%d]", i, j);     // 显示内容
    printf("\n");                  // 换行
  }

  // printf("[0,0]");
  // printf("[0,0]");
  // printf("[0,0]");
  // printf("[0,0]");
  // printf("\n");

  return 0;
}