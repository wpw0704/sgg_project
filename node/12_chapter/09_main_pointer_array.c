#include <stdio.h>
int main()
{
  // 指针数组:就是一个数组,里面存储的是指针变量
  // 指针数组声明的语法:
  // 数据类型 *数组名[长度]; 该指针数组的类型:数据类型 *[长度]
  // 该指针数组的类型:int *[长度] 或者 int*[]
  // 例子:
  int num1 = 10, num2 = 20, num3 = 30, num4 = 40, num5 = 50;
  // 定义一个指针数组
  // int *ptr_arr[5] = {&num1, &num2, &num3, &num4, &num5};
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  int *ptr3 = &num3;
  int *ptr4 = &num4;
  int *ptr5 = &num5;
  // 定义一个指针数组
  int *ptr_arr[5] = {ptr1, ptr2, ptr3, ptr4, ptr5};
  int len = sizeof(ptr_arr) / sizeof(ptr_arr[0]);
  // printf("数组的总字节数:%zu\n",sizeof(ptr_arr));
  // printf("数组中第一个元素的字节数:%zu\n",sizeof(ptr_arr[0]));
  // printf("长度为:%d\n",len);
  // 遍历指针数组
  for (int i = 0; i < len;i++){
    printf("索引:%d,元素值:%p,数组元素是内存地址,该地址指向的内存空间中的数据是:%d\n",i,ptr_arr[i],*ptr_arr[i]);
  }

    return 0;
}