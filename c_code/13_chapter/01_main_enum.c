#include <stdio.h>
// 枚举类型定义的语法:
/*
enum 数据类型的名字{
  元素1,
  元素2,
  元素3,
  ...
};
*/

// 枚举类型属于自定义数据类型中的一种类型
// 枚举类型的名字 可以是首字母大写,也可以是所有字母都是大写的
// 例子:定义一个星期的枚举类型,并且设置里面的数据
enum Week
{
  Sunday, // 0
  Monday, // 1
  Tuesday, // 2
  Wedensday, // 3 
  Thursday, // 4
  Friday, // 5
  Saturday // 6
};
// 例子:定义一个三元色的枚举类型
enum Color
{
  red,
  green,
  blue
};
// 定义一个四季的枚举类型并且设置元素值
enum Season
{
  spring, // 春天
  summer, // 夏天
  autumn, // 秋天
  winter // 冬天
};
// 定义一个枚举类型,设置的性别的数据
enum Gender
{
  female, // 女 0
  male // 男 1
};
int main()
{
  int num = 10;

  return 0;
}