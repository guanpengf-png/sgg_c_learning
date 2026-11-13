#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
  // 分配空间
  int *ptr = (int *)malloc(sizeof(int) * 200);
  // printf("当前指针指向的内存地址所占的字节数:%zu\n",sizeof(ptr));
  printf("当前空间对应的字节数:%zu\n", _msize(ptr)); // 800字节
  printf("内存地址:%p\n", ptr);
  ptr = realloc(ptr, sizeof(int) * 10000);
  printf("当前空间对应的字节数:%zu\n", _msize(ptr));
  printf("内存地址:%p\n", ptr);
  ptr = realloc(ptr, sizeof(int) * 10);
  printf("当前空间对应的字节数:%zu\n", _msize(ptr));
  printf("内存地址:%p\n", ptr);

  return 0;
}