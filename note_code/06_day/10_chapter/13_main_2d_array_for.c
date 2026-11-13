#include <stdio.h>
int main()
{
  // 二维数组的访问和遍历
  // int nums[3][4] = {
  //   {10,20,30,40},
  //   {50,60,70,80},
  //   {90,92,93,95}
  // };
  int nums[3][4] = {
      {10, 20, 30, 40},
      {50, 60, 70, 80},
      {90, 92, 93, 95}};
  int rows = sizeof(nums) / sizeof(nums[0]); // 行数
  // int cols = sizeof(nums[0]) / sizeof(nums[0][0]); // 列数
  int cols = sizeof(nums[0]) / sizeof(int); // 列数
  for (int i = 0; i < rows; i++) // 遍历的是行
  {
    for (int j = 0; j < cols; j++) // 遍历的是列
      printf("%d ", nums[i][j]);
    printf("\n");
  }

  // printf("二维数组的总字节数:%zu\n",sizeof(nums)); // 48
  // printf("二维数组中第一个元素的字节数:%zu\n",sizeof(nums[0])); // 16
  // printf("行数:%zu\n",sizeof(nums)/sizeof(nums[0])); // 3
  //  printf("二维数组的列数:%zu\n",sizeof(nums[0])/sizeof(nums[0][0]));
  //  printf("二维数组的列数:%zu\n",sizeof(nums[0])/sizeof(int));
  // 二维数组的行的计算:二维数组的总字节数/二维数组第一个元素的字节数
  // 二维数组的列的计算:二维数组第一个元素的总字节数/第一个数据的字节数
  // 二维数组的列的计算:二维数组第一个元素的总字节数/具体数据类型所占的字节数
  // 外层循环遍历的是行
  // for (int i = 0; i < 3;i++){
  //   for (int j = 0; j < 4;j++){
  //     printf("%d ",nums[i][j]);
  //   }
  //   printf("\n");
  // }

  return 0;
}