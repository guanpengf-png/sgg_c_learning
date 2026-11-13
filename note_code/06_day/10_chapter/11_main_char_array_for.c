#include <stdio.h>
#include <string.h>
int main()
{
  // 字符数组的访问和遍历
  char chs1[] = "hello";
  // 把字符数组看成是字符串使用%s格式占位符进行输出
  printf("chs1=%s\n", chs1);
  // 通过数组名和索引访问数组中某个索引位置的数据值
  printf("索引:2 对应的元素值是:%c\n", chs1[2]);
  // 遍历字符数组
  for (int i = 0; i < 6; i++)
    printf("索引:%d,元素值:%c\n", i, chs1[i]);
  printf("\n================\n");
  int len = strlen(chs1); // 字符串的长度(不包括\0的)
  // printf("长度:%d\n",len);
  for (int i = 0; i < len; i++)
    printf("索引:%d,元素值:%c\n", i, chs1[i]);
  // 计算字符数组的长度 = 数组的总字节数/第一个元素的字节数
  // int len1 = sizeof(chs1) / sizeof(chs1[0]); // 6
  // int len2 = sizeof(chs1) / sizeof(char); // 6
  // int len3 = sizeof(chs1); // 6
  // printf("长度是:%d\n",len1);
  // printf("长度是:%d\n",len2);
  // printf("长度是:%d\n",len3);
  // int len = sizeof(chs1);
  // int len = strlen(chs1); // 字符串的长度(不包括\0的)
  // // printf("长度:%d\n",len);
  // for (int i = 0; i < len; i++)
  //   printf("索引:%d,元素值:%c\n", i, chs1[i]);

  return 0;
}