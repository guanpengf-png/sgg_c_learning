#include <stdio.h>
// 枚举类型变量声明
enum gender1{ male};
enum gender1 g1;
enum gender2{male}g2;
enum { male}g3;
// 结构体类型变量声明
struct Student1{int age;};
struct Student1 stu1;
struct Student2{int age;}stu2,stu3;
struct{int age;}stu4,stu5;
// 共用体类型变量声明
union Data1{int a;};
union Data1 dt1;
union Data2{int a;}dt2,dt3;
union{int a;}dt4,dt5;
int main()
{
  
  
  return 0;
}