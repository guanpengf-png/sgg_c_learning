// #include 引入头文件/库文件/系统文件/自定义的头文件(系统的文件使用的是<>包括,自定义的文件使用是""包裹)
// 文件所在的路径分为两种:
// 1. 绝对路径:从具体的某个磁盘盘符开始一直到当前的这个文件的路径
// 2. 相对路径:相对于当前的文件的路径
// ./ -----当前的目录,也可以省略./
// ../-----上一级目录
#include <stdio.h>
// 绝对路径
// #include "D:\2026_09_09\code\15_chapter\08_headers\project\src\02_my_header.h"
// 相对路径
// #include "./02_my_header.h"
#include "02_my_header.h"
#include "./includes/03_my_header.h"
#include "../04_my_header.h"
#include "../incs/05_my_header.h"
#include "../../06_my_header.h"
int main()
{
  func2();
  func3();
  func4();
  func5();
  func6();

  return 0;
}