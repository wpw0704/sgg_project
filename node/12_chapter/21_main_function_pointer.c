#include <stdio.h>
// 求和
int get_sum(int x,int y){
  return x + y;
}
// 求差
int get_sub(int x,int y){
  return x - y;
}
// 求最大值
int get_max(int x,int y){
  return x > y ? x : y;
}

int main()
{
  // 定义一个函数指针,指向对应的函数内存地址
  // 返回值类型 (*函数指针变量名)(参数列表);
  // int (*ptr_func)(int a, int b);
  // ptr_func = get_sum; // 指向求和的函数的内存地址
  // printf("和为:%d\n",ptr_func(10, 20));
  // ptr_func = get_sub; // 指向求差的函数的内存地址
  // printf("差为:%d\n",ptr_func(10, 20));
  // ptr_func = get_max;
  // printf("最大值:%d\n",ptr_func(10, 20));

  // 声明一个函数指针,声明函数指针的时候,参数列表中的变量名可以省略
  int (*ptr_func)(int, int); // ptr_func是函数指针变量,类型:int (*)(int, int)
  ptr_func = get_sum; // 指向求和的函数的内存地址
  printf("和为:%d\n",ptr_func(10, 20));
  ptr_func = get_sub; // 指向求差的函数的内存地址
  printf("差为:%d\n",ptr_func(10, 20));
  ptr_func = get_max;
  printf("最大值:%d\n",ptr_func(10, 20));

  return 0;
}