#include <stdio.h>
// #include <limits.h>
int main()
{
  // 需求:计算数组中所有数据的和,平均值,求最大值和对应索引,求最小值和对应索引
  int nums[] = {10, 20, 30, 40, 50, 5, 100};
  // 计算数组长度
  int len = sizeof(nums) / sizeof(int);
  int sum = 0;           // 求和的变量
  int max_num = nums[0]; // 假设第一个元素就是最大值
  int max_index = 0; // 假设索引0是最大值的索引
  // int max_num = INT_MIN; // 假设第一个元素就是最大值
  int min_num = nums[0]; // J假设第一个元素就是最小值
  int min_index = 0; // 假设索引0是最小值的索引
  // 遍历数组
  for (int i = 0; i < len; i++){
    sum += nums[i]; // 求和
    // 判断最大值
    if (max_num < nums[i]){
      max_num = nums[i];
      max_index = i;
    }
    // 判断最小值
    if (min_num > nums[i]){
      min_num = nums[i];
      min_index = i;
    }
  }
  printf("和为:%d,平均值为:%.2lf\n", sum, sum * 1.0 / len);
  printf("最大值是:%d,最小值是:%d\n", max_num, min_num);
  printf("最大值的索引:%d,最小值的索引是:%d\n",max_index,min_index);
  return 0;
}