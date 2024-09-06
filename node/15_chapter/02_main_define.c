#include <stdio.h>
// 宏定义的语法
// #define 宏名 替换文本
#define PI 3.14
int main()
{
  // printf("%.lf\n",PI); // 宏替换,宏展开
  // 需求,通过宏定义的方式来定义常量,计算圆的面积
  int r = 5;
  printf("圆的面积:%.2lf\n",PI*r*r);
  return 0;
}