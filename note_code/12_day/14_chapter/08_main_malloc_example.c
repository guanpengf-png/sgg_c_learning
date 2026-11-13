#include <stdio.h>
#include <stdlib.h>
// 判断成绩的函数
void show_score(double *ptr, int len)
{
  for (int i = 0; i < len; i++)
    if (ptr[i] < 60)
      printf("%.2lf\n", ptr[i]);
}
int main()
{
  // 动态创建数组，输入5个学生的成绩，再定义一个函数检测成绩低于60分的，输出不合格的成绩。
  int len = 5; // 长度
  double *ptr = (double *)malloc(sizeof(double) * len);
  if (ptr == NULL){
    printf("内存分配失败\n");
    return 0;
  }
  // 遍历
  for (int i = 0; i < len; i++){
    printf("请您输入第%d个人的成绩:\n", i + 1);
    scanf("%lf", ptr + i);
  }
  printf("\n==============\n");
  show_score(ptr, len);
  free(ptr); // 释放
  ptr = NULL;

  return 0;
}