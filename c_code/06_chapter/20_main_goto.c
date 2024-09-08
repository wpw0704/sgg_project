#include <stdio.h>
int main()
{
  //   printf("1\n");
  //   goto three; // 跳转到这个标签位置
  //   printf("2\n");
  // three: // 标签名(标识名)
  //   printf("3\n");

  // 使用goto 循环输出0-5
  int i = 0;
start:
  if (i <= 5)
  {
    printf("%d\n", i);
    i++;
    goto start;
  }
  printf("程序结束");
  return 0;
}