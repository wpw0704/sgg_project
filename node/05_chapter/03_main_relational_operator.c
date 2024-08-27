#include <stdio.h>
int main()
{
  // 关系运算符: ==(相等) !=(不等) >(大于) >=(大于等于) <(小于) <=(小于等于)
  int x = 10;
  int y = 5;
  printf("x==y 相等 运算符 的表达式 结果是:%d\n",x==y); // 0
  printf("x!=y 不等 运算符 的表达式 结果是:%d\n",x!=y); // 1 
  printf("x>y 大于 运算符 的表达式 结果是:%d\n",x>y); // 1
  printf("x>=y 大于等于 运算符 的表达式 结果是:%d\n",x>=y); // 1
  printf("x<y 小于 运算符 的表达式 结果是:%d\n",x<y); // 0
  printf("x<=y 小于等于 运算符 的表达式 结果是:%d\n",x<=y); // 0

  return 0;
}