#include <stdio.h>
// 求数组的平均值
double get_array_avg(double arr[],int len){
  double sum = 0; // 存储和的容器
  for (int i = 0; i < len;i++){
    sum += arr[i];
  }
  return sum / len; // 把平均值作为返回值进行返回
}
// 指针作为函数的参数使用,传递数组
double get_array_avg2(double *ptr,int len){
  double sum = 0; // 存储和的容器
  for (int i = 0; i < len;i++){
    // sum += *(ptr + i); // 利用指针变量移动指向,然后进行解引用获取数组中元素的数据
    // sum += *(ptr++); // 利用指针变量移动指向,然后进行解引用获取数组中元素的数据
    sum += ptr[i]; // 利用指针变量移动指向,然后进行解引用获取数组中元素的数据
  }
  return sum / len; // 把平均值作为返回值进行返回
}
int main()
{
  // 数组作为函数的参数使用了
  // 需求:通过函数实现数组的平均值
  double nums[] = {10.1,20.1,30.1,40.1,50.1};
  int len = sizeof(nums) / sizeof(nums[0]); // 计算数组的长度
  // double avg = get_array_avg(nums,len); // 调用函数,传入数组,接收结果
  double avg = get_array_avg2(nums,len); // 调用函数,传入数组,接收结果
  printf("数组的平均值为:%.2lf\n",avg);

  return 0;
}