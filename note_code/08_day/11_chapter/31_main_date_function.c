#include <stdio.h>
#include <time.h>
void f1()
{
  int sum = 0;
  for (int i = 0; i < 100000; i++)
    for (int j = 0; j < 10000; j++)
      sum += i;
}
int main()
{
  // time_t current_time;
  // time(&current_time); // 用来获取的是秒数的时间
  // // printf("结果是:%lld\n",current_time);
  // printf("%s\n",ctime(&current_time)); // 获取的是带年月日时分秒和星期的时间

  time_t start_time, end_time;
  time(&start_time); // 开始时间
  f1();
  time(&end_time); // 结束时间
  double diff_time = difftime(end_time, start_time);
  printf("结果:%.2lf\n",diff_time);

  return 0;
}