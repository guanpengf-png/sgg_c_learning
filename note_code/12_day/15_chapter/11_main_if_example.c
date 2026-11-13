#include <stdio.h>
#if __STDC_VERSION__>199901
  #define NUMBER_TYPE long long
  #define NUMBER_FORMAT "%lld"
#else
  #define NUMBER_TYPE long
   #define NUMBER_FORMAT "%ld"
#endif
int main()
{
  // 如果c标准在c99以上则用户可以使用 long long类型声明变量
  // 否则用户可以使用long类型声明变量

  // printf("%lld\n",__STDC_VERSION__);

  NUMBER_TYPE num = 100;
  printf("结果是:"NUMBER_FORMAT"\n",num);
  printf("所占的字节:%zu\n",sizeof(num));

  return 0;
}