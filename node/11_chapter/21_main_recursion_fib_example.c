#include <stdio.h>
// 传入某个位置的数字,得到的是这个位置具体的数据值
// 传入的是一个月份,得到的是这个月份对应的兔子数量值
int get_fib(int num)
{
  if (num == 1 || num == 2)
    return 1;
  return get_fib(num - 1) + get_fib(num - 2);
}
int main()
{
  // 1，1，2，3，5，8，13... 这是一个斐波那契数列，它的规则是第1个和第2个斐波那契数是1，从第3个数开始，每个斐波那契数都是前两个数之和。编写程序，输入一个整数，计算它的斐波那契数？
  // 第12个月兔子的数量 = 第十一个月兔子的数量+第十个月兔子的数量
  // 第12位置的数字 = 第十一个位置的数字+第十个位置的数字
  // 第十一个位置的数字 = 第十个+第九个
  // 第十个位置的数字 = 第九个+第八个
  int result = get_fib(12);
  printf("%d\n", result);

  return 0;
}