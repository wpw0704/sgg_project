#include <stdio.h>
int main()
{
  // 乘法口诀表1
  for (int i = 1; i <= 9; i++) // 外层循环控制的行数
  {
    for (int j = 1; j <= i; j++)         // 内层循环控制的列数
      printf("%d*%d=%d\t", j, i, i * j); // 式子
    printf("\n");                        // 换行
  }

  printf("\n=======================\n");
  // 乘法口诀表2
  for (int i = 9; i >= 1; i--) // 外层循环控制的行数
  {
    for (int j = 1; j <= i; j++)         // 内层循环控制的列数
      printf("%d*%d=%d\t", j, i, i * j); // 式子
    printf("\n");                        // 换行
  }

  printf("\n========================\n");
  // 乘法口诀表3
  for (int i = 1; i <= 9; i++) // 外层循环控制的行数
  {
    // 随着行数的增加,水平制表符的个数越来越少
    for (int j = 0; j < 9 - i; j++)
      printf("\t");
    for (int j = 1; j <= i; j++)         // 内层循环控制的列数
      printf("%d*%d=%d\t", j, i, i * j); // 式子
    printf("\n");                        // 换行
  }

  printf("\n========================\n");
  // 乘法口诀表4
  for (int i = 9; i >= 1; i--) // 外层循环控制的行数
  {
    // 随着行数的增加,水平制表符的个数越来越少
    for (int j = 0; j < 9 - i; j++)
      printf("\t");
    for (int j = 1; j <= i; j++)         // 内层循环控制的列数
      printf("%d*%d=%d\t", j, i, i * j); // 式子
    printf("\n");                        // 换行
  }
  return 0;
}