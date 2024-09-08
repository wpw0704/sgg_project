#include <stdio.h>
// 函数的四种表现形式
/*
  1. 无参数无返回值的函数
  2. 无参数有返回值的函数
  3. 有参数无返回值的函数
  4. 有参数有返回值的函数
*/

// 无参数无返回值的函数
void show_fun1()
{
  printf("啊捏哈涩呦~");
}
// 无参数有返回值的函数
int show_func2()
{
  printf("萨瓦迪卡~");
  return 100;
}
// 有参数无返回值的函数
void show_func3(int x)
{
  printf("考尼奇瓦~%d", x);
}
// 有参数有返回值的函数
int show_func4(int x, int y)
{
  printf("中国有句古话:识时务者为俊杰!");
  return x + y;
}

int main()
{

  return 0;
}