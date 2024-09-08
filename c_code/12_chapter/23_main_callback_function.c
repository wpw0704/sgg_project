#include <stdio.h>
#include <stdlib.h>
// void func(函数指针){
//   函数指针();
// }
// 改造前的函数
void get_array_rand(int *ptr_arr, int len)
{
  for (int i = 0; i < len; i++)
    ptr_arr[i] = rand() % 100; // 产生随机数
}
// 改造后的函数
void get_array_rand2(int *ptr_arr, int len,int (*ptr)(int),int num)
{
  for (int i = 0; i < len; i++)
    // ptr_arr[i] = rand() % 100; // 产生随机数
    ptr_arr[i] = ptr(num); // 产生随机数
}

void get_array_rand3(int *ptr_arr, int len,int (*ptr)(int))
{
  for (int i = 0; i < len; i++)
    // ptr_arr[i] = rand() % 100; // 产生随机数
    ptr_arr[i] = ptr(ptr_arr[i]); // 产生随机数
}
// 根据传入的数据,产生该数据范围内的一个随机数
int get_rand(int num){
  return rand() % num;
}
// 声明一个函数,数据翻倍
int get_double_num(int num){
  return num * 2;
}
int main()
{
  // 定义一个函数指针
  // int (*ptr)(int) = get_rand;
  // 回调函数:函数作为另一个函数的参数使用,此时这个函数就是回调函数
  // 回调函数:函数A作为另一个函数B的参数使用,此时这个函数A就是回调函数
  // 调用一个函数,产生100以内的随机数,存储到数组中
  // int arr[5];                             // 定义了一个长度为5的数组
  // int len = sizeof(arr) / sizeof(arr[0]); // 数组的长度
  // // get_array_rand(arr, len);
  // get_array_rand2(arr, len, get_rand, 30);
  // for (int i = 0; i < len; i++)
  //   printf("索引:%d,数据值:%d,内存地址:%p\n", i, arr[i], &arr[i]);



   int arr[5]={10,20,30,40,50};     // 定义了一个长度为5的数组
  int len = sizeof(arr) / sizeof(arr[0]); // 数组的长度
  // get_array_rand(arr, len);
  get_array_rand3(arr, len, get_double_num);
  for (int i = 0; i < len; i++)
    printf("索引:%d,数据值:%d,内存地址:%p\n", i, arr[i], &arr[i]);
  return 0;
}