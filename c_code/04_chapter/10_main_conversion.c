#include <stdio.h>
int main()
{

  // short 会转换成 int 类型   窄类型转宽类型(自动转换)
  // short s = 10; // 2
  // int num = 100; // 4
  // printf("%zu \n",sizeof(s+num)); // 4

  // float类型转成double 类型 窄类型转宽类型(自动转换)
  // float f = 12.3f; // 4
  // double d = 23.5; // 8
  // printf("结果:%zu \n",sizeof(f+d)); // 8

  // int类型转成double类型 窄类型转宽类型(自动转换)
  // int num = 10; // 4
  // double d = 23.5; // 8
  // printf("结果:%zu \n",sizeof(num+d)); // 8

  // signed int num1 = -10; // 有符号
  // unsigned int num2 = 5; // 无符号
  // printf("结果:%d\n",num1+num2); // -5 正确的
  // printf("结果:%u\n",num1+num2); // 结果 错误的


  // int类型转double类型的时候,赋值的自动转换(添加了精度)
  // int num = 10; // 整数
  // double d = num; // 浮点数
  // printf("%lf \n",d);

  // double类型转int类型的时候,赋值的自动转换(丢失精度)
  double d2 = 10.2;
  int num2 = d2;
  printf("%d",num2);
  return 0;
}