#include <stdio.h>
// 声明函数原型
double get_max(double, double);
int main()
{
  // （1）定义函数，实现求两个double数字的最大值，并返回。
  // 调用函数
  double max_num = get_max(10.2, 35.7);
  printf("最大值为:%.2lf\n",max_num);
 

  return 0;
}
// 函数定义:定义一个函数,函数实现
double get_max(double d1,double d2){
  return d1 > d2 ? d1 : d2;
}