#include <stdio.h>
int main()
{
  // 循环语句之do-while循环
  /*
    do-while语句

    语法:
    do{
      循环体语句;
    }while(条件表达式);

    int i = 0; 计数器
    do{
      循环体语句;
      i++;
    }while(i<5);


    执行过程: 先执行一次计数器代码,int i=0;直接执行一次循环体语句代码,然后累加计数器i++,之后判断循环条件i<5是否成立(真----1---true/假---0---false),如果不成立,循环结束
    如果成立,则继续执行循环体语句,执行i++,直到有一天循环条件不成立,循环结束



  */
  // 例子: 输出10次,每天吃几个包子
  {
    int i = 0;
    do
    {
      printf("第%d天吃了%d个包子\n", i + 1, i + 1);
      i++;
    } while (i < 10);
    printf("最终i的值是:%d\n", i);
  }
  printf("\n====================\n");
  {
    // （2）循环输出数字7~15
    int i = 7;
    do
    {
      printf("%d\n", i);
      i++;
    } while (i <= 15);
    printf("最终i的值是:%d\n", i);
  }
  printf("\n=============\n");
  {
    // （3）倒序输出数字53 ~ 48
    int i = 53;
    do
    {
      printf("%d\n", i);
      i--;
    } while (i > 47);
    printf("最终i的值是:%d\n", i);
  }
  printf("\n==============\n");
  {
    // （4）输出10（包括10）以内所有的偶数
    int i = 0;
    do
    {
      if (i % 2 == 0)
        printf("%d\n", i);
      i++;
    } while (i <= 10);
    printf("最终i的值是:%d\n", i);
  }
  printf("\n================\n");
  {
    // （5）计算100以内（包括100）所有数字的和
    int i = 0;
    int sum = 0;
    do
    {
      sum += i;
      i++;
    } while (i <= 100);
    printf("和为:%d,最终i的值是:%d\n", sum, i);
  }
  printf("\n==================\n");
  {
    // （6）计算10以内所有奇数的乘积
    int i = 0;
    int ji = 1;
    do
    {
      if (i % 2 != 0)
        ji *= i;
      i++;
    } while (i <= 10);
    printf("乘积结果:%d,最终i的值是:%d\n",ji,i);
  }

  return 0;
}