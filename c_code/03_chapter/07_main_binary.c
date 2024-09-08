#include <stdio.h>
int main()
{
  // 进制显示

  {
    int num1 = 0b110;      // 二进制
    int num2 = 101;        // 十进制
    int num3 = 0x3c;       // 十六进制
    printf("%d \n", num1); // 把二进制的数据值以十进制的方式显示   6
    printf("%d \n", num2); // 把十进制的数据值以十进制的方式显示   101
    printf("%d \n", num3); // 把十六进制的数据值以十进制的方式显示
  }
  printf("\n=======================\n");
  {
    int num = 94;
    printf("十六进制的整数值是:%x \n",num);
    printf("带有前缀的十六进制的整数值是:%#x \n",num);
    printf("带有前缀的十六进制的整数值是:%#X \n",num);
  }

  return 0;
}