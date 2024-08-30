#include <stdio.h>
int main()
{
  // 需求,找出数组中的最大值,最小值
  int arr[] = {10, 50, 20, 100, 70, 90, 80};
  int max_num = arr[0]; // 假设当前的这个变量中存储的就是数组中的最大值
  int min_num = arr[0]; //假设当前的这个变量中存储的就是数组中的最小值
  int len = sizeof(arr) / sizeof(arr[0]); // 计算数组的长度
  for (int i = 0; i < len;i++){
    // 判断
    if(max_num < arr[i])
      max_num = arr[i]; // 把大的数据存储到假设的变量中
    // 判断
    if(min_num>arr[i])
      min_num = arr[i];
  }
  printf("数组中的最大值为:%d\n",max_num);
  printf("数组中的最小值为:%d\n",min_num);

  return 0;
}