#include <stdio.h>
#include <stdint.h>
int main()
{
  int32_t x32 = -100;
  printf("x32变量占:%zu个字节\n",sizeof(x32));
  // printf("x32=%ld \n",x32);
  printf("x32=%d \n",x32);

  return 0;
}