#include <stdio.h>
void func(int x){
  x = 100;
  printf("结果:%d\n",x+10);
}
// 数组的长度计算
void show_arr(int arr[],int len){
  // printf("第一个元素的字节数:%d\n",sizeof(arr[0])); // 4
  // printf("数组的总字节数:%d\n",sizeof(arr)); // 计算的不是数组的总字节数,而是这个数组的内存空间的地址的字节数
  // int len = sizeof(arr) / sizeof(arr[0]); // 计算数组的长度
  // printf("数组的长度:%d\n",len); // 不是的 // 2
  printf("长度为:%d\n",len);
}
int main()
{
  // 局部变量声明,没有初始化,都是垃圾值
  int num = 10; // 局部变量
  func(num); // 
  printf("%d\n",num); // 10

  int arr[] = {10,20,30}; // 长度是3
  int len = sizeof(arr) / sizeof(arr[0]);
  show_arr(arr,len); // 传过去了一个数组

  // 切记:数组作为函数的参数进行传递的时候,该函数内部是无法正确计算数组的长度的,可以把长度也一起传入到函数中

  return 0;
}