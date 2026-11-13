#include <stdio.h>
// 使用typedef关键字为指针起别名
typedef char *string;
// 使用typedef为结构体起别名
typedef struct{
  string name; // 姓名
  int age; // 年龄
  char gender; // 性别
  string phone; // 电话
}Person;
int main()
{
  // 声明结构体类型的变量
  Person per;
  per.name = "jack";
  per.age = 20;
  per.gender = 'm';
  per.phone = "19101085319";
  printf("名字:%s,年龄:%d,性别:%c,电话:%s\n",per.name,per.age,per.gender,per.phone);

  return 0;
}