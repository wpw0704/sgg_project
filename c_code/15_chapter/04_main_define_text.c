#include <stdio.h>
// 宏定义 替换文本

#define M (n*n+n*3)
#define PRINTF printf("sum = %d\n",sum)
int main()
{
  // int n = 10;
  // PRINTF;

   int n = 10;
   int sum = 3 * M + M * 5;
   // int sum = 3 * (n*n+n*3) + (n*n+n*3) * 5;
   PRINTF;
   // printf("sum = %d\n", sum);

   return 0;
}