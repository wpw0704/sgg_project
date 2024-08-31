#include <stdio.h>
void show_star(int rows)
{
  // rows ---行
  for (int i = 1; i <= rows; i++) // 行
  {
    for (int j = 1; j <= rows - i; j++)
      printf(" ");
    for (int j = 1; j <= 2 * i - 1; j++) // 列
      printf("*");
    printf("\n");
  }
}
int main()
{
  // （4）函数实现实心三角形
  show_star(9); // 5行实心星星

  return 0;
}