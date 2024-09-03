#include <stdio.h>
int main()
{
  // 空指针:指针变量赋值为NULL
  int num = 10;
  // int *ptr ; // 一个指针变量没有赋初值,指向的是一个不确定的内存地址,里面也有数据,垃圾值
  // 声明一个指针变量,要赋初值,NULL
  int *ptr = NULL; // 空指针
  ptr = &num;
  // 当一个指针变量不再使用了,那么可以赋值为空指针为NULL
  printf("%p,%d\n",ptr,*ptr);

  return 0;
}