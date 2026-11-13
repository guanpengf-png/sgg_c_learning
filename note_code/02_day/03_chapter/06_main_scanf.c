#include <stdio.h>

int main(){
  // scanf输入函数语句,用来接收用户输入的数据的
  // int num; // 声明一个int类型的变量,起名为num,用来存储整数
  // printf("请您输入一个整数:\n"); // 提示
  // scanf("%d",&num);// 接收用户输入的数据,并存储到变量num中
  // printf("num变量的值是:%d\n",num);// 输出变量的值

  // 输入两个整数:
  int num1, num2;
  printf("请您输入两个整数:\n");
  // scanf("%d,%d",&num1,&num2);
  scanf("%d %d",&num1,&num2); // 可以同时接收多个数据存储到对应的变量中
  printf("num1=%d,num2=%d\n",num1,num2);

  return 0;
}