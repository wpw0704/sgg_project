#include <stdio.h>
int main()
{
  // 提示输入字符串,并输出
  char str[100];
  printf("请您输入一个字符串:\n");
  char *ptr_str = gets(str); // 从标准输入流中读取输入的字符串信息,存储到str中
  int num = puts(str);  // 输出一个字符串
  printf("\n===========\n");
  printf("%s\n",ptr_str);
  printf("%d\n",num); // 0

  return 0;
}