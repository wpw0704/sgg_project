#include <stdio.h>
int main()
{
  // 定义数组
  int arr[] = {10, 20, 30, 40, 50};
  // 定义两个指针变量,分别指向数组中第一个元素的内存地址和第四个元素地址
  int *ptr1 = &arr[0];
  int *ptr2 = &arr[3];
  printf("ptr2 - ptr1 = %td\n", ptr2 - ptr1); // 3:相差的元素数
  printf("ptr1 - ptr2 = %td\n", ptr1 - ptr2); // -3: 相差的元素数
  printf("\n=============================\n");
  double d1 = 1.0;
  double d2 = 5.0;
  double *ptr_d1 = &d1; // 大
  double *ptr_d2 = &d2; // 小
  printf("d1的值:%.2lf,d1的内存地址:%p\n",d1,&d1);
  printf("d2的值:%.2lf,d2的内存地址:%p\n",d2,&d2);
  printf("ptr_d1 - ptr_d2 = %td\n",ptr_d1 - ptr_d2); // 1 相差的元素数

  // 两个指针相减:两个指针变量中的内存地址相减操作,相减的过程是:内存地址相减后除以当前的数据类型所占的字节数:ptr2的内存地址是:0000007b00dff90c,ptr1的内存地址:0000007b00dff900
  // 0000007b00dff90c地址 - 0000007b00dff900地址=12个字节,12/4=====3,相差3个元素
  // 指针加减整数:指针变量中的内存地址可以加一个整数也可以减一个整数,加减整数的操作结果是内存地址的移动结果,加一个整数就是向后移动多少个单位,减一个整数就是向前移动多少个单位,算法就是内存地址加一个整数,实际上加的是当前这个内存地址对应的数据类型的字节数乘以这个整数
  // 整数的内存地址:0000007b00dff900 加2,0000007b00dff900+2*4

  // 指针加减整数是移动指针,移动了多少个单位
  // 指针相减(两个指针相减),计算相差多少个元素(元素的个数)

  return 0;
}