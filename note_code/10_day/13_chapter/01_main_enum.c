#include <stdio.h>
// 定义一个性别的枚举类型
enum gender
{
  female,
  male
};
// 定义一个季节的枚举类型
enum SEASON
{
  spring,
  summer,
  autumn,
  winter
};
// 定义一个星期的枚举类型
enum week
{
  monday,
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday,
  sunday
};
int main()
{
  // 枚举类型也属于自定义类型中一种
  // 枚举类型:开发人员可以在该类型定义的时候,内部有多个数据值(有限个数的),每个数据值的本质都是整型,默认是从0开始依次递增加1的,可以修改整数值,但不建议随意修改
  // 枚举类型定义的位置可以在函数外部(全局)也可以在函数内部(局部)
  // 枚举类型定义的语法:
  /*
    enum 枚举类型名{
      枚举元素值1,
      枚举元素值2,
      枚举元素值3,
      ...
    };
    枚举类型名:符合标识符命名规范的,可大写可小写
  */
  // 数据值的个数确定,其次使用系统的类型暂且无法表示或者表达不清,可以枚举类型定义
  // 请您选择性别: 男/女/保密

  return 0;
}