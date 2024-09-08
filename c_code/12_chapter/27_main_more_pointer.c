#include <stdio.h>
int main()
{
  // 一级指针:是一个指针变量,指向了一个普通变量的内存地址
  // 二级指针:是一个指针变量,指向了一个一级指针的内存地址
  // 三级指针:是一个指针变量,指向了一个二级指针的内存地址
  // ....
  // 定义多级指针(定义多级指针变量,并且设置指向)

  int num = 10; // 普通变量
  int *ptr1 = &num; // ptr1就是一个一级指针
  int **ptr2 = &ptr1; // ptr2就是一个二级指针
  int ***ptr3 = &ptr2; // ptr3就是一个三级指针

  printf("num的内存地址:%p,num1数据值:%d\n",&num,num);
  printf("ptr1指向的内存地址:%p,*ptr1数据值:%d,&ptr1的内存地址:%p\n",ptr1,*ptr1,&ptr1);
  printf("ptr2指向ptr1的内存地址:%p,*ptr2指向ptr1指向的内存地址:%p,**ptr2指向ptr1指向的内存地址的数据值:%d,&ptr2的内存地址:%p\n",ptr2,*ptr2,**ptr2,&ptr2);
  printf("ptr3指向ptr2的内存地址:%p,*ptr3指向ptr2指向的内存地址:%p,**ptr3中指向ptr2指向ptr1的内存地址:%p,***ptr3指向ptr2指向ptr1指向的内存地址中的数据值:%d,&ptr3的内存地址:%p\n",ptr3,*ptr3,**ptr3,***ptr3,&ptr3);


  // ptr1 &num1
  // *ptr1 num1
  // ptr2 &ptr1
  // *ptr2 ptr1
  // **ptr2 num1

  return 0;
}