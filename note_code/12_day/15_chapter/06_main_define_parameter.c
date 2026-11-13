#include <stdio.h>
// 带参数的宏定义:宏定义是可以进行传参的
// 参数可以没有类型,其次也可以叫形参和实参
// 带参数的的宏的计算结果不一定是准确的

// 宏定义的方式实现求两个数字的最大值
#define GET_MAX(a, b) a > b ? a : b
// 计算一个数字的平方
#define M(a) (a)*(a)
int get_sqrt(int x){
  return x * x;
}
int main()
{

  int max_num = GET_MAX(10, 20.32);
  printf("最大值是:%d\n", max_num);
  int a = 10;
  // printf("结果是:%d\n",M(a++));
  // printf("结果是:%d\n",M(a+2));   // a+2*a+2
  // printf("结果是:%d\n",get_sqrt(a+2));   
  printf("结果是:%d\n",get_sqrt(a++));   
  printf("结果是:%d\n",get_sqrt(a++));   

  return 0;
}