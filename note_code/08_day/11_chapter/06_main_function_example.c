#include <stdio.h>
// 没有明确的返回值
int f1(){
  return;
}
double f2(){
  return 100; // 自动类型转换
}
float f3(){
  return (float)12.34;
}
char f4(){
  return 'A';
}

int f5(){
  return (int)100.12;
}
double f6(){
  return 12.34f; // 自动类型转换
}
void f7(){
  return 1000;
}
float f8(){
  return (float)100.123; // 强制类型转换
}
short f9(){
  return (short)100; // 强制类型转换
}
int f10(){
  return (int)100.34f;
}
char f11(){
  return 100;
}
int main()
{
  
  
  return 0;
}