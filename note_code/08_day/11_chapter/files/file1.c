#include <stdio.h>
int num1 = 10; // 全局变量
const double PI1 = 3.14; // 全局常量
char chs1[] = "hello"; // 全局数组
void func1(){
  printf("func1 function...\n");
}

static int num2 = 10; // 全局变量
static const double PI2 = 3.14; // 全局常量
static char chs2[] = "hello"; // 全局数组
static void func2(){
  printf("func2 function...\n");
}

// extern 关键字声明外部链接,可以在当前文件中通过该关键字声明数据及函数,并使用,但是不安全
// static修改变量/常量/数数组/函数,都是静态的
// static修饰的局部变量叫静态局部变量可以延长其生命周期,在全局静态区中分配空间使用,直到程序结束后释放,如果只声明未初始化,默认是0,只初始化一次,还可以限制当前文件中的数据在其他文件中即使使用extern声明也无法直接使用,起到安全作用