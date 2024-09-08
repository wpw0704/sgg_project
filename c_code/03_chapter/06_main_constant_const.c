#include <stdio.h>
// 语法: const 数据类型名 常量名 = 值;
const double PI = 3.14;
int main()
{
  // 常量定义方式2:使用const关键字来定义常量

  int r = 2;
  double s = PI * r * r;
  printf("面积为:%.3lf\n", s);

  return 0;
}