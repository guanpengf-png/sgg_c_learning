#include <stdio.h>
#include <string.h>
int main()
{
  // 字符指针可以看成是字符数组,但不是数组
  char *chs = "hello"; // 字符指针
  printf("%p======%s", chs, chs);
  int len = strlen(chs);
  for (int i = 0; i < len; i++)
    printf("索引:%d,元素值:%c,内存地址:%p\n", i, chs[i], &chs[i]);
  printf("=====%c\n",*chs);// 类似于 chs[0]
  printf("=====%c\n",chs[0]);

  return 0;
}