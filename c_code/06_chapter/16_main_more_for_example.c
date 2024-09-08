#include <stdio.h>
int main()
{
  // 提示用户输入行数和列数
  int rows; // 行数
  int cols; // 列数
  printf("请您输入行数:\n");
  scanf("%d",&rows);
  printf("请您输入列数:\n");
  scanf("%d",&cols);
  // 行数控制外层循环的次数----3
  for (int i = 0; i < rows;i++){
    // 列数控制内层循环的次数---2
    for (int j = 0; j < cols;j++){
      printf("[%d,%d] \t",i,j);
    }
    printf("\n");
  }

    return 0;
}