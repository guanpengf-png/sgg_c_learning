// 预处理指令几乎都是以#开头
// 不要在预处理指令的后面加分号
// #include <stdio.h>
// 下面的写法可以,但是不建议
//  #include <stdio.h> 
//  # include <stdio.h> 
//  # include<stdio.h> 
//  # include <std\
// io.h>
#define PI 3.14
int main()
{
  // #include <stdio.h>
  double r = 5.0;
  double s = PI * r * r;
  printf("测试:%.2lf\n",s);
  return 0;
}