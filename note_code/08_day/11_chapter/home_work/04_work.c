#include <stdio.h>
// （5）定义一个函数,实现年月日,是今年的第多少天
// 2028年3月2
int computed_days(int year, int month, int day)
{
  int sum_days = day; // 先存储日期
  // 把每个月的天数用数组存储起来
  int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  // 累加当前月份前面的每个月的天数
  for (int i = 0; i < month - 1; i++)
    sum_days += days[i];
  // 判断是否为闰年
  if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month > 2)
    sum_days += 1;
  return sum_days;
}

int main()
{
  int sum_days = computed_days(2027,3,2);
  printf("结果:%d\n",sum_days);
  return 0;
}