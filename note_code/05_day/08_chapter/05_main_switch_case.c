#include <stdio.h>
int main()
{
  // 分支语句之多向分支语句:switch-case
  /*

    switch-case语句

    语法:
    swtich(表达式){
      case 值1:语句1;break;
      case 值2:语句2;break;
      case 值3:语句3;break;
      case 值4:语句4;break;
      ...
      default:语句5;break
    }
    表达式的值的类型不能是浮点类型
    case后面的值1-值5必须是常量值

    执行过程:
    代码执行到switch(表达式)这一行的时候,取出表达式的值,
    和case后面的值1进行对比,
    如果相同,则执行语句1,遇到break,则结束switch-case语句,继续向后执行
    如果不相同,则和case后面的值2进行对比,如果相同,则执行语句2,遇到break,则结束switch-case语句,继续向后执行
    如果不相同,则和case后面的值3进行对比,如果相同,则执行语句3,遇到break,则结束switch-case语句,继续向后执行
    如果不相同,则和case后面的值4进行对比,如果相同,则执行语句4,遇到break,则结束switch-case语句,继续向后执行
    如果不相同,则直接执行default后面的语句5,遇到break,则结束



    穿透现象:case后面的语句的后面的break可以省略,如果省略,在执行case后面语句的时候,没有遇到break,则继续执行下一个case后面的语句,直到遇到break则跳出switch-case语句,如果没有遇到则继续向后向后
    default这一行代码是可以省略不写的


  */

 // 例子:提示用户输入字母,显示对应的星期
  char week;
  printf("请您输入a-g,显示对应的星期:\n");
  scanf("%c",&week);
  switch(week){
    case 'a': printf("星期一\n");break;
    case 'b': printf("星期二\n");break;
    case 'c': printf("星期三\n");break;
    case 'd': printf("星期四\n");break;
    case 'e': printf("星期五\n");break;
    case 'f': printf("星期六\n");break;
    case 'g': printf("星期日\n");break;
    default : printf("输入有误\n");break;
  }
  printf("程序结束\n");

  return 0;
}