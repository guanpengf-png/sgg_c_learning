#include <stdio.h>
// 递归实现正序输出0-3
void func(int x)
{
  if (x > 0)
    func(x - 1);
  printf("x=%d\n", x); // 3 ---挂起   2---挂起  1----挂起   0直接输出
}

void func2(int x)
{
  if(x<3){
    func2(x + 1);
  }
  printf("x=%d\n", x); 
}

void func3(int x){
  printf("x=%d\n",x);
  if(x>0)
    func3(x - 1);
  printf("x=%d\n",x);
}
int main()
{
  // 调用递归函数,实现的正序输出3-0
  int num1 = 3;
  func(num1);
  // printf("\n========\n");
  // // 调用递归函数,实现的倒序输出0-3
  // int num2 = 0;
  // func2(num2);
  // func3(3);

  return 0;
}