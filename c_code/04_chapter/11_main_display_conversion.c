#include <stdio.h>
int main()
{
  // 强制类型转换(显示转换),告诉系统,我就要转换,解决那个警告的问题(为了明确其结果)

  double d1 = 3.987;
  double d2 = 4.235;
  //  8.222
  int sum1 = d1 + d2;        // 丢失了精度
  int sum2 = (int)(d1 + d2); // 强制类型转换
  int sum3 = (int)d1 + (int)d2;
  int sum4 = (int)(2.5 * 10 + 2 * 1.5);
  printf("sum1结果:%d \n", sum1); // 8
  printf("sum2结果:%d \n", sum2); // 8
  printf("sum3结果:%d \n", sum3); // 7
  printf("sum4结果:%d \n", sum4); //

  return 0;
}