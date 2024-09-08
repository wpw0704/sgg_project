#include <stdio.h>
int main()
{
  {
    int pwd;
    while (pwd != 123)
    {
      printf("输入密码:\n");
      scanf("%d", &pwd);
    }
    printf("程序结束\n");
  }
  {
    int pwd;
    do
    {
      printf("输入密码:\n");
      scanf("%d", &pwd);
    } while (pwd != 123);
    printf("程序结束\n");
  }

  // while循环:先判断条件是否成立,决定循环体是否执行
  // do-while循环:至少执行一次循环体,然后判断条件是否成立,决定循环是否执行
  // 是否使用哪个循环,看需求,循环体是否至少执行一次

  // while(1){}
  // do{
  // } while (1);

  return 0;
}