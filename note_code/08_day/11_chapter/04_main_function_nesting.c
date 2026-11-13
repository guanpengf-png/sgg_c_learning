#include <stdio.h>
// 函数嵌套声明:函数声明中还有其他的函数声明,c中不允许这么实现,原因是:这种语法不规范
void func1(){
  printf("func1函数\n");
  void func2(){
    printf("func2函数\n");
  }
  func2(); // 函数调用
}
int main()
{

  func1(); // 调用函数
  return 0;
}