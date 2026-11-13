#include <stdio.h>
#include <string.h>
int main()
{
  // 字符串相关的函数
  // char chs1[] = "hello";
  // printf("字节数:%zu\n", sizeof(chs1)); // 6----字节数
  // printf("%zu\n", strlen(chs1));        // 5----字符串的长度(不包括\0)
  // for (int i = 0; i < strlen(chs1); i++)
  //   printf("%c\n", chs1[i]);
  // strlen(字符数组/字符串); 用来计算字符数组/字符串的长度,不包括\0

  // printf("\n====================\n");
  // char chs2[50];
  // char chs3[] = "hello every";
  // strcpy(chs2, chs3);
  // printf("chs2=%s\n", chs2);
  // printf("chs3=%s\n", chs3);
  // // strcpy(字符数组,字符数组/字符串); 把第二个字符串复制到第一个字符数组中
  // printf("\n====================\n");

//   char chs4[] = "abc"; // 字节数:4, 长度是3
//   char chs5[] = "def";
//   printf("长度:%zu\n", strlen(chs4));
//   printf("字节数:%zu\n", sizeof(chs4));
//  char *str= strcat(chs4, chs5);
//  printf("内存地址:%p\n",chs4);
//  printf("内存地址:%p\n",str);
//  printf("chs4=%s\n", chs4);
//  printf("chs5=%s\n", chs5);
//  printf("长度:%zu\n", strlen(chs4));
//  printf("字节数:%zu\n", sizeof(chs4));
 // strcat(字符数组,字符数组/字符串); 拼接字符串(合并字符串)

  char chs1[] = "abc";
  char chs2[] = "def";
   printf("chs1的字节数:%zu,长度:%zu\n",sizeof(chs1),strlen(chs1));
  strcat(chs1,chs2);
  printf("chs1=%s\n",chs1); // abcdef
  printf("chs2=%s\n",chs2); // def
  printf("chs1的字节数:%zu,长度:%zu\n",sizeof(chs1),strlen(chs1));

  return 0;
}