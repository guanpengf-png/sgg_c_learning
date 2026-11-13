#include <stdio.h>
// 函数的声明或定义
void say_hi(){
  printf("您好\n");
}
// 函数的声明或定义
int get_sub(int x,int y){
  return x - y;
}
// 函数的声明或定义
double get_sum(double x,double y,double z){
  return x + y + z;
}
int main()
{
  // 需求1:调用函数实现打招呼
  say_hi(); // 调用函数
  // 需求2:调用函数实现两个整数数字的差
  int sub = get_sub(100,30); // 调用函数
  printf("结果是:%d\n",sub);
  // 需求3:调用函数实现三个小数的和
  double sum = get_sum(12.34,34.56,56.78); // 调用函数
  printf("结果是:%.2lf\n",sum);

  return 0;
}