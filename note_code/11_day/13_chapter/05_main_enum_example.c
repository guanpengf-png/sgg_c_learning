#include <stdio.h>
// 定义季节的枚举类型
enum season
{
  spring,
  summer,
  autumn,
  winter
};
int main()
{
  // 需求:提示用输入数字--季节,输出用户喜欢哪个季节
  // 声明枚举类型变量
  enum season s;
  printf("请您输入数字(0--春天,1---夏天,2---秋天,3----冬天):\n");
  scanf("%d",&s);
  switch(s){
    case spring:printf("喜欢春天\n");break;
    case summer:printf("喜欢夏天\n");break;
    case autumn:printf("喜欢秋天\n");break;
    case winter:printf("喜欢冬天\n");break;
  }



  return 0;
}