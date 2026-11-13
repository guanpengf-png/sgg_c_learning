#include <stdio.h>
int main()
{
  //  typedef是一个关键字,起别名,可以为数据类型起别名
  // 为基本类型起别名
  typedef int integer;
  integer num = 10;
  // 为基本类型一次性起多个别名
  typedef int banana, apple, cantaloupe;
  banana a = 10;
  apple b = 20;
  cantaloupe c = 30;
  typedef unsigned long long unlonglong;
  unlonglong ll = 100;

  // 为结构体起别名
  // 方式1:
  // typedef struct Person{
  //   char name[20];
  //   int age;
  // }Person1;
  // Person1 p;
  // struct Person p;
  // 方式2:
  // typedef struct Person Person1;
  // Person1 p;
  // int num;

  typedef struct
  {
    char *name;
    int age;
  } Person;
  Person p;

  // 为共用体类型起别名
  typedef union
  {
    int a;
  } Data;
  Data dt;

  // 为指针起别名
  typedef int *int_pointer;
  int num = 10;
  int_pointer ptr = &num;
  // 为指针起别名
  typedef char *string;
  string str = "hello";

  int nums[] = {10, 20, 30};
  typedef int Array[3];
  // arr是数组名,类型是Array
  Array arr = {10, 20, 30};
  Array arr = {1, 2, 3};

  // 数组指针
  int nums2[] = {1, 2, 3, 4};
  // 为数组指针起别名
  typedef int(*Array_Pointer)[3];
  Array_Pointer ptr = &nums2;
  // 为指针数组起别名
  int a = 10, b = 20, c = 30;
  // 指针数组
  // int *ptr_arr[3] = {&a,&b,&c};
  // 为指针数组起别名
  typedef int *Pointer_Array[3];
  Pointer_Array ptr = {&a, &b, &c};

  return 0;
}