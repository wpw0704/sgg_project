#include <stdio.h>
// 共用体:也是一种数据类型,属于自定义数据类型,目的:为了存储不同类型的数据
// 共用体类型定义的语法:
/*
  union 类型名字{
    数据类型 成员1;
    数据类型 成员2;
    ...
  };
*/
// 例子:
// 定义一个共用体类型
union Data
{
  int a;
  char c;
  double d;
};
// 共用体类型变量的声明,三种方式:
// 方式1:先定义共用体类型,后声明变量
union Data1
{
  int a;
  char c;
};
union Data1 dt1, dt2;
// 方式2:定义共用体类型的同时声明变量
union Data2
{
  int a;
  char c;
} dt3, dt4;
// 方式3:定义共用体类型的同时声明变量,省略共用体类型名
union
{
  int a;
  char c;
} dt5, dt6;
int main()
{

  return 0;
}