#include <stdio.h>
int main()
{
  // 定义一个结构体类型,并声明变量的同时直接使用大括号为成员赋值
  struct {
    char *name; // 名字
    int age; // 年龄
    char gender; // 性别
  }stu1={"jack",12,'m'},stu2={"tom",29,'f'};
  printf("姓名:%s,年龄:%d,性别:%c\n",stu1.name,stu1.age,stu1.gender);
  printf("姓名:%s,年龄:%d,性别:%c\n",stu2.name,stu2.age,stu2.gender);

  return 0;
}