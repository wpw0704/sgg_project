#include <stdio.h>
#include <math.h>
int main()
{
  // math相关的函数
  printf("-2的绝对值:%d\n",abs(-2)); // 整数的绝对值  2
  printf("-2.0的绝对值:%.2lf\n",fabs(-2.0)); // 小数的绝对值  2.00
  printf("9的平方根:%.2lf\n",sqrt(9)); // 一个数字的平方根 3.00
  printf("8的立方根:%.2lf\n",cbrt(8)); // 一个数字的立方根 2.00
  printf("3的4次方:%.2lf\n",pow(3,4)); // 一个数字的多少次方, 81
  printf("3.124向上取整:%.2lf\n",ceil(3.124)); // 向上取整, 4
  printf("-3.124向上取整:%.2lf\n",ceil(-3.124)); // 向上取整 -3
  printf("3.124向下取整:%.2lf\n",floor(3.124)); // 向下取整 3
  printf("-3.124向下取整:%.2lf\n",floor(-3.124)); // 向下取整
  printf("2.56向下取整:%.2lf\n",round(2.56)); // 四舍五入 3
  printf("12.91向下取整:%.2lf\n",trunc(12.91)); // 截断小数 12



  return 0;
}