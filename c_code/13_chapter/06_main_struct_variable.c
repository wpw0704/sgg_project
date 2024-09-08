#include <stdio.h>
// 定义结构体类型的变量

// 声明结构体变量的方式1:先定义结构体类型,后声明变量
// struct 结构体的类型名{成员1,成员2,...}; struct 结构体类型名 变量名;
struct Student
{
  int age;       // 年龄
  char name[20]; // 姓名
};
struct Student stu1, stu2, stu3; // 后声明变量
// 声明结构体变量的方式2:定义结构体类型的同时声明变量
struct Teacher
{
  char name[20]; // 名字
  int age;       // 年龄
  char gender;   // 性别
} t1, t2;
// 声明结构体变量的方式2:定义结构体类型的同时声明变量,省略结构体的类型名
struct
{
  char name[20]; // 名字
  int age;       // 年龄
  char gender;   // 性别
} dog1, dog2;
int main()
{

  return 0;
}