#include <stdio.h>
#include <stdint.h>

int main()
{
  int32_t x32 = 35;
  printf("%d \n",x32);
  // sizeof是用来计算字节数大小的
  printf("x32变量的类型占的字节数:%lld\n",sizeof(x32));

  return 0;
}