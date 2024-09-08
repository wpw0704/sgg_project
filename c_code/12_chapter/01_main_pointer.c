#include <stdio.h>

int main()
{
  // 指针:指的就是指针变量,就是一个变量,存储的是某个内存空间的内存地址
  int num = 10; // 声明一个int类型的变量,起名为num,存储10这个数据
  // 声明一个int * 类型的变量,起名为ptr,存储的是num变量的内存地址
  int *ptr = &num; // 可以理解为,ptr指针变量指向了num变量的内存地址

  printf("num的值:%d\n",num);
  printf("num变量的内存地址:%p\n",&num);
  printf("ptr指针变量中存储的内存地址:%p\n",ptr);
  // printf("ptr指针变量指向的内存地址:%p\n",ptr);
  printf("ptr指针变量指向的内存地址中存储的数据:%d\n",*ptr);
  printf("ptr指针变量自己的内存地址:%p\n",&ptr);

  return 0;
}