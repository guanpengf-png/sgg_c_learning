#include <stdio.h>

int main(){

  // 需求:计算两个整数的和
  int num1, num2; // 声明两个int类型的变量,分别起名为num1,num2
  printf("请您输入第一个整数:\n");
  scanf("%d",&num1); // 接收第一个整数并存储到num1变量中
  printf("请您输入第二个整数:\n");
  scanf("%d",&num2); // 接收第一个整数并存储到num2变量中
  // printf("和为:%d\n",num1+num2);
  int sum = num1 + num2;
  printf("和为:%d\n",sum);
  return 0;
}