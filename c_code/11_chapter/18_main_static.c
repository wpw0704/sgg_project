// #include <stdio.h>

// static int x = 100; // 静态全局变量
// // 静态函数
// // static void show_func(){
// //   int a = 10; // 局部变量
// //   static int b = 100; // 静态局部变量
// // }
// void show_func(){
//   int a = 10; // 局部变量
//   a++;
//   // static int b = 100; // 静态局部变量
//   // b++;
//   // printf("a = %d,b = %d\n",a,b);
//   static int b; // 静态局部变量
//   b++;
//   printf("a = %d,b = %d\n",a,b);
// }
// int main()
// {
//   // 修饰:静态局部变量
//   static int num = 10;
//   show_func();
//   show_func();

//   return 0;
// }


#include <stdio.h>
void fn(void)
{
  int n = 10; // 10
  int a; // 垃圾值
  printf("n = %d,a = %d \n", n, a); // 10 a-垃圾数据
  n++; // 11
  printf("n++ = %d \n", n); // 11
}
void fn_static(void)
{
  static int n = 10; // 静态局部变量,初始化一次, 默认值是10
  static int a; // 静态局部变量,初始化一次,默认值是0
  printf("n = %d,a = %d \n", n, a); // 10  a --0
  n++; // 11
  printf("n++ = %d \n", n);  // 11
}

int main()
{
  int a = 100; // 局部变量
  fn(); // 
  fn_static();
  printf("=========\n");
  fn();
  fn_static();
  return 0;
}
