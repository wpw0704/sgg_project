#include <stdio.h>
// 枚举类型中的元素值的本质是整型(int),默认是从0开始的,依次的递增1
// 枚举类型中的成员值(元素值)是可以进行修改的,成员值修改后,后面的成员的值也是依次递增1
// enum Color
// {
//   red =100, // 修改成员值
//   green,
//   blue
// };
// 下面的方式属于乱改值
// enum Color
// {
//   red =100,
//   green,
//   blue=200
// };
enum Color
{
  red, // 0
  green, // 1
  blue // 2
};
int main()
{
  // // 定义枚举类型的变量,并赋值
  // enum Color color; // 先声明变量
  // // 后赋值
  // color = green;
  // printf("%d\n",color);
  // color = 20; // 不建议赋值为一个超枚举类型值的范围
  // printf("%d\n",color);

  // 定义枚举类型的变量,直接赋值
  enum Color color = green;
  printf("%d\n",color);

  return 0;
}