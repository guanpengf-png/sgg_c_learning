#include <stdio.h>
int main()
{
  // sizeof是一个关键字,当成是运算符来使用,作用:用来计算 数据类型/变量/常量/数据值 所占的字节数
  // 语法: 
  // 方式1:sizeof 变量名/数据值
  // 方式2: sizeof(数据类型名/变量名/数据值)
  // sizeof计算的结果的类型是size_t类型,所需要的格式占位符是%zu
 
  // 使用sizeof计算数据类型所占的字节数
  printf("char 字符类型 所占的字节数是:%zu\n",sizeof(char)); // 1个字节
  printf("short 短整型类型 所占的字节数是:%zu\n",sizeof(short)); // 2
  printf("int 整型类型 所占的字节数是:%zu\n",sizeof(int)); // 4
  printf("long 长整型类型 所占的字节数是:%zu\n",sizeof(long)); // 4
  printf("long long 长长整型类型 所占的字节数是:%zu\n",sizeof(long long)); // 8
  printf("float 单精度浮点型类型 所占的字节数是:%zu\n",sizeof(float)); // 4
  printf("double 双精度浮点型类型 所占的字节数是:%zu\n",sizeof(double)); // 8
  printf("long double 长双精度浮点型类型 所占的字节数是:%zu\n",sizeof(long double)); // 16

  printf("\n=====================\n");
  // 使用sizeof计算变量所占的字节数
  char ch = 'A';
  short s = -10;
  int num = 100;
  long l = -10;
  long long ll = -100;
  float f = 12.34f;
  double d = 23.45;
  long double ld = 23.456;
  // printf("char类型变量 ch 所占的字节数:%zu\n",sizeof ch);
  printf("char类型变量 ch 所占的字节数:%zu\n",sizeof(ch)); // 1
  printf("short类型变量 s 所占的字节数:%zu\n",sizeof(s));// 2
  printf("int类型变量 num 所占的字节数:%zu\n",sizeof(num)); // 4
  printf("long类型变量 l 所占的字节数:%zu\n",sizeof(l)); // 4
  printf("long long类型变量 ll 所占的字节数:%zu\n",sizeof(ll)); // 8
  printf("float类型变量 f 所占的字节数:%zu\n",sizeof(f)); // 4
  printf("double类型变量 d 所占的字节数:%zu\n",sizeof(d)); // 8
  printf("long double类型变量 ld 所占的字节数:%zu\n",sizeof(ld)); // 16

  printf("\n=====================\n");
  // 使用sizeof还可以计算数据值所占的字节数
  // printf("字符类型的数据值: 'A' 所占的字节数:%zu\n",sizeof 'A');
  printf("字符类型的数据值: 'A' 所占的字节数:%zu\n",sizeof('A')); // 4
  printf("short类型的数据值: 10u 所占的字节数:%zu\n",sizeof((short)10)); // 2
  printf("int类型的数据值: 100 所占的字节数:%zu\n",sizeof(100)); // 4
  printf("float类型的数据值: 12.34f 所占的字节数:%zu\n",sizeof(12.34f)); // 4
  printf("double类型的数据值: 23.45 所占的字节数:%zu\n",sizeof(23.45)); // 8


  // 使用siezof计算char或者计算char的变量,都是1个字节
  // 使用sizeof计算char的数据值所占的字节数是4个
  // 字符类型的数据值的本质是整型

  return 0;
}