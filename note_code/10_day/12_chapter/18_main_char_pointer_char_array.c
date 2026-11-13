#include <stdio.h>
#include <string.h>
int main()
{
  // 字符指针和字符数组的区别:
  char *chs1 = "hello"; // 字符指针指向的字符串值在常量区(只读)
  printf("chs1字符指针指向的内存地址:%p==%s\n", chs1, chs1);
  chs1 = "worldsdhfsdfhsdf"; // 字符指针重新赋值(改变指向了)
  printf("chs1字符指针指向的内存地址:%p==%s\n", chs1, chs1);
  // chs1[0] = 'A'; // 异常
  // 遍历字符指针所指向的字符串,字符指针指向字符串值是可以看成是字符数组,可以遍历的
  // int len = strlen(chs1);
  // for (int i = 0; i < len; i++)
  //   printf("索引:%d,元素值:%c\n", i, chs1[i]);
  char chs2[] = "hello"; // 字符数组存储的字符串值在栈区(可读可写)
  printf("chs2字符数组指向的内存地址:%p===%s\n", chs2, chs2);
  // chs2 = "world"; // 数组不是指针,所以,不能改变指向,所以,不能重新赋值
  int len = strlen(chs2);
  for (int i = 0; i < len; i++)
    printf("索引:%d,元素值:%c\n", i, chs2[i]);
  printf("\n============\n");
  chs2[0] = 'A';
  printf("chs2=%s\n", chs2);

  // 字符指针可以改变指向,字符数组不可改变指向,字符指针可以遍历,字符数组可以遍历
  // 无论是字符指针还是字符数组都可以使用%s格式占位符输出字符串值
  // 字符指针不能使用索引修改某个位置的数据值
  // 字符数组可以使用索引修改某个位置的数据值

  return 0;
}