#include <stdio.h>
#include <string.h>
// 定义游客的结构体类型
struct Visitor{
  // char *name; // 名字
  char name[20];
  int age;    // 年龄
  int price;  // 票价
};
// 根据年龄计算票价
void computed_price(struct Visitor *v){
  v->price = v->age > 18 ? 20 : 0;
}
int main()
{
  // （1）一个景区根据游人的年龄收取不同价格的门票。
  // （2）请编写游人结构体（Visitor），根据年龄段决定能够购买的门票价格并输出。
  // （3）规则：年龄 > 18，门票为20元，其它情况免费。
  // （4）可以循环从控制台输入名字和年龄，打印门票收费情况，如果名字输入n，则退出

  do
  {
    struct Visitor v; // 声明结构体类型变量
    printf("请您输入姓名:\n");
    scanf("%s", v.name);
    if (!strcmp(v.name, "n")) // 判断字符串是否相等的
      break;
    printf("请您输入年龄:\n");
    scanf("%d", &v.age);
    computed_price(&v); // 计算票价
    printf("%s今天%d岁了,票价是:%d元\n", v.name, v.age, v.price);
  } while (1);
  printf("程序结束\n");

  return 0;
}