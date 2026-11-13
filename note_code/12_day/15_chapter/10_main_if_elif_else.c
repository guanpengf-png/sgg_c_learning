#include <stdio.h>

#define FLAG 100
#if FLAG==0
int num = 10;
#elif FLAG == 1
int num =20;
#elif FLAG == 2
int num = 30;
#else
int num = 40;
#endif
int main()
{
   printf("num=%d\n",num);
  
  return 0;
}