#include <stdio.h>
int main()
{
  // 数组长度:数组中元素的个数

  // 方式1:声明数组的同时,直接使用字面量的方式来设置数组的长度,在编译的时候确定长度为3
  // int arr[3]; // 定义了一个长度为3的数组,但是没有初始化
  // 方式2:使用变量的方式来设定数组的长度,在运行的时候才能确定长度为3
  // int length = 3;
  // int arr[length];

  // 方式3:在运行的时候才能确定长度
  // int length;
  // printf("请输入一个长度数据:\n");
  // scanf("%d",&length);
  // int arr[length];
  // printf("程序结束\n");

  // int length = 3;
  // int arr[length] = {10, 20, 30}; // 不可以的
  // 数组长度是确定之前可变,确定后不可不变

  // 定义一个数组
  // int nums[3] = {10, 20, 30};
  
  // (int[3]){100, 200, 300}; // 字面量数组/常量数组   // 该数组没有名字,没有名字的数组(匿名数组)

  // int nums[3] = {10, 20, 30};
  // printf("%d\n",nums[1]);

  // 能不能 不定义数组,也可以通过索引访问数组中的数据值
  // printf("%d\n",((int[5]){100,200,300,400,500})[1]);
  // printf("%d\n",((int[5]){100,200,300,400,500})[2]);



  return 0;
}