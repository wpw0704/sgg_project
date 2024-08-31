#include <stdio.h>
#include <string.h>

int main()
{
  // 定义两个字符数组----字符串
  // char chs1[] = "abcd";
  // char chs2[10] = "def";
  // printf("chs1字符串的长度为:%zu\n", strlen(chs1)); // 字符串的个数
  // printf("chs2字符串的长度为:%zu\n", strlen(chs2)); // 字符串的个数
  // // strlen()函数:参数1个,可以传入字符数组,也可以传入字符串,返回值是该字符串的个数(字符串的长度,也可以理解为是字符数组的长度,不包含\0),得到的是实际的个数
  // // 今后如果想要遍历一个字符数组或者是字符串,可以通过strlen()这个函数获取实际的字符个数,通过循环的方式来进行遍历
  // printf("chs1字符数组的字节数:%zu\n", sizeof(chs1)); // 5  字节数
  // printf("chs2字符数组的字节数:%zu\n", sizeof(chs2)); // 10 字节数

  // printf("\n==============\n");
  // // strcpy()函数把第二个参数中的数据复制到了第一个参数中,用来复制字符串的
  // strcpy(chs1, "world");
  // printf("%s\n", chs1);

  // printf("\n==============\n");
  // strcat()函数:拼接字符串的,把参数2中的字符串追加到参数1的字符串的后面
  // char chs1[] = "abcd";
  // char chs2[10] = "def";
  // strcat(chs1, chs2);
  // printf("chs1 = %s \n", chs1); // 变化了
  // printf("chs2 = %s \n", chs2); // 没有变化

  return 0;
}