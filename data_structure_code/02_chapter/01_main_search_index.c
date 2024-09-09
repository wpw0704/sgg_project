#include <stdio.h>
// 查找数据,返回索引
int search_index(int *arr, int len,int target)
{
  for (int i = 0; i < len;i++)
    if(arr[i]==target)
      return i;
  return -1;
}
int main()
{
  // 需求:从数组中查找一个数据,如果找到则返回其索引值,找不到则返回-1
  int nums[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  int length = sizeof(nums) / sizeof(int);
  // 目标数据
  int target = 60;
  int index = search_index(nums, length,target);
  printf("索引值为:%d\n", index);

  return 0;
}