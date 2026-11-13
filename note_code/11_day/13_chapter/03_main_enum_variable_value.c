#include <stdio.h>
// 先定义枚举类型,然后声明变量
// 枚举类型的元素值是唯一的,不能重复
// 枚举元素值的本质必须是整型值
// 枚举元素值默认是从0开始的,可以修改数据值,但是不能乱改
enum gender
{
  female,
  // female,
  male
};
enum SEASON
{
  spring=100,
  summer=101,
  autumn,
  winter
};

int main()
{
  // 声明枚举类型的变量,并赋值
  enum gender g = female;
  printf("结果:%d\n", g);
  enum gender g2 = {male};
  printf("结果:%d\n", g2);
  enum gender g3 = 1; // 直接赋值整数值
  printf("结果:%d\n",g3);

  for (enum SEASON s = spring; s <= winter; s++)
  {
    printf("%d\n", s);
  }

  return 0;
}