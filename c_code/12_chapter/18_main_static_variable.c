#include <stdio.h>
// 求两个数字的最大值
int get_max_num(int x, int y)
{
  return x > y ? x : y;
}
// 通过指针函数来实现求两个数字中的最大值
int *get_max_number(int x, int y)
{
  static int max_num; // 静态的局部变量
  max_num = x > y ? x : y; // 赋值
  return &max_num; // 返回静态局部变量的内存地址
}
int main()
{
  // 需求:通过一个函数求两个数字中的最大值
  int num1 = 10;
  int num2 = 20;
  // int max_num = get_max_num(num1, num2);
  // printf("最大值为:%d\n", max_num);

  int *max_num = get_max_number(num1, num2);
  printf("最大值为:%d\n", *max_num);

  return 0;
}