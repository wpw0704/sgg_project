#include <stdio.h>
// 求8的阶乘
int get_factorial_num(int num){
  if(num==1) // 判断最终的数字是1,就停止了
    return 1;
  return num * get_factorial_num(num - 1);
}
int main()
{
  
  // 求8的阶乘
  int result = get_factorial_num(8);
  printf("%d\n",result);

  return 0;
}