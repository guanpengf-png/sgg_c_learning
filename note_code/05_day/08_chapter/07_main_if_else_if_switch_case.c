#include <stdio.h>
int main()
{
  // if-else if相关语句和switch-case语句的对比(区别):
  // 需求:输入成绩级别,显示对应的分数:
  // A----90-100之间
  // B----80-90之间
  // C----60-80之间
  // D----60以下
  // if-else if相关语句实现
  // char score = 'A';
  // if(score=='A')
  //   printf("90到100之间\n");
  // else if(score=='B')
  //   printf("80到90之间\n");
  // else if(score=='C')
  //   printf("60到80之间\n");
  // else
  //   printf("60以下\n");
  // printf("\n========\n");
  // switch(score){
  //   case 'A':printf("90到100之间\n");break;
  //   case 'B':printf("80到90之间\n");break;
  //   case 'C':printf("60到80之间\n");break;
  //   default:printf("60以下\n");break;
  // }

  // 需求:输入成绩:90-100之间则显示级别A
  // 80-90之间则显示级别B
  // 60-80之间则显示级别C
  // 60以下则显示级别D
  int score = 89;
  // if(score>=90)
  //   printf("A");
  // else if(score>=80)
  //   printf("B");
  // else if(score>=60)
  //   printf("C");
  // else
  //   printf("D");

  switch(score/10){
    case 9: printf("A");break;
    case 8: printf("B");break;
    case 7: 
    case 6: printf("C");break;
    default: printf("D");break;
  }

  // 结论:如果是针对范围判断推荐是if-else/if-else if及其相关的数据
  // 如果是针对具体的多个数据值的判断,推荐使用switch-case语句
  return 0;
}