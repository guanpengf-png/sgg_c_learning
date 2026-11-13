#include <stdio.h>
// 定义一个学生的结构体类型
struct Student
{
  char *name;  // 姓名
  char gender; // 性别
  int age;     // 年龄
};
// struct Student stu;
// stu.name = "小甜甜";
// stu.age = 20;
// stu.gender = 'f';
struct Student2
{
  char *name;  // 姓名
  char gender; // 性别
  int age;     // 年龄
}stu2={.age=20,.gender='f',.name="大甜甜"},stu3;

struct 
{
  char *name;  // 姓名
  char gender; // 性别
  int age;     // 年龄
}stu4={"小甜甜",'f',20};

int main()
{

  return 0;
}