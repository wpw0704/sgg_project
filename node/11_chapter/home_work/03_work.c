#include <stdio.h>
#include <stdbool.h>
bool is_even(int x){
  return x % 2 == 0 ? true : false;
}
int main()
{
  // 需求,通过函数实现一个数字是不是偶数
  printf("结果:%d\n",is_even(12));

    return 0;
}