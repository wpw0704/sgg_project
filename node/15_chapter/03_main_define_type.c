#include <stdio.h>
// 使用宏定义布尔类型
#define BOOL int
#define TRUE 1
#define FALSE 0
typedef int Bool; // 起别名
int main()
{
  BOOL flag1 = TRUE;
  BOOL flag2 = FALSE;
  printf("flag1 = %d,flag2 = %d\n",flag1,flag2);

  return 0;
}