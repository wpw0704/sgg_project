#include <stdio.h>
int main()
{
  // （2）一个养鸡场有6只鸡，它们的体重分别是3kg，5kg，1kg，3.4kg，2kg，50kg。请问这六只鸡的总体重是多少?平均体重是多少?
  // 定义double[]类型的数组
  double weights[6] = {3, 5, 1, 3.4, 2, 50};
  double sum = 0; // 求和的变量
  int len = sizeof(weights) / sizeof(double); // 长度
  for (int i = 0; i < len;i++){
    sum += weights[i];
  }
  printf("和为:%.2lf,平均体重:%.2lf\n",sum,sum/len);



  return 0;
}