#include <stdio.h>
#include <stdlib.h>
int main()
{
  int len = 10;
  int *ptr = (int *)calloc(len, sizeof(int));
  if (ptr == NULL)
  {
    printf("内存分配失败\n");
    return 0;
  }
  for (int i = 0; i < len; i++)
    ptr[i] = i * 10;
  for (int i = 0; i < len; i++)
    printf("%d ", ptr[i]);
  free(ptr);
  ptr = NULL;

  return 0;
}