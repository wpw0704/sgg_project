#include <stdio.h>
#include <stdbool.h>
// 求一个数字是否是质数
bool is_prime(int num)
{
  if (num == 1 || num == 0)
    return false;
  for (int i = 2; i <= num / 2; i++)
    if (num % i == 0)
      return false;
  return true;
}
int main()
{
  // 定义函数，判断一个数字是否是质数
  // bool flag = is_prime(4);
  // printf("%d\n", flag);

  // 1-100之间所有的质数显示出来
  for (int i = 1; i <= 100; i++)
    if (is_prime(i))
      printf("%d\n", i);

  return 0;
}