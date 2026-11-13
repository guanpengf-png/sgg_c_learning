#include <stdio.h>
// 定义一个人的结构体类型
struct Person
{
  int id;        // 编号
  char name[20]; // 姓名
  char gender;   // 性别
  int age;       // 年龄
  char work;     // 职业
  union
  {
    double score;    // 分数
    char course[20]; // 课程
  } sc;
};
int main()
{

  // 声明一个结构体类型的数组
  int len = 3; // 数组的长度
  struct Person persons[len];
  // 遍历数组,收集每个人的信息
  for (int i = 0; i < len; i++)
  {
    printf("请您输入第%d个人的编号:\n", i + 1);
    scanf("%d", &persons[i].id);
    printf("请您输入第%d个人的名字:\n", i + 1);
    scanf("%s", persons[i].name);
    getchar(); // 吃个回车
    printf("请您输入第%d个人的性别:\n", i + 1);
    scanf("%c", &persons[i].gender);
    printf("请您输入第%d个人的年龄:\n", i + 1);
    scanf("%d", &persons[i].age);
    getchar(); // 吃个回车
    printf("请您输入第%d个人的职业:\n", i + 1);
    scanf("%c", &persons[i].work);
    // 判断职业
    if (persons[i].work == 's')
    {
      printf("请您输入第%d个人的分数:\n", i + 1);
      scanf("%lf", &persons[i].sc.score);
    }
    else
    {
      printf("请您输入第%d个人的课程:\n", i + 1);
      scanf("%s", persons[i].sc.course);
    }
  }
  // 展示表头
  printf("编号\t姓名\t性别\t年龄\t职业\t\t分数/课程\n");
  for (int i = 0; i < len; i++)
  {
    if (persons[i].work == 's')
      printf("%d\t%s\t%c\t%d\t%c\t\t%.2lf\n", persons[i].id, persons[i].name, persons[i].gender, persons[i].age, persons[i].work, persons[i].sc.score);
    else
      printf("%d\t%s\t%c\t%d\t%c\t\t%s\n", persons[i].id, persons[i].name, persons[i].gender, persons[i].age, persons[i].work, persons[i].sc.course);
  }
  return 0;
}