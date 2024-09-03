#include <stdio.h>
#include <string.h>
// 指针函数,返回值是一个指针
char * get_long_str(char *str1,char *str2){
  // 计算第一个和第二个字符串的长度,返回最长的那个字符串
  // 返回的是字符指针
  return strlen(str1) > strlen(str2) ? str1 : str2;
}
int main()
{
  // 指针函数:就是一个函数,返回值是一个指针
  // 需求:获取两个字符串中个数最多的字符串(长度最长的字符串)
  char *str1 = "hello";
  char *str2 = "what are you no sha lei";
  char *str3 = get_long_str(str1,str2);
  printf("结果为:%s\n",str3);

  return 0;
}