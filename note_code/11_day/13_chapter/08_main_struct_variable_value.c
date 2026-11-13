#include <stdio.h>
// 定义一个学生的结构体类型
struct Student
{
  char *name;  // 姓名
  char gender; // 性别
  int age;     // 年龄
};
int main()
{
  // 结构体类型变量声明及赋值
  // 方式1:先声明变量,后赋值,语法:结构体变量名.成员名 = 值;
  struct Student stu1; // 声明结构体类型的变量,起名为stu1,类型: struct Student
  stu1.name = "小甜甜";
  stu1.gender = 'f';
  stu1.age = 20;
  // 结构体成员的访问(获取/读取值)语法:结构体变量名.成员名
  printf("姓名:%s,性别:%c,年龄:%d\n", stu1.name, stu1.gender, stu1.age);
  // 方式2:声明变量的同时直接赋值,使用大括号赋值,里面的数据值的顺序和声明成员的顺序一致
  struct Student stu2 = {"大甜甜", 'm', 30};
  printf("姓名:%s,性别:%c,年龄:%d\n", stu2.name, stu2.gender, stu2.age);
  // 方式3:声明变量的同时直接赋值,使用点语法+大括号结合的方式
  struct Student stu3 = {.gender = 'm', .age = 25, .name = "中甜甜"};
   printf("姓名:%s,性别:%c,年龄:%d\n", stu3.name, stu3.gender, stu3.age);

  return 0;
}