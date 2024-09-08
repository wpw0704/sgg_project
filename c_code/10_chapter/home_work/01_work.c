#include <stdio.h>
int main()
{
  //   （1）从终端循环输入5个成绩，保存到double数组，并输出。
  // 定义一个double[]类型的数组
  double scores[5];
  int len = sizeof(scores) / sizeof(double);
  for (int i = 0; i < len;i++){
    printf("请输入第%d个成绩:\n",i+1);
    scanf("%lf",&scores[i]);
  }
  for (int i = 0; i < len;i++){
    printf("成绩分别是:%.2lf\n",scores[i]);
  }



    return 0;
}