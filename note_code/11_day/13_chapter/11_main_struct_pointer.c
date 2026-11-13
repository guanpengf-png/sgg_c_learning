#include <stdio.h>
// 定义狗狗的结构体类型
struct Dog{
  char *name;    // 名字
  int age;       // 年龄
  double weight; // 提示
};
char *say(struct Dog *ptr){
  // char *txt=NULL; // 字符指针
  static char txt[100]; // 字符数组
  // 把字符串数据值按照指定的格式写入到一个字符指针/字符数组容器中
  sprintf(txt, "汪汪,我是%s,今年已经%d岁了,我体重%.2lfkg", ptr->name, ptr->age, ptr->weight);
  return txt;
}
int main()
{
  // （1）编写一个Dog结构体，包含name(char *)、age(int)、weight(double)属性。
  // （2）编写一个say函数，返回字符串，方法返回信息中包含所有成员值。
  // （3）在main函数中，创建Dog结构体变量，调用say	函数，将调用结果打印输出。
  // 声明结构体变量
  struct Dog d;
  d.name = "大黄";
  d.age = 12;
  d.weight = 20;
  char *str =  say(&d);
  printf("%s\n",str);

  return 0;
}