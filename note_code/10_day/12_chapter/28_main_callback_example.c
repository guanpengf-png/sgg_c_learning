#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 函数指针 int (*ptr)(int)
// 产生随机数的函数
int get_rand(int x){
  return rand() % x;
}
// 产生翻倍数据的函数
int get_double_num(int x){
  return x * 2;
}
// 数据加10的函数
int get_num_add(int x){
  return x + 10;
}
// 数据减3 的函数
int get_sub(int x){
  return x - 3;
}
// 修改数组中的数据值的函数
void change_array(int *arr, int len, int (*ptr)(int)){
  srand(time(NULL)); // 时间种子
  for (int i = 0; i < len; i++)
    arr[i] = ptr(arr[i]);
}
// 遍历数组的函数
void printf_array(int *arr, int len){
  for (int i = 0; i < len; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
int main()
{
  // 调用一个函数,实现该函数中的数组可以产生10个随机数
  // 调用这个函数,也可以实现数组中的每个数据要翻倍
  // 调用这个函数,也可以实现数组中的每个数据加10
  int nums[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int len = sizeof(nums) / sizeof(int);    // 计算数组长度
  change_array(nums, len, get_rand);       // 调用函数----随机数
  printf_array(nums, len);                 // 遍历数组
  change_array(nums, len, get_double_num); // 调用函数----随机数
  printf_array(nums, len);                 // 遍历数组
  change_array(nums, len, get_num_add);    // 调用函数----随机数
  printf_array(nums, len);                 // 遍历数组
  change_array(nums, len, get_sub);    // 调用函数----随机数
  printf_array(nums, len);                 // 遍历数组
  return 0;
}