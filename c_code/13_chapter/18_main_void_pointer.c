#include <stdio.h>
int main()
{
  // void*类型的指针变量,是不能使用*进行解引用,不能间接访问指向的内存地址对应的空间中的数据
  // 其他类型的指针可以直接转成void*类型的指针
  int num = 10;      // int类型的变量
  double d = 20.12;  // double类型的变量
  void *ptr1 = &num; // ptr1指针变量指向了num变量的内存地址
  void *ptr2 = &d;   // ptr2指针变量指向了d变量的内存地址
  // printf("%d,%p\n", *ptr1, ptr1); // 报错的
  // printf("%d,%p\n", *ptr2, ptr2); // 报错的
  printf("%p\n",&num);
  printf("%p\n",ptr1);

  int *ptr3 = ptr1; // void*类型的指针也能自动转成int*类型的指针
  int *ptr6 = (int *)ptr1; // 强转/显示转换成int*类型的指针
  printf("%d,%p\n",*ptr3,ptr3);

  double *ptr4 = (double *)ptr2;
  printf("%.2lf,%p\n",*ptr4,ptr4);

  return 0;
}