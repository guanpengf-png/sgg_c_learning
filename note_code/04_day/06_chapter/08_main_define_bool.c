#include <stdio.h>
// 方式1:使用预处理指令宏定义的方式#define定义布尔类型及对应的数据值
#define BOOL int
#define TRUE 1
#define FALSE 0
int main()
{
  BOOL flag1 = TRUE;  // 真
  BOOL flag2 = FALSE; // 假
  printf("flag1=%d\n",flag1);
  printf("flag2=%d\n",flag2);

  return 0;
}