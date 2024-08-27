#include <stdio.h>
int main()
{
  // 需求:提示用户输入两个数字,求和
  int num1, num2; // 声明两个int类型的变量,起名为num1和num2
  printf("请输入第一个数字:\n");
  scanf("%d", &num1);
  printf("请输入第二个数字:\n");
  scanf("%d", &num2);
  int sum = num1 + num2; // 定义变量直接存储两个变量相加的结果
  printf("和为:%d\n", sum);

  return 0;
}