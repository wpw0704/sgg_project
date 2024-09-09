#include <stdio.h>

// 交换两个变量的数据的函数
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
// 遍历数组
void printf_array(int *arr,int len){
  for (int i = 0; i < len;i++)
    printf("%d ",arr[i]);
}
void bubble_sort(int *nums,int len){
 for (int i = 0; i < len-1; i++)   // 控制的比较的轮数
    for (int j = 0; j < len-1-i; j++) // 控制的比较次数
      if (nums[j] > nums[j + 1])  // 前后两个数据比较
        swap(&nums[j], &nums[j + 1]); // 交换位置
}
int main()
{
  // 冒泡排序
  int nums[] = {20, 100, 40, 30, 10, 50, 70, 60};
  int len = sizeof(nums) / sizeof(int);
  bubble_sort(nums, len);
  printf_array(nums,len);
  return 0;
}