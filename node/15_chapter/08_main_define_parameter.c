#include <stdio.h>
// 定义一个宏 带参数,带参数的宏,宏名后面不能有空格
#define MAX(a,b) a>b?a:b

int main()
{
  // 求两个数字的和
  int a = 10, b = 20;
  int max_num = MAX(a, b);
  printf("结果:%d\n", max_num);

  return 0;
}