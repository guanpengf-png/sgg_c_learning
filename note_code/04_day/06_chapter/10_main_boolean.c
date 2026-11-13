#include <stdio.h>
#include <stdbool.h>
int main()
{
  bool flag1 = true;
  bool flag2 = false;
  printf("flag1=%d\n",flag1);
  printf("flag2=%d\n",flag2);

  if(flag1){
    printf("flag1为真\n");
  }else{
    printf("flag2为真\n");
  }

  return 0;
}