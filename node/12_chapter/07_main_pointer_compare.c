#include <stdio.h>
int main()
{
  int nums[] = {10, 20, 30, 40, 50};
  double d1 = 10.12;
  int *ptr1 = &nums[0];
  int *ptr2 = &nums[2];
  int *ptr3 = &nums[0];
  for (int i = 0; i < 5; i++)
  {
    printf("索引:%d,数据值:%d,内存地址:%p\n", i, nums[i], &nums[i]);
  }
  printf("\n============\n");
  printf("ptr1>ptr2的结果:%d\n", ptr1 > ptr2);   // 0
  printf("ptr1<ptr2的结果:%d\n", ptr1 < ptr2);   // 1
  printf("ptr1==ptr3的结果:%d\n", ptr1 == ptr3); // 1

  double *ptr4 = &d1;
  printf("ptr1的内存地址:%p\n",ptr1);
  printf("ptr4的内存地址:%p\n",ptr4);
  printf("ptr4>ptr1的结果:%d\n",ptr4>ptr1); // 0 会出现警告,相同类型的指针变量比较才可以

  return 0;
}