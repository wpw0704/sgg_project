#include <stdio.h>
// 尝试着制造一个属于自己的容易理解的语言(易语言)
#define 数字类型 int
#define 变量1 a
#define 变量2 b
#define 赋值 =
#define 如果 if
#define 否则 else
#define 输出 printf
#define 大于 >
int main()
{
  // 需求:获取两个数字中的最大值
  数字类型 变量1 = 10, 变量2 = 20;
  如果(变量1 大于 变量2){
    输出("%d\n", 变量1);
  }否则{
    输出("%d\n", 变量2);
  }

  // int a = 10, b = 20;
  // if (a > b)
  // {
  //   printf("%d", a);
  // }
  // else
  // {
  //   printf("%d", b);
  // }

  return 0;
}