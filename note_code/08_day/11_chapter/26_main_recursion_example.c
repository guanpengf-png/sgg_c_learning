#include <stdio.h>
// 斐波那契数列的递归函数实现
int get_fib(int x)
{
  if (x == 1 || x == 2)
    return 1;
  return get_fib(x - 1) + get_fib(x - 2);
}
int main()
{
  // 通过递归实现斐波纳切数列中第12个位置的数据
  int result = get_fib(12);
  printf("结果:%d\n", result);

  return 0;
}