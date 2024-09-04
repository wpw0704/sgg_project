#include <stdio.h>
// 定义共用体类型
union Data{
  short s;
  int n;
  char c;
};

int main()
{
  // 定义共用体变量
  // union Data dt1;
  // // printf("%d\n",sizeof(dt1)); // 字节数:4个
  // // 为共用体变量赋值,方式1:使用"."成员的方式来赋值
  // dt1.s = 10;
  // dt1.n = 20;
  // // 但是同一时间只能取到一个属性。最后赋值的属性，就是可以取到值的那个属性。
  // printf("%d\n",dt1.c);

  // 为共用体变量赋值,方式2:使用{.成员名=值}的方式为成员来赋值
  // union Data dt1 = {.c='a',.n=100};
  // union Data dt1 = {.n='N'};
  // printf("%c\n",dt1.n);

  // 为共用体变量赋值,方式3:使用{}的方式为成员来赋值
  union Data dt1 = {100};
  


  return 0;
}