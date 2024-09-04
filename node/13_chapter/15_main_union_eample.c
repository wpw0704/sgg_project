#include <stdio.h>
// #define TOTAL 10
// 定义一个结构体
struct Person
{
  int num;       // 编号
  char name[20]; // 姓名
  char gender;   // 性别
  char work;     // 职业
  union
  {                  // 分数或者课程
    double score;    // 分数
    char course[20]; // 课程
  } sc;
};
int main()
{
  // 需求:提示用户,输入姓名,编号,性别,职业 分数或者课程,回车后以表格的效果进行数据的展示
  // 定义结构体类型的变量
  // struct Person per1;
  //  struct Person pers[TOTAL]; // 结构体数组  使用宏名表示数组的长度
  struct Person pers[3]; // 结构体数组
  for (int i = 0; i < 3; i++)
  {
    printf("请输入姓名,编号,性别,职业:\n");
    scanf("%s %d %c %c", pers[i].name, &pers[i].num, &pers[i].gender, &pers[i].work);
    // 提示用户输入分数或者课程的名字
    // 判断前面这个用户信息的职业是老师(t)还是学生(s)
    if (pers[i].work == 't')
    {
      // 老师
      printf("请您输入课程名字:\n");
      scanf("%s", pers[i].sc.course);
    }
    else
    {
      // 学生
      printf("请您输入分数:\n");
      scanf("%lf", &pers[i].sc.score);
    }
  }
  // 展示信息
  printf("\n==========================\n");
  printf("姓名\t编号\t性别\t职业\t分数/课程\n");
  for (int i = 0; i < 3; i++)
  {
    // 判断职业
    if (pers[i].work == 's')
      printf("%s\t%d\t%c\t%c\t%.2lf\n", pers[i].name, pers[i].num, pers[i].gender, pers[i].work, pers[i].sc.score);
    else
      printf("%s\t%d\t%c\t%c\t%s\n", pers[i].name, pers[i].num, pers[i].gender, pers[i].work, pers[i].sc.course);
  }

  return 0;
}