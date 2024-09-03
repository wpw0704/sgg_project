#include <stdio.h>
// 参数是:行数
void show_star(int rows)
{
  // rows ---行
  for (int i = 1; i <= rows; i++) // 行
  {
    for (int j = 1; j <= rows - i; j++)
      printf(" ");
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      // 判断,如果是第一列或者最后一列,或者最后一行则显示星星,否则显示空格
      if (j == 1||j==2*i-1||i==rows)
        printf("*");
      else
        printf(" ");
    }

    printf("\n");
  }
}
int main()
{
  // （4）函数实现实心三角形
  show_star(5); // 5行实心星星

  return 0;
}