#include <stdio.h>
int main()
{
  // int i = 0;
  // while (i < 3)
  // {
  //   printf("%d\n", i);
  //   i++;
  // }
  // printf("\n=========\n");

  // for (int i = 0; i < 3; i++)
  //   printf("%d\n", i);

  // while和for的区别:都是属于先判断后执行操作,都能够实现确定次数或不确定次数的循环
  // 推荐:一般情况,如果确定循环次数推荐使用for循环,循环次数不确定推荐使用while/do-while实现
  // 不同循环实现死循环最简单的写法
  // while (1);
  // {
  //   printf("测试\n");
  // }
  // do{
  // } while (1);
  for (;;) ;
  // printf("测试\n");

  return 0;
}