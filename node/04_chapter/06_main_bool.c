#include <stdio.h>
// 使用#define宏定义的方式来表示布尔类型及值
#define BOOL int
#define TRUE 1
#define FALSE 0
int main()
{
  // 定义布尔类型的变量并赋值
  // BOOL flag1 = TRUE; // 真
  // BOOL flag2 = FALSE; // 假
  BOOL flag1 = FALSE; // 真
  BOOL flag2 = TRUE;  // 假

  if (flag1)
  {
    printf("flag1 为真");
  }
  if (flag2)
  {
    printf("flag2 为真");
  }

  return 0;
}