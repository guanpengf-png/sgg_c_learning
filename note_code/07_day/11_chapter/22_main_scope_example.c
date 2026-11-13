// #include <stdio.h>
// double price = 200.0;
// void test01()
// {
//   printf("%.2f \n", price);
// }
// void test2()
// {
//   price = 250.0;
//   printf("%.2f \n", price);
// }
// int main()
// {
//   printf("%.2f \n", price); // 200.00
//   test01(); // 200.00
//   test2(); // 250.00
//   test01(); // 250.00
//   return 0;
// }


#include <stdio.h>
int a = 10;
void func1()
{
  int a = 20;
  printf("func1 a = %d \n", a);
}
void func2(int a)
{
  printf("func2 a = %d \n", a); // 30
}
void func3()
{
  printf("func3 a = %d \n", a);
}
int main()
{
  int a = 30;
  func1(); // 20
  func2(a); // 30
  func3(); // 10 
  {
    int a = 40;
    printf("block a = %d \n", a); // 40
  }
  printf("main a = %d \n", a); // 30
  return 0;
}
