#include <stdio.h>
int a = 100;
int b = 200;
// void show_func(int a, int b)
// {
//   // a = 300;
//   a += 10;
//   b += 10;
//   printf("a=%d,b=%d\n", a, b); // 110 210
// }
void show_func()
{
  // a = 300;
  a += 10;
  b += 10;
  printf("a=%d,b=%d\n", a, b); // 110 210 
}
int main()
{
  show_func();
  printf("a = %d,b = %d \n", a, b); // 110 210 100 200

  // 局部变量在使用的时候,首先在当前的作用域中找,找到了则使用,如果找不到,则去全局作用域中,找到就用,找不到就报错

  // if(1){
  //   int num = 10;
  // }
  // printf("%d\n",num);
  // 只要不是函数的大括号中定义的变量,其他的语句的大括号中定义的变量,都可以看成是块级变量(使用范围:块级作用域,只能在那一对大括号中使用)


  return 0;
}