#include <stdio.h>
int main()
{
  // 指针 const
  // 指针const声明的语法:
  // 数据类型 * const 指针变量名;

  int num1 = 10, num2 = 20;
  int *const ptr1 = &num1; //  定义了一个指针const变量,指向了某个变量的内存地址
  printf("num1的内存地址:%p,数据值:%d\n", &num1, num1);
  printf("num2的内存地址:%p,数据值:%d\n", &num2, num2);
  printf("ptr1指向的内存地址:%p,指向的内存地址对应的空间中的数据:%d\n", ptr1, *ptr1);

  // 指针const指向不可以改变
  // ptr1 = &num2;
  // printf("ptr1指向的内存地址:%p,指向的内存地址对应的空间中的数据:%d\n", ptr1, *ptr1);
  // 指针const可以修改数据值
  *ptr1 = 200;
  printf("ptr1指向的内存地址:%p,指向的内存地址对应的空间中的数据:%d\n", ptr1, *ptr1);

  // 指针const不可以修改指向(内存地址的指向),但是能修改指向的内存地址中的数据

  // const指针可以修改指向  
  return 0;
}