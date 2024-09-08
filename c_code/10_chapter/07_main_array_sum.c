#include <stdio.h>
int main()
{
  // 求数组中所有数据的和,求平均值
  int arr[] = {10,20,30,40,51};
  int sum = 0; // 存储和的
  int len = sizeof(arr) / sizeof(arr[0]);
  // 遍历数组
  for (int i = 0; i < len;i++){
    // sum = sum+arr[i]
    sum += arr[i];
  }
  printf("和为:%d\n",sum);
  printf("平均值为:%.2lf\n",sum*1.0/len);

  return 0;
}