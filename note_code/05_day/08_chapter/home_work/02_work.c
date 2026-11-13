#include <stdio.h>
int main()
{
  // （5）输入星期几，如果是星期一到星期三，打印：AAA，星期四到星期五，打印： BBB，星期六到星期日，打印CCC，如果都不是，提示“输入错误”。
  // int week;
  // printf("请您输入数字:1-7:\n");
  // scanf("%d", &week);
  // switch (week)
  // {
  // case 1:
  // case 2:
  // case 3:
  //   printf("AAA\n");
  //   break;
  // case 4:
  // case 5:
  //   printf("BBB\n");
  //   break;
  // case 6:
  // case 7:
  //   printf("CCC\n");
  //   break;
  // default:
  //   printf("输入有误\n");
  //   break;
  // }
  // （6）请使用for、while、do—while 三种形式打印1000——9999年内所有的闰年。
  // （7）输出小写的a-z以及大写的Z—A。
  // for (int i = 0; i < 26; i++)
  // {
  //   printf("%c ", i + 97);
  // }
  // printf("\n");
  // for (int i = 0; i < 26; i++)
  // {
  //   printf("%c ", 90 - i);
  // }
  // （8）求出1-1/2+1/3-1/4…..1/100的和。
  double sum = 0;
  for (int i = 1; i <= 100;i++){
    if(i%2==0){
      sum -= 1.0 / i;
    }else{
      sum += 1.0 / i;
    }
  }
  printf("结果是:%.2lf\n",sum);

  return 0;
}