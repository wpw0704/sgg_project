#include <stdio.h>
// 结构体:就是一种数据类型,属于自定义数据类型中的一种,也属于复合类型
// 复合类型:数组,结构体
// 定义结构体,需要使用一个关键字struct---结构

// 声明结构体的语法:
/*
  struct 结构体名{
    数据类型 成员1;
    数据类型 成员2;
    数据类型 成员3;
    ...
  };
*/
// 例子:
// 定义一个学生的结构体类型/定义一个结构体学生类型
// struct Student{
//   int num; // 学好
//   char *name; // 名字
//   int age; // 年龄
//   char *phone; // 电话
// };
struct Student{
  int num; // 学好
  char name[30]; // 名字
  int age; // 年龄
  char phone[20]; // 电话
  char address[100];
};
// 定义一个关于通讯录的结构体类型
struct AddressBook{
  char name[20]; // 名字
  int age; // 年龄
  char gender; // 性别
  char phone[20]; // 电话
  char address[50]; // 地址
};
int main()
{
  
  
  return 0;
}