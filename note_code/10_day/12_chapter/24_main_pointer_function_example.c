// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int *get_array_rand(int *len)
// {
//   srand(time(NULL));
//   static int nums[10];
//   *len = 10;
//   for (int i = 0; i < 10; i++)
//     nums[i] = rand() % 100;
//   return nums;
// }
// int main()
// {
//   // 编写一个函数，它会生成10个随机数，并使用数组名作为返回值。
//   int len=0;
//   int *ptr = get_array_rand(&len);
//   for (int i = 0; i < len; i++)
//     printf("索引:%d,元素值:%d\n", i, ptr[i]);
//   // srand(time(NULL));
//   // for (int i = 0; i < 10; i++)
//   // {
//   //   printf("%d\n", rand() % 100);
//   // }

//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COUNT 10
// int * () 类型
int *get_array_rand()
{
  srand(time(NULL));
  static int nums[COUNT];
  for (int i = 0; i < COUNT; i++)
    nums[i] = rand() % 100;
  return nums;
}
int main()
{
  // 编写一个函数，它会生成10个随机数，并使用数组名作为返回值。
  int *ptr = get_array_rand();
  for (int i = 0; i < COUNT; i++)
    printf("索引:%d,元素值:%d\n", i, ptr[i]);
  return 0;
}