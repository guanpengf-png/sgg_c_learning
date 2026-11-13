#include <stdio.h>

int main(){
  int num1 = 0b1101; // 二进制
  int num2 = 012; // 八进制
  int num3 = 101; // 十进制
  int num4 = 0x1C; // 十六进制
  // 以十进制的方式进行输出
  printf("num1=%d\n",num1); // 13
  printf("num2=%d\n",num2); // 10
  printf("num3=%d\n",num3); // 101
  printf("num4=%d\n",num4); // 28


  return 0;
}