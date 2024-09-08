#include <stdio.h>
// 通过typedef为char *起一个别名,表示字符串类型
typedef char *String;
// 定义一个学员的结构体类型
typedef struct {
  int num; // 编号
  // char *name; // 名字
  String name; // 名字
  int age; // 年龄
}Student;
int main()
{
  // 定义一个结构体类型,及对应的变量,访问里面的成员,存储一个学员的信息
  Student stu;
  stu.num = 101;
  stu.name = "小甜甜";
  stu.age = 20;
  printf("名字:%s,年龄:%d,编号:%d\n",stu.name,stu.age,stu.num);

  // 什么情况下使用字符数组,什么情况下使用字符指针
  // 如果是提示用户输入,那么使用字符数组,如果是直接赋值或者修改值,此时使用字符指针
  return 0;
}