#include <stdio.h>
// 标识符常量之const关键字定义的常量
// 语法:
// const 数据类型名 常量名 = 值;
// const关键字定义常量的书写位置,可以在main程序输入口(主函数)的外部和内部
// const关键字定义的常量,有数据类型,有类型检查,还会在编译的时候进行内存的分配
int main(){
  // 需求:求圆的面积
  const double PI = 3.14; // 常量
  // PI = 34.56; // 不可以修改
  double r = 5.0; // 半径
  double s = PI * r * r;
  printf("面积是:%.2lf\n",s);
 

  return 0;
}