#include <stdio.h>
// 定义学员的结构体类型
struct Student{
  int num; // 编号
  char *name; // 名字
  int age; // 年龄
  char gender; // 性别
  char *address; // 地址
};
int main()
{
  // 定义一个学员的结构体类型,及对应的变量,通过变量为成员赋值和取值
  // 先定义结构体类型,后声明结构体类型的变量,为成员赋值
  struct Student stu;
  // 使用点语法"." 可以找到成员进行赋值
  stu.name = "小甜甜";
  stu.num = 101;
  stu.age = 87;
  stu.gender = 'm'; //男
  stu.address = "北京市昌平区北七家镇";
  // 输出结构体变量对应的成员数据
  printf("名字:%s,编号:%d,年龄:%d,性别:%c,住址:%s\n",stu.name,stu.num,stu.age,stu.gender,stu.address);

  return 0;
}