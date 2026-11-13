#include <stdio.h>
int main()
{
  // 字符指针和字符数组的区别
  // char *chs1 = "abc"; // 字符指针
  // char chs2[] = "abc"; // 字符数组
  // chs1 = "def"; // 字符指针可以改变指向,重新赋值
  // chs2 = "def"; // 字符数组是数组不可改指向,不能重新赋值
  // chs1[0] = 'A'; // 字符值是只读的,不能直接修改(常量区)
  // chs2[0] = 'A'; // 可以修改,可读可写(栈区)
  // 字符指针使用scanf输入字符串进行收集可以,原因是野指针,但是不建议这么用
  // 野指针不能用,空指针用不了,普通指针也不行
  // 如果使用scanf收集字符串数据使用数组是可以的
  // 如果重新赋值建议使用指针的方式
  // char *chs1; // 野指针
  // char *chs2 = "abc";
  // printf("内存地址:%p\n",chs1);
  // printf("内存地址:%p\n",chs2);
  // printf("输入内容:\n");
  // scanf("%s",chs1);
  // printf("内容:%s\n",chs1);

  // char *chs1=NULL; // 空指针
  // printf("输入内容:\n");
  // scanf("%s",chs1);
  // printf("内容:%s\n",chs1);
  // char *chs1="abc"; // 指针
  // printf("输入内容:\n");
  // scanf("%s",chs1);
  // printf("内容:%s\n",chs1);

  // char chs1[20];
  // printf("输入内容:\n");
  // scanf("%s",chs1);
  // printf("内容:%s\n",chs1);

  return 0;
}