#include <stdio.h>
int main()
{
  // sizeof关键字,用来计算数据类型,变量,字面量值的字节数
  // 返回值的类型的是size_t类型,使用的占位符是:%zu
  // sizeof关键字的使用语法:
  // 写法1:
  // sizeof 变量名
  // sizeof 字面量值
  // 写法2:
  // sizeof(数据类型名)
  // sizeof(变量名)
  // sizeof(字面量值)
  // 使用sizeof计算数据类型所占的字节数
  printf("char类型所占的字节数:%zu\n",sizeof(char)); // 1个字节
  printf("short类型所占的字节数:%zu\n",sizeof(short)); // 2
  printf("int类型所占的字节数:%zu\n",sizeof(int)); // 4
  printf("long类型所占的字节数:%zu\n",sizeof(long)); // 4
  printf("long long类型所占的字节数:%zu\n",sizeof(long long)); // 8
  printf("float类型所占的字节数:%zu\n",sizeof(float)); // 4
  printf("double类型所占的字节数:%zu\n",sizeof(double)); // 8
  printf("long double类型所占的字节数:%zu\n",sizeof(long double)); // 16

  printf("\n======================\n");
  // sizeof计算变量所占的字节数
  char ch = 'A'; // 字符类型的变量
  short s = 23;
  int num = 10;
  float f = 12.5f;
  double d = 23.9;
  printf("ch变量所占的字节数:%zu\n",sizeof(ch)); // 1
  printf("s变量所占的字节数:%zu\n",sizeof s); // 2
  printf("num变量所占的字节数:%zu\n",sizeof num); // 4
  printf("f变量所占的字节数:%zu\n",sizeof f); // 4
  printf("d变量所占的字节数:%zu\n",sizeof d); // 8

 printf("\n======================\n");
  // 使用sizeof计算字面量值所占的字节数
  printf("'A'的字节数:%zu\n",sizeof('A')); // 4 ----字符字面量的值(字符常量值) 所占的字节数是4个
  printf("10的字节数:%zu\n",sizeof 10); // 4
  printf("10.5f的字节数:%zu\n",sizeof 10.5f); // 4
  printf("10.9的字节数:%zu\n",sizeof 10.9); // 8

  return 0;
}