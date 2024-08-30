#include <stdio.h>
int main()
{
  // （4）请求出一个数组的最小值，并得到对应的索引。
  int nums[] = {10, 5, 100, 3, 90, 8, 70};
  int min_num = nums[0]; // 假设这个变量中存储的就是数组中的最小值
  int index = 0; // 假设最小值对应的索引值是0
  int len = sizeof(nums) / sizeof(int); // 长度
  // 遍历数组求最小值和对应的索引值
  for (int i = 0; i < len;i++){
    // 判断
    if(min_num>nums[i]){
      min_num = nums[i]; // 取出最小值
      index = i; // 取出对应的索引
    }
  }
  printf("最小值为:%d\n",min_num);
  printf("对应的索引为:%d\n",index);

  return 0;
}