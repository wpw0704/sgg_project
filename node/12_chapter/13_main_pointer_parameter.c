#include <stdio.h>
void change_num(int x){
  x += 20; // x是30
}
// 指针变量可以作为函数的参数使用
void change_num2(int *ptr){
  *ptr += 20; // ptr指针变量指向的内存地址对应的内存空间中的数据相加赋值20的结果重新的存放到这个空间中,结果为:30
}
int main()
{
  // 把一个数据传给一个函数
  // int num = 10;
  // change_num(num); // 传递的是数据值(值传递/传递值----传递数据值)
  // printf("num的结果:%d\n",num); // 10
  int num = 10; 
  change_num2(&num); // 传递的是内存地址(引用传递/传递引用----传递地址)
  printf("num的结果:%d\n",num);
  // 函数可以修改函数外部的数据(传递内存地址)

  return 0;
}