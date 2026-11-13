#include <stdio.h>

int main(){
  int num; // 声明一个int类型的变量,起名为num
  printf("输入一个数字:\n");
  scanf("%d",&num); // 接收用户输入的整数并存储到num变量中
  printf("您刚刚输入的整数是:%d\n",num); // 输出
  return 0;
}