#include <stdio.h>
int binary_search(int *arr, int len, int target)
{
  // 开始索引
  int start = 0;
  // 结束索引
  int end = len - 1;
  while (start<=end)
  {
    // 计算中间的索引值
    int mid = (start + end) / 2;
    // 目标数据和中间索引位置的数据进行对比
    if (target > arr[mid])
      start = mid + 1;
    else if (target < arr[mid])
      end = mid - 1;
    else
      return mid;
  }
  return -1;
}
int main()
{
  // 需求:从数组中查找一个数据,如果找到则返回其索引值,找不到则返回-1
  int nums[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  int length = sizeof(nums) / sizeof(int);
  // 目标数据
  int target = 60;
  int index = binary_search(nums, length, target);
  printf("索引值为:%d\n", index);

  // 大前提:数据一定是有序的

  return 0;
}