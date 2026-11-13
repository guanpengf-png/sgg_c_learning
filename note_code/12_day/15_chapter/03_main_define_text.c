#include <stdio.h>
// 3. 宏定义进行文本替换
#define PRINTF printf
#define txt "今天中午吃啥呢"
#define SUM a+b
#define 输出 "数据值是:%d"
// 宏定义的嵌套使用
#define M (SUM+a+3*b+4)
int main()
{

  PRINTF("数据是:%d\n",10);
  PRINTF(txt);
  int a = 10, b = 20;
  PRINTF(输出, SUM);
  PRINTF(输出,M);
  return 0;
}