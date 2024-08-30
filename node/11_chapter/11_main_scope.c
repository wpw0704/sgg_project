#include <stdio.h>
int num1 = 100; // 全局变量,使用范围:在整个这个c文件中都可以
void func1()
{
  // 此时num变量的使用范围是在func1函数中,所以这个范围:局部作用域
  int num = 10; // 局部变量,可以在当前的func1函数中使用
  printf("func1函数中:%d", num);
}
void func2(){
  printf("func2中:%d\n",num1);
}

int main()
{
  // func1();
  func2();
  printf("main函数中:%d\n",num1);

  // 作用域:指的是变量/常量的使用范围
  /*
    局部作用域:局部变量的使用范围
    全局作用域:全局变量的使用范围
    块级作用域:大括号中的变量的使用范围
    局部变量:在一个函数中定义的变量
    全局变量:在函数外部定义的变量(main函数外部/顶部)
    大括号中的变量:一对大括号中的定义的变量


  */

  {
    // 此时这个大括号中变量的使用范围:块级作用域
    // int num = 10; // 大括号中定义的变量,使用范围只能在当前的这一对大括号中.
    // printf("%d\n",num);
  }
  //  printf("%d\n",num);



  return 0;
}