#include <stdio.h>
#include <stdlib.h>
int main()
{
  // 使用malloc函数分配内存4个字节
  int *ptr = (int *)malloc(sizeof(int));
  // 判断
  if (ptr == NULL)
  {
    printf("内存分配失败\n");
    return 1;
  }
  *ptr = 100; // 向内存空间存储一个整数
  printf("结果是:%d\n", *ptr);
  *ptr += 10;
  printf("结果是:%d\n", *ptr);
  free(ptr);  // 释放
  ptr = NULL; // 重置为空指针

  return 0;
}