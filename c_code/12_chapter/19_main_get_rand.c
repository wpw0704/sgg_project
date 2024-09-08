#include <stdio.h>
#include <stdlib.h>

// 产生10个随机数的一个数组,长度是固定的
int *get_array_rand()
{
  static int nums[10]; // 定义一个数组
  for (int i = 0; i < 10; i++)
    nums[i] = rand() % 100; // 产生随机数存储到数组中
  return nums;              // 返回数组名,数组名中存储就是数组的内存地址(数组中第一个元素的内存地址)
}

// 直接传入数组的内存地址和数组的长度,产生len个随机数,存放到数组中
void get_array_rand2(int *ptr_arr, int len)
{
  for (int i = 0; i < len; i++)
    ptr_arr[i] = rand() % 100; // 产生随机数存储到数组中
}
int main()
{
  // int num = rand()%10; // 产生伪随机数
  // printf("%d\n",num);
  // 调用一个函数,产生一个数组,数组中有10个随机数
  // int *ptr_arr = get_array_rand();
  // for (int i = 0; i < 10; i++)
  //   printf("索引:%d,数据值:%d,内存地址:%p\n", i, ptr_arr[i], &ptr_arr[i]);

  // 数组长度不是固定的
  int nums[20];
  get_array_rand2(nums, 20);
  for (int i = 0; i < 20; i++)
    printf("索引:%d,数据值:%d,内存地址:%p\n", i, nums[i], &nums[i]);

  return 0;
}