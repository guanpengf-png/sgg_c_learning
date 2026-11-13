#include <stdio.h>
int main()
{
  // （1）实现判断一个整数，属于哪个范围：大于0；小于0；等于0。
  // int num = 10;
  // if (num > 0)
  //   printf("大于0\n");
  // else if (num < 0)
  //   printf("小于0\n");
  // else
  //   printf("等于0\n");

  // （2）判断一个年份是否为闰年。
  // int year;
  // printf("输入一个年份:\n");
  // scanf("%d", &year);
  // if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
  //   printf("%d是闰年\n", year);
  // else
  //   printf("%d是平年\n", year);

  // for (int i = 1000; i < 10000; i++)
  // {
  //   if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
  //     printf("%d ", i);
  // }
  // （3）判断一个整数是否是水仙花数，所谓水仙花数是指一个3位数，其各个位上数字立方和等于其本身，例如：153 = 1*1*1 + 5*5*5 + 3*3*3。
  // int num = 153;
  // int h = num / 100; // 百位数
  // int t = num / 10 % 10; // 十位数
  // int g = num % 10; // 个位数
  // if(h*h*h+t*t*t+g*g*g==num)
  //   printf("%d是水仙花数\n",num);
  // int h, t, g;
  // for (int i = 100; i < 1000; i++)
  // {
  //   h = i / 100;     // 百位数
  //   t = i / 10 % 10; // 十位数
  //   g = i % 10;      // 个位数
  //   if (h * h * h + t * t * t + g * g * g == i)
  //     printf("%d是水仙花数\n", i);
  // }
  // （4）编写程序，根据输入的月份和年份，求出该月的天数（1-12）, 就是需要考虑闰年（2月份 29）和平年（2月份 28）。

  int year, month;
  printf("输入年份和月份:\n");
  scanf("%d %d", &year, &month);
  switch (month)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("%d年%d月有%d天\n", year, month, 31);
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("%d年%d月有%d天\n", year, month, 30);
    break;
  case 2:
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
      printf("%d年%d月有%d天\n", year, month, 29);
    else
      printf("%d年%d月有%d天\n", year, month, 28);
    break;
  default:
    printf("输入有误\n");
    break;
  }

  return 0;
}