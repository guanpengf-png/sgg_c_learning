#include <stdio.h>
// 结构体类型变量的声明三种方式:

// 方式1:先定义结构体类型,后声明变量
struct Student
{
  char name[20]; // 姓名
  char gender;   // 性别
  int age;       // 年龄
};
// 语法: struct 结构体类型名 变量名;
struct Student stu;
// 方式2:定义结构体类型的同时直接声明变量
struct Teacher
{
  char *name;    // 姓名
  int age;       // 年龄
  double salary; // 工资
} t1, t2, t3;

// 方式3:定义结构体类型的同时直接声明变量,省略结构体类型名
struct
{
  char *name;    // 姓名
  int age;       // 年龄
  double salary; // 工资
} t4, t5, t6;
int main()
{

  return 0;
}