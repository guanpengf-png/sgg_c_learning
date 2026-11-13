#include <stdio.h>
int main()
{
  // 不同整型的变量的声明及赋值和输出

  {
    // 短整型 short
    signed short s1 = -10;   // 声明了一个有符号的short类型,起名为s1,并赋值为-10
    unsigned short s2 = 20u; // 声明了一个无符号的short类型,起名为s2,并赋值为20
    // unsigned short s2 = 20; // 声明了一个无符号的short类型,起名为s2,并赋值为20
    short s3 = -20; // 声明了一个有符号的short类型,起名为s3,并赋值为-20
    printf("s1=%hd,s2=%hu,s3=%hd\n", s1, s2, s3);
    printf("s1=%d,s2=%d,s3=%d\n", s1, s2, s3);

    // 声明的有符号的short类型的变量,signed是可以省略不写的
    // 无符号的short类型的数据在赋值的时候,使用后缀u/U,这个u可以省略
    // 有符号的short类型的数据输出使用的格式占位符是%hd
    // 无符号的short类型的数据输出使用的格式占位符是%hu
    // 无论是有符号的short还是无符号的short类型的数据都可以使用%d,建议使用自己的格式占位符
  }
  printf("\n========================\n");
  {
    // 整型int
    signed int num1 = -100; // 声明了一个有符号的int类型的变量,起名为num1,并赋值-100
    // unsigned int num2 = 200u; // 声明了一个无符号的int类型的变量,起名为num2,并赋值200u
    unsigned int num2 = 200;
    int num3 = -100; // 声明了一个有符号的int类型的变量,起名为num1,并赋值-100
    printf("num1=%d,num2=%u,num3=%d\n", num1, num2, num3);
    printf("num1=%d,num2=%d,num3=%d\n", num1, num2, num3);
    // 声明的有符号的int类型的变量,signed是可以省略不写的
    // 无符号的int类型的数据在赋值的时候,使用后缀u/U,这个u可以省略
    // 有符号的int类型的数据输出使用的格式占位符是%d
    // 无符号的int类型的数据输出使用的格式占位符是%u
    // 无论是有符号的int还是无符号的int类型的数据都可以使用%d,建议使用自己的格式占位符
  }

  printf("\n========================\n");
  {
    // 长整型long
    signed long l1 = -1000L;   // 声明一个有符号的long类型变量,并赋值-1000
    unsigned long l2 = 2000LU; // 声明一个无符号的long类型变量,并赋值2000
    long l3 = -1000L;          // 声明一个有符号的long类型变量,并赋值-1000
    printf("l1=%ld,l2=%lu,l3=%ld\n", l1, l2, l3);
    printf("l1=%d,l2=%d,l3=%d\n", l1, l2, l3);
    // long类型的变量也分为有符号的和无符号的
    // 有符号的long类型变量声明的时候,signed可以省略
    // long类型的变量在赋值的时候,数据值的后面有后缀,
    // 有符号的long类型的数据的后缀是l/L,建议使用大写
    // 无符号的long类型的数据的后缀是LU/UL/lu/ul, 
    // 所有的后缀都可以省略,但不是很建议省略
    // 有符号的long在输出的时候,使用的格式占位符是%ld,无符号的格式占位符是%lu
    // 无论是有符号的long还是无符号的long类型的数据在输出的时候都可以使用%d格式占位符,建议还是使用各自的占位符更合适一些
  }

  printf("\n========================\n");

  {
    // 长长整型 long long
    signed long long ll1 = -100LL; // 声明一个有符号的long long类型变量起名为ll1,并赋值-100
    unsigned long long ll2 = 200LLU; // 声明一个无符号的long long类型变量起名为ll2,并赋值200
    long long ll3 = -100LL;// 声明一个有符号的long long类型变量起名为ll1,并赋值-100
    printf("ll1=%lld,ll2=%llu,ll3=%lld\n",ll1,ll2,ll3);
    printf("ll1=%d,ll2=%d,ll3=%d\n",ll1,ll2,ll3);
    // 声明有符号的long long类型的变量,signed是可以省略的
    // 有符号的long long类型的数据在赋值的时候后缀是LL/ll
    // 无符号的long long类型的数据在赋值的时候后缀是LLU/ULL/llu/ull
    // 后缀都可以省略,但不是很建议
    // 有符号的long long类型的数据输出的时候使用的格式占位符是%lld
    // 无符号的long long类型的数据输出的时候使用的格式占位符是%llu
    // 无论是有符号的还是无符号的long long类型的数据输出也可以使用%d格式占位符,但还是建议使用各自的
  }

  // 同一个区域中不能出现同名的变量
  // {
  //   int num = 10;
  // }
  // {
  //   int num = 20;
  // }

  return 0;
}