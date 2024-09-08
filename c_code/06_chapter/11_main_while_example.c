#include <stdio.h>
int main()
{
  // 不确定次数的循环:不确定循环
  // 例子:提示用户输入密码(123),如果密码错误,则一直提示输入密码
  // 密码6位到16位,甚至更多

  int pwd; // 存储密码的容器
  while (pwd != 123)
  {
    printf("请您输入密码:\n");
    scanf("%d", &pwd);
  }
  printf("程序结束了\n");

  return 0;
}