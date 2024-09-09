#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
// 封住快排的函数代码
void quick_sort(int *nums, int start, int end)
{
  if(start>=end)
    return;
  // 坑
  int low = start;    // 向后移动的索引
  int high = end + 1; // 向前移动的索引
  while (1)
  {
    // 如果向后移动的索引小于结束的索引,那么就继续的循环,对比low索引位置的数据和基准数据
    while (low < end) 
    {
      low++; // low是0,需要跳过第一个数据,用第二个数据和第一个数据(基准数据)进行对比
      if (nums[low] > nums[start]) // 如果low位置的数据大于基准数据,说明找到了大的数据,就跳出循环
        break;
    }
    // nums[low]值大于基准数据

     // 如果向前移动的索引大于开始索引0,那么就循环遍历,对比high索引位置的数据和基准数据
    while (high > start)
    {
      high--; // 默认high是越界的,减减后到到达数组的最后一个索引
      if (nums[high] < nums[start]) // 如果high位置的数据小于基准数据,说明找到了小的数据,就跳出循环
        break;
    }
     // nums[high]值小于基准数据

      // 基准数据是:9
     // nums[low]----40  nums[high]--- -49

    // 判断low小于high的情况下,交换40和-49两个数据,如果low大于等于hight,说明数据已经交换完毕了,此时这一轮交换就结束了
    if (low < high)
    {
      swap(&nums[low], &nums[high]);
    }
    else
    {
      break;
    }
  }
  // 让基准的数据和小于基准的数据中最右侧的数据交换位置
  swap(&nums[start], &nums[high]);

  // 新的子数列数组(左侧/右侧) 重复上面的代码,按照这种思路去交换位置
  quick_sort(nums, start, high - 1); // 左侧的数据要进行对比交换
  quick_sort(nums, high + 1, end); // 右侧的数据要进行对比交换
}

// 遍历数组
void printf_array(int *arr,int len){
  for (int i = 0; i < len;i++)
    printf("%d ",arr[i]);
}
int main()
{
  int nums[] = {9, -16, 40, 23, -30, -49, 25, 21, 30};
  int len = sizeof(nums) / sizeof(int);
  quick_sort(nums,0,len-1);
  printf_array(nums, len);

  return 0;
}