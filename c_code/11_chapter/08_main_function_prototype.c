#include <stdio.h>
// 函数原型,作用:告诉编译器(main函数)已经有了你调用的这个函数的 返回值类型及参数
void show_func();
// 函数声明
void show_func()
{
  printf("啦啦啦\n");
}
int main()
{
  show_func(); // 函数调用
  return 0;
}
