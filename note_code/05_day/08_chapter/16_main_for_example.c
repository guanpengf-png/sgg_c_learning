#include <stdio.h>
int main()
{
  // for循环几种特殊的写法
  // 方式1:标准写法
  // for (int i = 0; i < 3; i++)
  //   printf("%d\n", i);
  printf("\n===========\n");
  // 方式2:计数器的声明代码放在外部
  // int i;
  // for (i = 0; i < 3; i++)
  //   printf("%d\n", i);
  printf("\n===========\n");
  // 方式3:计数器的声明和赋值代码放在外部,内部的第一个表达式放在外部
  // int i = 0;
  // for (; i < 3; i++)
  //   printf("%d\n", i);
  printf("\n===========\n");
  // 方式4:把第一个表达式放在外部,第三个表达式放在循环体语句中
  // int i = 0;
  // for (; i < 3;)
  // {
  //   printf("%d\n", i);
  //   i++;
  // }
  // 方式5:省略三个表达式/死循环/无限循环
  // for (;;)
  //   printf("测试\n");

  // 方式6:多个式子组成三个表达式
  for (int x = 0, y = 0, z = 0; x < 3 && y < 4 && z < 5; x++, y++, z++)
    printf("x=%d,y=%d,z=%d\n", x, y, z);

  return 0;
}