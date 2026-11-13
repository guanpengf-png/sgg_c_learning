#include <stdio.h>
#include <math.h>
int main()
{
  printf("-2的绝对值是:%d\n",abs(-2)); // 2
  printf("-3.14的绝对值是:%.2lf\n",fabs(-3.14)); // 3.14
  printf("9的平方根是:%.2lf\n",sqrt(9)); // 3
  printf("8的立方根是:%.2lf\n",cbrt(8)); // 2
  printf("3的4次方是:%.2lf\n",pow(3,4)); // 81
  printf("3.124向上取整:%.2lf\n",ceil(3.124)); // 4
  printf("-3.124向上取整:%.2lf\n",ceil(-3.124)); // -3
  printf("3.124向下取整:%.2lf\n",floor(3.124)); // 3
  printf("-3.124向下取整:%.2lf\n",floor(-3.124)); // -4
  printf("2.56四舍五入:%.2lf\n",round(2.56)); // 3
  printf("3.89截断:%.2lf\n",trunc(3.89)); // 3

  return 0;
}