#include <stdio.h>
int main()
{
  // 现在有三个班，每个班五名同学，用二维数组保存他们的成绩，并求出每个班级平均分、以及所有班级平均分，数据要求从控制台输入。

  int rows = 3; // 行数--班级数
  int cols = 5; // 列数--人数
  int scores[rows][cols];
  // 遍历二维数组,录入成绩
  for (int i = 0; i < rows;i++){
    for (int j = 0; j < cols;j++){
      printf("请您输入第%d个班级第%d个人的成绩:\n",i+1,j+1);
      scanf("%d",&scores[i][j]);
    }
  }
  // 计算成绩
  int class_sum = 0; // 计算的是每个班的总成绩
  int all_class_sum = 0; // 记录所有班级的总成绩
  for (int i = 0; i < rows; i++)
  {
    class_sum = 0; // 重置上个班级的总成绩
    for (int j = 0; j < cols;j++){
      class_sum += scores[i][j]; // 计算是每个班级的总成绩
    }
    all_class_sum += class_sum; // 计算的所有班级的总成绩
    printf("第%d个班级的总成绩是:%d平均成绩是:%.2lf\n",i+1,class_sum,class_sum*1.0/cols);
  }
  printf("所有班级总成绩是:%d,班级的平均成绩:%.2lf\n",all_class_sum,all_class_sum*1.0/rows);
  printf("每个人的平均成绩:%.2lf\n",all_class_sum*1.0/(rows*cols));

  return 0;
}