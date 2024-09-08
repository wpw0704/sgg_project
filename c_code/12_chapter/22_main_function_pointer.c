#include <stdio.h>
int get_sum(int x, int y)
{
  return x + y;
}
int main()
{
  // 求和,用函数实现,要求输入两个数字
  int num1, num2;
  printf("请您输入第一个数字:\n");
  scanf("%d", &num1);
  printf("请您输入第二个数字:\n");
  scanf("%d", &num2);
  // 定义一个函数指针,指向求和的函数的内存地址
  int (*ptr_sum)(int, int) = get_sum;
  int sum1 = get_sum(num1, num2); // 求和
  int sum2 = ptr_sum(num1, num2);
  printf("和为:%d\n", sum1);
  printf("和为:%d\n", sum2);

  // 原始的写法
  // int (*ptr_sum2)(int, int) = &get_sum;
  // int sum3 = (*ptr_sum2)(100, 200);
  // printf("和为:%d\n", sum3);

  // // 简化后的
  // int (*ptr_sum2)(int, int) = get_sum;
  // int sum3 = ptr_sum2(100, 200);
  // printf("和为:%d\n", sum3);

  return 0;
}