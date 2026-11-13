#include <stdio.h>
/*
  函数的返回值:函数的返回值的类型不是void,函数内部应该有return关键字,并且后面有明确的数据,该函数就是有返回值的

  函数的返回值:1.函数无返回值
              2.函数有返回值
              3.函数没有明确的返回值


  1. 函数无返回值,类型是void
  void---无类型---没有意义的类型----空类型,这种类型是不能定义或声明变量的
  当一个函数的返回值类型是void,该函数没有返回值
  即使该函数中有return,或者return后面有没有数据值,或者该函数中没有return,都没有关系

  2. 函数有返回值,函数的返回值类型不是void
  该函数的返回值类型不是void,并且该函数内部有return,且return后面有明确的数据值

  3.函数没有明确的返回值,函数的返回值类型不是void,
  该函数内部没有return,或者return后面没有明确的数据值



*/
// 函数声明或定义
void func1()
{
  printf("func1函数\n");
  // return 100;
}
// 函数声明或定义
int get_sum()
{
  return 10 + 20;
}

// 函数声明或定义
int get_sub(){
  // int sub = 100 - 20;
  int sub = 100 - 20;
  return;
}
int main()
{
  //  void result= func1(); // 函数调用
  // int sum = get_sum();
  // printf("结果是:%d\n", sum);
  int sub = get_sub();
  printf("结果是:%d\n",sub);

  return 0;
}