#include <stdio.h>
int main()
{
  // 整数类型:short类型(短整型),int类型(整型),long类型(长整型),long long类型(长长整型)

  // short
  {
    signed short s1 = -20;  // 有符号的短整型
    short s2 = -30;         // 有符号的短整型,signed是可以省略的
    unsigned short s3 = 20; // 无符号的短整型
    printf("有符号的s1的结果是:%hd \n", s1);
    printf("有符号的s2的结果是:%hd \n", s2);
    printf("无符号的s3的结果是:%hu \n", s3);
  }
  printf("\n======================\n");
  // int
  {
    signed int i1 = -10;  // 有符号的整型
    int i2 = -20;         // 有符号的整型,signed可以省略
    unsigned int i3 = 30; // 无符号的整型
    printf("有符号的i1的结果是:%d \n", i1);
    printf("有符号的i2的结果是:%d \n", i2);
    printf("无符号的i3的结果是:%u \n", i3);
  }
  printf("\n======================\n");
  // long
  {
    signed long l1 = -25L;   // 有符号的长整型
    long l2 = -30L;          // 有符号的长整型,signed可以省略
    unsigned long l3 = 40LU; // 无符号的长整型
    printf("有符号的l1的结果是:%ld \n", l1);
    printf("有符号的l2的结果是:%ld \n", l2);
    printf("无符号的l3的结果是:%lu \n", l3);
  }
  printf("\n======================\n");
  // long long
  {
    signed long long ll1 = -50LL;
    long long ll2 = -60LL;
    unsigned long long ll3 = 100LLU;
    printf("有符号的ll1的结果是:%lld \n", ll1);
    printf("有符号的ll2的结果是:%lld \n", ll2);
    printf("无符号的ll3的结果是:%llu \n", ll3);
  }

  return 0;
}