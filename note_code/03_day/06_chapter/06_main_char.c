#include <stdio.h>
int main()
{
  // 字符类型 char 占一个字节,
  // 字符类型的数据值:   'a' '4' '\n' 都是字符类型的值
  // 单个的字母/数字/符号,使用一对单引号括起来,就是字符类型的值
  // 使用双引号包括起来的内容,属于字符串类型的数据值, "hello" "123123"
  // \t----水平制表符-----tab键----相当于4个空格
  // \n----换行
  // \r----回车
  // \\ ----一个\
  // \"----一个双引号
  // \'----一个单引号
  // ""-----也可以看成是一个双引号
  // 字符类型的数据在输出的时候使用的是%c格式占位符,由于每个字符有对应的十进制数据,索引,字符类型的数据值也可以使用%d格式占位符输出
  // 字符类型的数据值可以进行算数运算

  // char ch1 = 'A';
  // char ch2 = '\t';
  // printf("ch1=====%c====%d\n",ch1,ch1);
  // printf("ch2=====%c====%d\n",ch2,ch2);
  // printf("AF45232weew\t\tB\tC\n");
  // printf("12\t\t\tC45\tFG\n");
  // printf("我今天学习了一个\\");
  // printf("我今天学习了一个\"");
  // char ch = '哈';
  // printf("ch=%c==%d\n",ch,ch);
  // int num = 65;
  // printf("num=%d,num=%c\n",num,num);
  // char ch3 = '9';
  // printf("ch3=%c===%d\n",ch3,ch3);

  // char ch1 = '\t';
  // char ch2 = 'A';
  // printf("ch1+ch2=%c===%d\n",ch1+ch2,ch1+ch2);

  // signed char ch1 = 200;
  // unsigned char ch2 = 200;
  // printf("ch1=%d\n",ch1); // 
  // printf("ch2=%d\n",ch2); // 200

  return 0;
}