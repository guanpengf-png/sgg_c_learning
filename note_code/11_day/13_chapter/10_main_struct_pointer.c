#include <stdio.h>
// 定义一个狗狗的结构体类型
struct Dog
{
  int age;       // 年龄
  char *name;    // 姓名
  char *color;   // 颜色
  double weight; // 重量
};
int main()
{
  // 结构体指针:就是指针变量,指向的是结构体变量的内存地址
  struct Dog dog; // 声明结构体类型变量
  dog.age = 10;
  dog.name = "大黄";
  dog.weight = 20;
  dog.color = "yellow";
  printf("名字:%s,年龄:%d,颜色:%s,重量:%.2lf\n", dog.name, dog.age, dog.color, dog.weight);
  // 结构体指针语法: struct 结构体类型名 * 结构体指针 = &结构体变量;
  // 结构体变量名.成员名= 值; 赋值方式
  // 结构体变量名.成员名; 访问数据
  // . 点语法
  // 结构体指针可以通过-> 访问成员中的数据
  // -> 成员访问符
  // 语法: 结构体指针名->成员名 = 值;  赋值
  // 结构体指针名->成员名 ;  访问数据
  struct Dog *ptr = &dog;
  printf("名字:%s,年龄:%d,颜色:%s,重量:%.2lf\n", ptr->name, ptr->age, ptr->color, ptr->weight);
  printf("名字:%s,年龄:%d,颜色:%s,重量:%.2lf\n", (*ptr).name, (*ptr).age, (*ptr).color, (*ptr).weight);

  // struct Dog dog; // 声明结构体类型变量
  // dog.age = 20;
  // printf("结构体变量的内存地址:%p\n",&dog);
  // printf("不知道谁的内存地址:%p\n",dog);
  // printf("结构体中第一个成员的内存地址:%p\n",&dog.age);

  return 0;
}