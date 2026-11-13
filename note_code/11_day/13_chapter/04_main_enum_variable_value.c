#include <stdio.h>
// 枚举类型变量的声明三种方式:

// 方式1:先定义枚举类型,然后声明变量
enum gender
{
  female,
  male
};
// 声明变量的语法: enum 枚举类型名 变量名;
enum gender g = female;

// 方式2:定义枚举类型的同时直接声明变量
enum season
{
  spring,
  summer,
  autumn,
  winter
}s1=winter,s2={summer},s3=2;

// 方式3:定义枚举类型的同时直接声明变量,省略枚举类型名
enum 
{
  spring,
  summer,
  autumn,
  winter
}s4={summer};
int main()
{

  return 0;
}