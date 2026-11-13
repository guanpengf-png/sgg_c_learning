#include <stdio.h>
#include <stddef.h>
// #pragma pack(1)
// typedef struct
// {
//   int age;      // 4
//   char gender;  // 1
//   double score; // 8

// } Student;
struct Student1{
  char c1;
  char c2;
  int n;
};
struct Student2{
  char c1; // 1
  int n; // 4
  char c2; // 1
};

struct Student3{
  char c1; // 1
  double d1; // 8
  int n; // 4
  double d2; // 8
  char c2; // 1
};

int main()
{

  // printf("Student结构体的总字节数:%zu\n", sizeof(Student));
  // printf("Student结构体的总字节数:%zu\n", sizeof(struct Student1));
  // printf("Student结构体的总字节数:%zu\n", sizeof(struct Student2));
  printf("结构体变量c1的偏移量是:%zu\n", offsetof(struct Student1 ,c1));// 0
  printf("结构体变量c1的偏移量是:%zu\n", offsetof(struct Student1 ,c2));// 1
  printf("结构体变量c1的偏移量是:%zu\n", offsetof(struct Student1 ,n));// 4
  printf("结构体变量c1的偏移量是:%zu\n", offsetof(struct Student2 ,c1));// 0
  printf("结构体变量c1的偏移量是:%zu\n", offsetof(struct Student2 ,n));// 4
  printf("结构体变量c1的偏移量是:%zu\n", offsetof(struct Student2 ,c2));// 8
  printf("Student结构体的总字节数:%zu\n", sizeof(struct Student3));
  return 0;
}