#include <stdio.h>
// 定义Box的结构体类型
struct Box
{
  int length; // 长
  int width;  // 宽
  int height; // 高
};
// 计算体积的函数
int get_volume(struct Box *ptr){
  return ptr->length * ptr->width * (*ptr).height;
}
int main()
{
  // （1）编程创建一个Box结构体，在其中定义三个成员表示一个长方体的长、宽和高，长宽高可以通过控制台输入。
  // （2）定义一个函数获取长方体的体积（volume）。
  // （3）创建一个结构体指针，打印给定尺寸的长方体的体积。
  // 声明结构体类型的变量
  struct Box b;
  printf("输入长宽高:\n");
  scanf("%d %d %d",&b.length,&b.width,&b.height);
  int vol = get_volume(&b); // 传入的是结构体指针
  printf("体积是:%d\n",vol);

  return 0;
}