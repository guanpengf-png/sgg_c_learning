#include <stdio.h>
#include <stdlib.h>
int main()
{
  // 分配内存并设置指针的指向为当前内存空间的内存地址
  int *ptr = (int *)calloc(1, sizeof(int));
  // 判断
  if (ptr == NULL)
  {
    printf("内存分配失败\n");
    return 0;
  }
  printf("结果是:%d\n", *ptr); // 默认内存中存储的是0
  *ptr = 10;                   // 存储数据
  printf("结果是:%d\n", *ptr);
  free(ptr);  // 释放
  ptr = NULL; // 重置为空指针

  return 0;
}