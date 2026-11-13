#include <stdio.h>
double get_avg(int nums[], int len)
{
  int sum = 0;
  for (int i = 0; i < len; i++)
    sum += nums[i];
  return sum * 1.0 / len;
}

double get_avg2(int *ptr, int len)
{
  int sum = 0;
  for (int i = 0; i < len; i++)
    sum += ptr[i];
  // sum += *(ptr + i);
  return sum * 1.0 / len;
}
int main()
{
  // 需求:通过函数实现,数组中所有数据的平均值

  int nums[] = {10, 20, 30, 40, 50, 5};
  int len = sizeof(nums) / sizeof(int); // 计算数组长度
  double avg = get_avg2(nums, len);
  printf("结果是:%.2lf\n", avg);

  // int nums[] = {10,20,30,40,50,5};
  // int len = sizeof(nums)/sizeof(int); // 计算数组长度
  // double avg = get_avg(nums,len);
  // int *ptr = &nums[0];
  // printf("结果是:%.2lf\n",avg);

  return 0;
}