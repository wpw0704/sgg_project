#include <stdio.h>
// 全局变量声明未初始化,数字类型的变量默认值是0,字符类型的数据值是\0 结束符
// 局部变量声明未初始化,里面存储的数据都是垃圾值,变量声明一定要初始化后再使用
  int num;
  double d;
  float f;
  char c;
  int arr[3];
  char chs[5];
int main()
{

  printf("num结果:%d\n", num);
  printf("d结果:%.2lf\n", d);
  printf("f结果:%.2f\n", f);
  printf("c结果:=%c=\n", c);
  printf("chs结果:==%s==\n", chs);
  for (int i = 0; i < 5; i++)
  {
    printf("+==%c==+\n", chs[i]);
  }
  printf("\n======================\n");
  for (int i = 0; i < 3; i++)
  {
    printf("%d\n", arr[i]);
  }

  return 0;
}