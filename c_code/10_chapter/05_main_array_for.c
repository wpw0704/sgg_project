#include <stdio.h>
int main()
{
  // 遍历数组

  // 定义一个数组,该数组类型是int[5]
  int nums[] = {10, 20, 30, 40, 50,60,70,80,90};
  // 通过索引访问数组元素
  // printf("%d\n",nums[0]);
  // printf("%d\n",nums[1]);
  // printf("%d\n",nums[2]);
  // printf("%d\n",nums[3]);
  // printf("%d\n",nums[4]);

  // 计算数组的长度:数组的总字节数/某个元素的字节数
  int len = sizeof(nums) / sizeof(nums[0]);

  for (int i = 0; i < len;i++){
     printf("数组的下标(索引/角标)为:%d,数据值为:%d\n",i,nums[i]);
  }

    return 0;
}