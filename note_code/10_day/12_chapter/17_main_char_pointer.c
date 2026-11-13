#include <stdio.h>
#include <string.h>
int main()
{
  // 字符指针:就是指针变量,指向的是字符/字符数组/字符串的内存地址
  // 字符指针的声明及赋值
  char *chs = "hello"; // 声明了一个字符指针,类型是char *,起名为chs,并赋值
  printf("chs=%s,对应的内存地址:%p\n", chs, chs);
  // // 字符指针特殊:%s输出的对应的字符串数据值,%p输出的内存地址
  chs = "what are you no sha lei";
  // 字符指针改变了指向
  printf("chs=%s,对应的内存地址:%p\n", chs, chs);
  int num = 10;
  printf("num变量的内存地址:%p\n", &num);
  num = 20;
  printf("num变量的内存地址:%p\n", &num);

  char *chs = "what are you no sha lei";
  // int len = sizeof(chs); // sizeof(字符指针)----指针变量指向的内存地址所占的字节数8
  int len = strlen(chs); // 字符值的个数---字符串的长度
  for (int i = 0; i < len; i++)
    printf("%c==\n", chs[i]);

  // int num = 10;
  // printf("num变量的内存地址:%p\n",&num);
  // 字符数组不能重新赋值,原因:不是指针,不能改变指向
  // char chs2[] = "hello";
  // chs2 = "what are you no sha lei";

  // printf("索引:0位置的字符是:%c\n",chs[0]);
  // chs[0] = 'A'; // 不能修改
  // printf("chs=%s\n",chs);
  // 结论:字符指针所指向的字符串数据值可以使用for进行变量,但是不推荐使用sizeof计算长度,而应该用strlen()函数

  char chs[] = "hello";
  // chs = "abc";
  chs[0] = 'A';

  return 0;
}