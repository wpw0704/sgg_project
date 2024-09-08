#include <stdio.h>
// 枚举类型变量的声明:
// 定义一个三元色的枚举类型
enum Color
{
  red,
  green,
  blue
};
// 枚举类型变量声明方式1:先声明枚举类型,后声明枚举变量
// enum 枚举类型名 变量名;
enum Color color1;
enum Color color2;
// 枚举类型变量声明方式2:定义枚举类型的同时直接声明变量
enum Gender
{
  female,
  male
} gender1,gender2;
// 枚举类型变量声明方式3:定义枚举类型的同时直接声明变量,省略枚举类型名
enum 
{
  Monday,
  Thuesday,
  Wednesday
}week1,week2;
int main()
{

  return 0;
}