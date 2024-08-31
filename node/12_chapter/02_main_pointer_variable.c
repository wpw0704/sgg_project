#include <stdio.h>
int main()
{
  // 指针:指的是一个指针变量,存储的是一个变量的内存地址
  // 指针变量的声明语法: 数据类型 * 指针变量名 = [内存地址];

  int num = 100;   // 存储一个整数
  int *ptr = &num; // 声明一个int*类型的指针变量,起名为ptr

  // & 取地址符号,取址符号
  // * 取值符号,解引用符号,间接引用符

  // 指针变量声明的语法的三种写法:
  // int *ptr1;
  // int * ptr2;
  // int* ptr3;

  // char ch = 'A';
  // char *ptr_ch = &ch;

  // double d = 10.3;
  // double *ptr_d = &d;

  return 0;
}