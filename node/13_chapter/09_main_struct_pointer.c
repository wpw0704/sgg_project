#include <stdio.h>
// 结构体指针:就是一个指针变量,指向了结构体变量的内存地址
// 结构体指针变量的声明的语法:
// struct 结构体类型名 * 结构体指针变量名;

// 定义一个结构体学生类型
struct Student{
  int num; // 编号
  char *name; // 名字
  int age; // 年龄
};
int main()
{
  // 定义结构体类型的变量
  struct Student stu;
  stu.num = 101;
  stu.name = "小甜甜";
  stu.age = 87;
  // 定义一个结构体指针变量,指向结构体变量的内存地址
  struct Student *ptr_stu = &stu;
  printf("结构体变量的内存地址:%p\n",&stu);
  printf("结构体指针变量指向的内存地址:%p\n",ptr_stu);
  // 通过结构体指针变量访问结构体变量中的成员需要使用一个符号: -> 成员访问符
  // 通过变量访问成员数据
  printf("姓名:%s,编号:%d,年龄:%d\n",stu.name,stu.num,stu.age);
  // 通过指针变量访问成员数据
   printf("姓名:%s,编号:%d,年龄:%d\n",ptr_stu->name,ptr_stu->num,ptr_stu->age);
   printf("姓名:%s,编号:%d,年龄:%d\n",(*ptr_stu).name,(*ptr_stu).num,(*ptr_stu).age);
  return 0;
}