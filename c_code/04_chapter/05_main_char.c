#include <stdio.h>
int main()
{
  // 字符类型:一个字母,一个数字,一个符号,如果使用单引号括起来,那么就是字符类型的数据了
  // 10 数字---数字类型的字面量(整数)
  // 67.8 数字---数字类型的字面量(小数)
  // 'a' 字符----字符类型的字面
  // printf("===============\n");
  // printf("\t==============\n");
  // printf("===============\n");
  // 字符类型的数据需要使用单引号括起来,可以使用%c和%d进行展示,能够使用%d展示,是因为每个字符都可以找到ASCII码表中对应的十进制数据,所以,字符类型的本质是整数类型
  // char ch1 = 'A';
  // char ch2 = '9';
  // char ch3 = '\t';
  // printf("ch1=%c,ch2=%c,ch3=%c======\n",ch1,ch2,ch3);
  // printf("ch1=%d,ch2=%d,ch3=%d======\n",ch1,ch2,ch3);

  // char ch4 = 'A';
  // char ch5 = 9; // char的本质是整数
  // printf("ch4=%c,ch5=%c=====\n", ch4, ch5);
  // printf("ch4=%d,ch5=%d\n", ch4, ch5);

  // printf("相加结果:%c,%d", ch4 + ch5, ch4 + ch5);
  // 总结: 字符类型的数据是可以进行相加的(不要超范围)

  signed char ch6 = 200; // 有符号的    范围-128到127
  unsigned char ch7 = 200; // 无符号的   范围:0-255
  printf("%d\n",ch6);
  printf("%d\n",ch7);

  return 0;
}