#include <stdio.h>
// 函数原型:返回值类型 函数名(参数列表);
// 函数原型声明 应该放在前面(main函数前面),不一定是必须的:
// 如果main函数前面已经进行了函数定义,函数可以直接调用
// 如果main函数前面没有进行函数定义,就调用了函数,而函数定义是在main函数的后面,此时需要在main函数前面进行函数原型的声明
// 函数原型声明有两种写法:
// 方式1: 返回值类型 函数名(参数列表);
// 例子: int get_max(int x,int y);
// 方式2：返回值类型 函数名(参数列表类型);
// 例子: int get_max(int,int);
// void func1(int x, ...);
int main()
{

  printf("啊哈哈");
  printf("啊哈哈%d",10);
  printf("%d,%d,%d", 10, 20, 30);
  // func1();

  return 0;
}
