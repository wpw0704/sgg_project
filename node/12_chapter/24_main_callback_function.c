#include <stdio.h>

void get_array(int *ptr_arr, int len, int (*ptr_func)(int))
{
  for (int i = 0; i < len; i++)
  {
    // 调用一个函数,把数组中的数据传入进去,修改值后重新存储到数组中
    ptr_arr[i] = ptr_func(ptr_arr[i]);
  }
}
int get_sum(int num)
{ // 加10
  return num + 10;
}
int get_sub(int num)
{ // 减5
  return num - 5;
}
int main()
{
  // 需求:把一个数组传入函数,可以求数组中每个数据加10,可以求每个数据减5
  int nums[] = {10, 20, 30, 40, 50};
  int len = sizeof(nums) / sizeof(nums[0]);
  get_array(nums, len, get_sum); // 函数调用
  for (int i = 0; i < len; i++)
  {
    printf("%d\n", nums[i]);
  }
  printf("\n===========\n");
  get_array(nums, len, get_sub); // 函数调用
  for (int i = 0; i < len; i++)
  {
    printf("%d\n", nums[i]);
  }

  return 0;
}