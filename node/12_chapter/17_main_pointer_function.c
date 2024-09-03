#include <stdio.h>
// 指针函数,返回的是一个局部变量的内存地址
int *get_number(int x) // 10  100
{
  // x += 20;
  static int y; // 定义了一个静态的局部变量
  y = x + 20; // 把数据赋值给静态局部变量
  // static int y= x + 20; // 错误的写法
  return &y; // 返回该变量的内存地址
}
int main()
{
  int num = 10;
  int *ptr = get_number(num);
  printf("ptr的内存地址:%p\n", ptr);
  printf("ptr指向的内存地址中的数据:%d\n", *ptr);
  // 指针函数,返回的是一个指针,如果返回的是一个局部变量的内存地址,此时会出现异常,原因:局部变量在函数调用结束后,已经销毁了,此时是没有正确的内存地址及数据的,函数调用后,外部接收的时候会出现错误
  // 如何解决:可以使用静态的局部变量来解决

  return 0;
}