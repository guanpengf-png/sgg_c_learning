#include <stdio.h>
#include <stdlib.h>
int main()
{
  // 需求:动态分配内存,存储10个数据,并遍历展示
  int len = 10; // 数据个数/长度
  // 动态分配内存,并存储内存地址,设置指针指向
  int *ptr = (int *)malloc(sizeof(int) * len);
  // 判断内存分配是否成功
  if(ptr==NULL){
    printf("内存分配失败\n");
    return 0;
  }
  // 遍历的方式移动指针的指向,并存储数据
  for (int i = 0; i < len;i++)
    ptr[i] = i * 10; // *(ptr + i) = i * 10;
  printf("\n======\n");
  // 遍历的方式获取数据并展示
  for (int i = 0; i < len;i++)
    printf("%d ",*(ptr+i));
  free(ptr); // 释放
  ptr = NULL; // 重置为空指针

  return 0;
}