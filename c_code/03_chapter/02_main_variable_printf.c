#include <stdio.h>

int main()
{
  // 声明了一个int类型的变量,起名为num,赋值为10
  int num = 10;
  // 使用printf输出num变量的数据值
  // %d---格式占位符--是一个符号,用来显示整数类型的数据
  printf("这个变量num = %d \n", num);
  num = 1000; // 变量的重新赋值
  printf("num = %d \n", num);

  // 声明三个int类型的变量,起名为:a,b,并赋值为100,200,并展示出来
  int a = 100, b = 200;
  printf("a = %d,b = %d \n", a, b);

}