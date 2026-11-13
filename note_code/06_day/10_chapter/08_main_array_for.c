#include <stdio.h>
int main()
{
  // 需求:声明固定长度的数组,动态的添加数据,正序(从0到长度-1)遍历数组和倒序遍历数组(从长度-1到0)

  int arr[10];                         // 声明一个长度为10的int[10]的数组,起名为arr
  int len = sizeof(arr) / sizeof(int); // 计算长度
  printf("长度:%d\n", len);
  // 通过遍历数组的方式动态的为指定索引位置添加数据局
  for (int i = 0; i < len; i++)
    arr[i] = i * 10;
  printf("\n==============\n");
  // 正序遍历数组
  for (int i = 0; i < len; i++)
    printf("索引:%d,元素值:%d\n", i, arr[i]);
  printf("\n==============\n");
  // 倒序遍历数组
  for (int i = len - 1; i >= 0; i--)
    printf("索引:%d,元素值:%d\n", i, arr[i]);

  return 0;
}