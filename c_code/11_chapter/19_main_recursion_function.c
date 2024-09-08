#include <stdio.h>
// 定义一个递归函数
void func1(int a)
{
  if (a != 0)
    func1(a - 1);    // 2  1 0
  printf("%d\n", a); // 挂起 3  挂起 2 挂起 1 0
}

void func2(int a)
{
  if (a < 3)
    func2(a + 1);
  printf("%d\n", a); // 挂起 1 挂起 2 3
}

void test(int a)
{
  printf("%d\n", a); // 3  2 1
  if (a > 1)
    test(a - 1);
  printf("%d\n", a); // 挂起 3 挂起 2 1
}
int main()
{
  // 递归函数:就是一个函数,指的是函数内部调用函数自己,称为:递归函数,函数调用的一种方式,必须要有结束的条件,否则就是死循环
  // func1(3);
  // printf("\n============\n");
  // func2(1);
  test(3); // 3 2 1 1 2 3

  return 0;
}