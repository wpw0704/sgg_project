#include <stdio.h>
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
int main()
{
  // 需求:交换两个变量的数据值,使用函数来实现
  int a = 10;
  int b = 20;
  swap(&a, &b);
  printf("a= %d,b=%d\n", a, b);
  // 方式1:利用第三方变量,来交换
  // int temp = a;
  // a = b;
  // b = temp;
  // printf("a=%d,b= %d\n",a,b);
  // 方式2:进行加减操作,来交换
  // a = a + b; // a就是30了
  // b = a - b; // b就是10了
  // a = a - b; // a就是20了
  // printf("a=%d,b= %d\n", a, b);
  // 方式3:利用位运算的方式,来交换,效率更高
  // a = a ^ b;
  // b = a ^ b;
  // a = a ^ b;
  // printf("a=%d,b= %d\n", a, b);

  return 0;
}