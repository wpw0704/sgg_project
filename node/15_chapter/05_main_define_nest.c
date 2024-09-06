#include <stdio.h>
// 宏定义嵌套
#define PI 3.14
#define S PI*r*r

int main()
{
  int r = 10;
  printf("圆的面积为:%.2lf\n",S);
  // printf("圆的面积为:%.2lf\n",3.14*r*r);

  return 0;
}