#include <stdio.h>
#include <string.h>
// 需求: 通过函数对两个字符串进行计算,返回长度大的那个字符串
char * get_long_string (char *str1,char *str2){
  return strlen(str1) > strlen(str2)?str1:str2;
}
int main()
{
  // 指针函数:就是一个函数,返回值是一个指针,返回值类型是指针类型
  // 指针函数的声明或定义的语法:
  // 返回值类型 * 函数名([参数列表]){函数体语句;}
  char *chs1 = "hello";
  char *chs2 = "what are you no sha lei";
  char *max_str= get_long_string(chs1,chs2);
  printf("结果是:%s\n",max_str);

  return 0;
}