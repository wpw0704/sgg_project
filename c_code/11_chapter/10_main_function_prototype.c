#include <stdio.h>
// 函数原型:指的是函数声明的一种语法形式.
/*
  函数原型书写方式分为三种:
  方式1(常用):返回值类型 函数名(参数列表);
    例子: int get_num(int x,int y);
    简写方式: 返回值类型 函数名(参数列表,但是参数只有类型,没有名字);
          int get_num(int,int);
  方式2:返回值类型 函数名(参数列表){}
    例子: int get_num(int x,int y){函数体代码}
  方式3:返回值类型 函数名(参数1,...);
    例子: int get_num(char *ch,...);

  函数声明分为:函数原型声明和函数定义
  使用函数的思路1:函数声明,函数调用
    例子:
    void func1(){} 函数声明
    int main(){func1();函数调用}
  使用函数的思路2:函数原型声明,调用函数,函数定义
    1.必须要有函数原型声明
    2.函数调用
    3.函数定义
    例子: void func1(int x); 函数原型声明
    int main(){func1();函数调用}
    main函数后面: void func1(int x){函数体代码} 函数定义


    函数原型:返回值类型 函数名(参数列表)
       void func1(int x); // 可以理解为叫:声明函数原型,也可以叫函数原型声明
    函数声明:就是声明一个函数
      void func1(int x){函数体代码}
    函数定义:先有函数原型声明,然后再有函数的实现,函数的实现也叫定义一个函数


*/
// // 函数原型声明
// void func1(int x,int y);
// int main()
// {
//   return 0;
// }
// // 函数定义:定义一个函数,函数的实现
// void func1(int a,int b){
//   printf("%d\n",a+b);
// }

// 声明一个函数,定义一个函数,实现一个函数,函数原型也可以
// void func1(int a,int b){
//   printf("%d\n",a+b);
// }
void func1(int a, int b); // 函数原型声明
int main()
{
  func1(10,20);
  return 0;
}
// 实现一个函数,函数定义,定义一个函数
void func1(int a, int b){

}
