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
  if (start >= end)
    return;
  int low = start,high = end + 1; // 向前移动的索引
  while (1)
  {
    while (low < end && nums[++low] <= nums[start])
      ;
    while (high > start && nums[--high] >= nums[start])
      ;
    if (low >= high) // 判断low小于high
      break;
    swap(&nums[low], &nums[high]);
  }
  // 让基准的数据和小于基准的数据中最右侧的数据交换位置
  swap(&nums[start], &nums[high]);

  // 新的子数列数组(左侧/右侧) 重复上面的代码,按照这种思路去交换位置
  quick_sort(nums, start, high - 1); // 左侧的数据要进行对比交换
  quick_sort(nums, high + 1, end);
}

// 遍历数组
void printf_array(int *arr, int len)
{
  for (int i = 0; i < len; i++)
    printf("%d ", arr[i]);
}
int main()
{
  int nums[] = {9, -16, 40, 23, -30, -49, 25, 21, 30};
  int len = sizeof(nums) / sizeof(int);
  quick_sort(nums, 0, len - 1);
  printf_array(nums, len);

  return 0;
}