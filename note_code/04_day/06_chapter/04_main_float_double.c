#include <stdio.h>
int main()
{
  // float f = 12.34f;
  // printf("f=%f\n",f);
  // printf("f=%lf\n",f);
  // 结论:float类型的数据输出可以使用%f,也可以使用%lf格式占位符
  // double d = 23.45;
  // printf("d=%lf\n",d);
  // printf("d=%f\n",d);
  // 结论:double类型的数据输出可以使用%lf,也可以使用%f格式占位符
  // 注意:还是要各自使用各自的格式占位符

  // float f;
  // printf("请您输入一个小数:\n");
  // // scanf("%f",&f);
  // scanf("%lf",&f);
  // printf("f=%f\n",f);
  double d;
  printf("请您输入一个小数:\n");
  scanf("%lf",&d);
  // scanf("%f",&d);
  printf("d=%lf\n",d);

  // 结论:float类型的数据在输入的时候必须使用格式占位符%f
  // 结论:double类型的数据在输入的时候必须使用格式占位符%lf
  // 推荐使用各自的格式占位符

  return 0;
}