#include <stdio.h>
int main()
{
  // 类型转换:不同类型的数据在计算或赋值的时候会发生强制类型转换(显示转换)或自动类型转换(隐式转换)
  // 计算的过程中: 4+23.45
  // 赋值的过程中: double d = 12;
  // 隐式类型转换: 同级别的类型中小(窄)类型的数据转成大(宽)类型的数据
  // 显示类型转换: 同级别的类型中宽类型的数据值强制的转换成了窄类型
  // 同级别类型: 都属于大范围的相同类型
  // 窄类型:所占的字节小(有符号)
  // 宽类型:所占的字节大(无符号)

  // 在计算的过程中发生的类型转换
  // short s = 10;
  // int num = 20;
  // // printf("所占字节数:%zu\n",sizeof(s+num));
  // int sum = s + num;
  // printf("结果是:%d\n", sum);

  // signed int num1 = -10;  // 有符号的
  // unsigned int num2 = 5; // 无符号的
  // printf("结果是:%d\n",num1+num2);

  // 窄类型和宽类型的数据计算的时候发生的自动类型转换,也叫隐式转换
  // float f = 12.34f;
  // double d = 23.45;
  // printf("所占的字节数:%zu\n",sizeof(f+d));
  // printf("结果是:%lf\n",f+d);

  // int num = 10;
  // double d = 12.34;
  // printf("所占的字节数:%zu\n",sizeof(num+d));
  // printf("结果:%lf\n",num+d);

  // 赋值的时候发生的自动类型转换
  // double d = 10;
  // printf("结果是:%lf\n",d);
  // int num = 12.94; // 宽类型转窄类型了
  // 强制类型转换:宽类型如果转窄类型,建议使用强转的方式
  // int num = (int)12.94; // 宽类型转窄类型了
  // printf("结果：%d\n",num);

  // 结论:类型转换可能发生在运算的过程中也可能发生在赋值的过程中
  // 如果是窄类型转宽类型属于自动类型转换
  // 如果是宽类型转窄类型,建议使用强转的写法
  // 宽类型转窄类型会丢失精度

  // double d1 = 3.987;
  // double d2 = 4.235;
  // int sum1 = d1 + d2;
  // int sum2 = (int)d1 + (int)d2;
  // int sum3 = (int)(d1 + d2); // 推荐这个
  // printf("sum1=%d\n", sum1); // 8
  // printf("sum2=%d\n", sum2); // 7---
  // printf("sum3=%d\n", sum3); // 8---

  int sum4 = (int)(2.5 * 10 + 2 * 1.5); // 3次类型转换
  printf("结果:%d\n",sum4);

  return 0;
}