#include <stdio.h>
int len = 5;
int arr[5] = {10, 20, 30, 40, 50};
void fn(int num)
{
  int a = 250;
  printf("%d \n", num + a); // 270  310
}
int get_sum(int x,int y){
  return x + y;
  // printf("这是一个函数\n");
}
int main()
{
  int sum = get_sum(10,20);
  printf("结果是:%d\n",sum);
  // fn(20);
  // for (int i = 0; i < 5; i++)
  // {
  //   printf("%d ", arr[i]); // 10,20,30,40,50
  // }
  // // printf("最终i的值是:%d\n",i);
  // printf("\n============\n");
  // fn(60); // 
  return 0;
}
