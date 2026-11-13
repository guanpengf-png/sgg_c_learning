#include <stdio.h>
// 函数的声明或定义
void cook()
{
  printf("洗菜,切菜\n");
  printf("放油,炒菜\n");
  printf("半个凉菜\n");
  printf("煮饭\n");
  printf("吃饭\n");
}
int main()
{
  // 早上饿了
  cook(); // 函数的调用
 

  // 中午饿了
  cook();

  // 晚上饿了
  cook();

  // 半夜饿了
  cook();

  return 0;
}