#include <stdio.h>
// 定义一个共用体类型
union Data{
  // short s; // 2
  // float f; // 4
  int n; // 4
  char ch; // 1
};
int main()
{
  // 声明共用体类型变量
  // union Data dt;
  // dt.n = 65;
  // 共用体类型变量也可以使用大括号赋值,但是大括号中的第一个值是有效的,其他的值无效
  // union Data dt = {65}; // 这个有效
  // union Data dt = {65,'B'}; // 这个后面的值无效
  // 共用体类型变量可以使用大括号和点语法结合的方式为变量赋值,后面的数据值会把前面覆盖
  union Data dt = {.ch='A',.n=97};

  // 声明共用体类型变量
  // union Data dt;
  // // dt.ch = 'A';
  // dt.n = 65;
  printf("结果:%d----%c\n", dt.ch, dt.ch);
  printf("结果:%d----%c\n", dt.n, dt.n);
  // printf("所占字节数:%zu\n",sizeof(dt)); // 4
  // printf("所占字节数:%zu\n",sizeof(dt.n)); // 4
  // printf("所占字节数:%zu\n",sizeof(dt.ch)); // 1
  // printf("结果:%d----%c\n",dt.ch,dt.ch);
  // printf("结果:%d----%c\n",dt.s,dt.s);
  // printf("结果:%d----%c\n",dt.f,dt.f);
  // printf("结果:%d----%c\n",dt,dt);
  // 结论:通过某个成员赋值,最好还是通过某个成员获取(访问)值
  // 共用体类型的变量所占的字节数是最大成员所占的字节数

  return 0;
}