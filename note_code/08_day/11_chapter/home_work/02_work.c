#include <stdio.h>
// （2）交换两个变量的值
void swap(int x, int y)
{
  printf("x=%d,y=%d\n", x, y);
  int temp = x;
  x = y;
  y = temp;
  printf("x=%d,y=%d\n", x, y);
}

int main()
{
  // swap(10,20);
  // int num1 = 10, num2 = 20;
  // printf("num1=%d,num2=%d\n", num1, num2);
  // swap(num1,num2);
  // printf("num1=%d,num2=%d\n", num1, num2);
  // 方式1:
  // int num1 = 10;
  // int num2 = 20;
  // printf("num1=%d,num2=%d\n", num1, num2);
  // int temp = num1;
  // num1 = num2;
  // num2 = temp;
  // printf("num1=%d,num2=%d\n", num1, num2);

  // 方式2:
  // int num1 = 10;
  // int num2 = 20;
  // printf("num1=%d,num2=%d\n", num1, num2);
  // num1 = num1 + num2; // 30
  // num2 = num1 - num2; // 10
  // num1 = num1 - num2; // 20
  // printf("num1=%d,num2=%d\n", num1, num2);

  // 方式3:
  // int num1 = 10;
  // int num2 = 20;
  // printf("num1=%d,num2=%d\n", num1, num2);
  // num1 = num1 ^ num2; // 30
  // num2 = num1 ^ num2; // 10
  // num1 = num1 ^ num2; // 20
  // printf("num1=%d,num2=%d\n", num1, num2);

  return 0;
}