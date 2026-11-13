#include <stdio.h>
int main()
{
  // sprintf();
  // sscanf();
  // "name is jack,age is 12,gender is m";
  {
    char chs[100];       // 字符数组容器
    char name[] = "tom"; // 名字
    int age = 12;        // 年龄
    char gender = 'm';   // 性别
    sprintf(chs, "name is %s,age is %d,gender is %c", name, age, gender);
    // 把指定格式的字符串数据写入到字符数组中
    printf("chs=%s\n", chs);
  }

  {
    char chs[] = "age is 12,gender is m,name is jack";
    char name[20];
    int age;
    char gender;
    sscanf(chs, "age is %d,gender is %c,name is %s", &age, &gender, name);
    // 把字符串数据按照指定的格式进行提取
    printf("name is:%s\n", name);
    printf("age is:%d\n", age);
    printf("gender is :%c\n", gender);
  }

  return 0;
}