#include <stdio.h>

// 定义常量的方式1:使用#define宏定义的方式来定义常量
#define PI 3.14

int main()
{

  // 常量:不可变化的数据
  // 求一个圆的面积
  // int r = 5;
  // printf("圆的面积是:%d\n", 3.14 * r * r); // 直接使用常量值的方式

  // 常量的定义

  double r = 5.6;
  double s = PI * r * r;
  printf("面积为:%.2lf \n",s);

  return 0;
}