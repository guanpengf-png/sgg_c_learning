#include <stdio.h>

int main(){
  int num = 28;
  printf("num=%d\n",num); // 以十进制的方式进行输出
  printf("num=%x\n",num); // 以十六进制没有前缀的形式输出
  printf("num=%X\n",num); // 以十六进制没有前缀的形式输出
  printf("num=%#x\n",num); // 以十六进制有前缀的形式输出
  printf("num=%#X\n",num); // 以十六进制有前缀的形式输出
  return 0;
}