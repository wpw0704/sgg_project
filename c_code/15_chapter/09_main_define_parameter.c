#include <stdio.h>
// 定义一个带参数的宏
// #define SQ(x) x *x
// 即使参数只有一个,那么也要加括号括起来
#define SQ(x) (x)*(x) // 正常的写法
int main()
{
  int a = 10;
  int result = SQ(a);
  printf("结果为:%d\n", result);
  // 换一个写法
  int result2 = SQ(a + 10);
  // SQ(a+10)  a+10 *a+10
  // SQ(a+10)  10+10 *10+10
  printf("结果为:%d\n", result2);

  return 0;
}