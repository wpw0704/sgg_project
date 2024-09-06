#include <stdio.h>
// 求一个数字的平方
// 通过 宏来实现 
#define SQ(x) (x)*(x)
// 函数来实现
int get_square(int x){
  return x * x;
}

int main()
{
  // 宏实现
  int result2 = SQ(10);
   printf("结果为:%d\n",result2);
  // 函数实现
  int result = get_square(10);
  printf("结果为:%d\n",result);

  return 0;
}