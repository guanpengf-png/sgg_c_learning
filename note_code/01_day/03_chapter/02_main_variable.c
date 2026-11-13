#include <stdio.h>

int main()
{
  // = 赋值符号,把符号右侧的内容存储到(给了)左侧的变量

  int num = 10; // 声明了一个int类型的变量,起名为num,赋值为10
  printf("num=%d\n", num);
  num = 100; // 修改变量中的值为100
  printf("num=%d\n", num);

  return 0;
}