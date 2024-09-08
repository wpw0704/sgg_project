#include <stdio.h>
int main()
{
  // int num = 10;    // 定义一个int类型的变量,起名为num,存储10这个数据
  // int *ptr = &num; // 定义一个int*类型的指针变量,起名为ptr,指向了num变量的内存地址
  // // num += 10;
  // // printf("num的值:%d\n", num);                                  // 20
  // // printf("ptr指向的内存空间对应的内存地址中的数据:%d\n", *ptr); // 20
  // *ptr += 20;
  // printf("num的值:%d\n", num);                                  // 30
  // printf("ptr指向的内存空间对应的内存地址中的数据:%d\n", *ptr); // 30

  double d = 23.5;     // 定义double类型的变量,起名为d,存储23.5这个数据
  double *ptr1 = &d;   // 定义double*类型的指针变量,起名为ptr1,指向了变量d的内存空间地址
  double *ptr2 = ptr1; // 定义double*类型的指针变量,起名为ptr2,指向了ptr1指针变量指向的内存空间地址
  // printf("d变量的数据是:%.2lf\n", d);
  // printf("ptr1指针变量指向的内存空间中的数据:%.2lf\n", *ptr1);
  *ptr1 += 10;
  printf("d变量的数据是:%.2lf\n", d);
  printf("ptr1指针变量指向的内存空间中的数据:%.2lf\n", *ptr1);

  // printf("d变量的内存地址:%p\n", &d);
  // printf("ptr1指针变量指向的内存地址:%p\n", ptr1);
  // printf("ptr2指针变量指向的内存地址:%p\n", ptr2);
  *ptr2 += 100;
  printf("d变量的数据是:%.2lf\n", d);
  printf("ptr1指针变量指向的内存空间中的数据:%.2lf\n", *ptr1);
  printf("ptr2指针变量指向的内存空间中的数据:%.2lf\n", *ptr2);

  // 通过指针变量修改某个变量中的数据值

  return 0;
}