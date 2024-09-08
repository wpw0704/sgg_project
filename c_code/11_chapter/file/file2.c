// 两个或者多个.c文件直接使用gcc 文件1 文件2 -o 文件.exe 进行编译,会报错(两个或者多个文件中都是空的)
// 两个或者多个.c文件如果都有主函数main()直接编译也会报错
// 两个或者多个.c文件同时使用命令进行编译,只有一个.c文件有主函数.另一个文件可以是空文件,此时编译成功
// 两个或者多个.c文件同时编译,一个文件中有主函数,一个文件中没有主函数,但是有其他的正确书写的代码,是可以编译成功的
// 两个或者多个.c文件同时编译,使用extern进行外部链接,在当前文件中可以使用其他文件中定义的数据(包括普通的数据和静态的数据).编译是可以通过的,但是当前文件中虽然可以使用extern修改其他文件中的静态数据,但是,该文件中不能使用其他文件中的静态数据


#include <stdio.h>
// 声明外部链接
extern int num;
extern const double PI;
extern char chs[];
extern void func1();

// 声明外部链接
// extern int num1;
// extern const double PI1;
// extern char chs1[];
// extern void func2();
// int num1 = 100;
int main()
{
  printf("num = %d\n", num);
  printf("PI = %.2lf\n", PI);
  printf("chs = %s\n", chs);
  func1();

  // printf("\n=============\n");
  // printf("num1 = %d\n", num1);
  // printf("PI1 = %.2lf\n", PI1);
  // printf("chs1 = %s\n", chs1);
  // func2();

  return 0;
}