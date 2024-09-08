// #include <stdio.h>
// // 写法1:声明函数原型
// int get_sum(int x, int y, int z);
// int main()
// {
//   // （2）定义函数，求出三个int 类型数的和，并返回。
//   printf("和为:%d\n",get_sum(10,20,30));

//   return 0;
// }
// // 函数定义:定义一个函数,函数实现
// int get_sum(int x, int y, int z){
//   return x + y + z;
// }

#include <stdio.h>
// 写法2:声明函数原型,函数定义:定义一个函数,函数实现
int get_sum(int x, int y, int z)
{
  return x + y + z;
}
int main()
{
  // （2）定义函数，求出三个int 类型数的和，并返回。
  printf("和为:%d\n", get_sum(10, 20, 30));

  return 0;
}
