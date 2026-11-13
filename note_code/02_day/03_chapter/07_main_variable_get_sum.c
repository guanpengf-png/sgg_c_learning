#include <stdio.h>

int main(){
  // 需求:求两个整数的和
  int num1, num2,sum;
  printf("请您输入两个整数:\n");
  scanf("%d,%d",&num1,&num2);
  // printf("和为:%d\n",num1+num2);
  sum = num1 + num2;
  printf("和为:%d\n",sum);
  return 0;
}