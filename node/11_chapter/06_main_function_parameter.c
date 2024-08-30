#include <stdio.h>
// 函数声明,x和y就是形参
void show_sum(int x, int y)
{
  printf("和为:%d\n", x + y);
}
int main()
{
  // 参数: 函数在声明的时候函数名字后面小括号中的参数列表,就是变量的声明和函数在调用的时候传递进来的数据
  // 参数分为:形参和实参
  // 形参:函数声明的时候小括号中声明的参数叫形参
  // 实参:函数调用的时候小括号中传入的参数叫实参(变量或者数据)
  // 函数中的形参和实参个数及类型必须一致,否则会出现不明确的效果,会报错
  // 例子:
  // 函数调用
  int a = 10, b = 20;
  show_sum(a, b);   // a和b都是实参
  show_sum(10, 20); // 10 和20都是实参
  // char *ch;
  // show_sum(123,3,89); // 会报错
  return 0;
}