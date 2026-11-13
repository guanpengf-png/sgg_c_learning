#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define S(a) (a)*(a)
int get_s(int a){
  return a * a;
}
int main()
{

  int i = 1;
  while(i<=5){
    // printf("结果:%d\n",get_s(i++));
    printf("结果:%d\n",S(i++));
    // i++;
  }

  return 0;
}