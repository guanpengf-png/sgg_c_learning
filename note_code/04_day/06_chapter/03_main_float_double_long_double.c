#include <stdio.h>
int main()
{
  // 单精度浮点型float
  // float f = 23.45f;
  // printf("f=%f\n",f);
  // printf("f=%.2f\n",f);
  // float类型变量赋值的后缀是f/F,float类型的数据输出的时候默认保留6位小数,使用的格式占位符是%f
  // %.数字f 表示保留几位有效小数
  // float类型的数据保留小数的时候会出现四舍五入的情况
  // float类型的数据输出可以使用%f有可以使用%e格式占位符输出数据

  {
    float f1 = 0.12345f;
    float f2 = 3.11592f;
    float f3 = -2e12f;
    float f4 = 1.9823e2f;
    printf("f1=%f,f2=%.2f,f3=%f,f4=%f\n", f1, f2, f3, f4);
    printf("f1=%e,f2=%.2e,f3=%e,f4=%e\n", f1, f2, f3, f4);
  }
  printf("\n=====================\n");
  {
    // 双精度浮点型double
    double d1 = 3.1415926;
    double d2 = 0.123456;
    double d3 = -2e12f;
    double d4 = 1.9823e2;
    printf("d1=%lf,d2=%.2lf,d3=%lf,d4=%lf\n", d1, d2, d3, d4);
    printf("d1=%e,d2=%.2e,d3=%e,d4=%e\n", d1, d2, d3, d4);
    // double类型的数据值是没有后缀的,使用的格式占位符是%lf,有可以使用%e
    // double类型的数据也会保留6位小数,也会四舍五入
  }
  printf("\n=====================\n");
  {
    // 长双精度浮点型long double
    long double ld = 12.34L;
    printf("ld=%Lf\n",ld);
    printf("ld=%Le\n",ld);
    // long double类型的数据在输出的时候格式占位符是%Lf,对应的科学计数法的格式占位符是%Le
  }

  // int和double 的数据

  return 0;
}