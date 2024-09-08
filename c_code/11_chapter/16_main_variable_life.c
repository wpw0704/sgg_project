#include <stdio.h>
void show_func()
{
  int a = 200;
  printf("a的值为:%d\n", a); // 200
}
int main()
{
  show_func(100);
  show_func(100);
  show_func(100);
  show_func(100);
  printf("main结束");
  // printf("main中a = %d\n",a);

  return 0;
}