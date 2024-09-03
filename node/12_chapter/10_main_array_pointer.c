#include <stdio.h>
int main()
{
  // 数组指针:就是一个指针,指向的是数组的内存地址
  // 数组指针的声明语法:
  // 数据类型(*数组指针名)[长度]; 类型的是:数据类型(*)[长度]
  // 类型的是:int(*)[5] 或者 int(*)[]

  // 数组
  // int arr[5] = {10,20,30,40,50};
  // 数组指针,就是数组指针变量
  // int(*ptr_arr)[5] = &arr;
  // ptr_arr 和&arr对等关系
  // *ptr_arr   arr 对等关系 =====数据值所在的内存空间的内存地址
  // **ptr_arr  *arr 对等关系=====数据值
  // printf("数组的内存地址:%p\n",&arr);
  // printf("数组指针指向的内存地址(数组指针存储的内存地址):%p\n",ptr_arr);
  // printf("数组中第一个元素数据:%d\n",**ptr_arr); // 第一个元素的数据值

  // int arr[5] = {10, 20, 30, 40, 50};
  // // 数组指针,就是数组指针变量
  // int(*ptr_arr)[5] = &arr;
  // for (int i = 0; i < 5; i++)
  // {
  //   printf("索引:%d,数据值:%d,内存地址:%p\n", i, arr[i], &arr[i]);
  // }
  // printf("\n==================\n");
  // 数组指针自增
  // printf("数组指针指向的内存地址:%p\n", ptr_arr); // 数组的内存地址,可以看成是第一个元素的内存地址
  // ptr_arr++; // 移动了整个数组的总字节数
  // printf("数组指针指向的内存地址:%p\n", ptr_arr); // 数组的总字节数后面的一个

  // 数组指针加1
  // printf("数组指针指向的内存地址:%p\n", ptr_arr);     // 数组的内存地址,可以看成是第一个元素的内存地址
  // printf("数组指针指向的内存地址:%p\n", ptr_arr + 1); // 数组的总字节数后面的一个

  // 数组的内存地址直接加1
  // printf("数组指针指向的内存地址:%p\n", &arr);     // 数组的内存地址,可以看成是第一个元素的内存地址
  // printf("数组指针指向的内存地址:%p\n", &arr + 1); // 数组的总字节

  // int arr[5] = {10, 20, 30, 40, 50};
  // // 数组指针,就是数组指针变量
  // int(*ptr_arr)[5] = &arr;
  // for (int i = 0; i < 5; i++)
  // {
  //   // printf("索引:%d,数据值:%d,内存地址:%p\n", i, arr[i], &arr[i]);
  //   // printf("索引:%d,数据值:%d,内存地址:%p\n", i,*(*ptr_arr+i),(*ptr_arr+i));
  //   printf("索引:%d,数据值:%d,内存地址:%p\n", i,(*ptr_arr)[i],(*ptr_arr)+i);
  //   // printf("索引:%d,数据值:%d,内存地址:%p\n", i,arr[i],arr+i);
  //   // 语法糖

  // }

  int nums[5] = {10,20,30,40,50};
  // 定义一个指针变量,存储数组中第一个元素的内存地址
  int *ptr1 = &nums[0];
  int *ptr2 = nums;  // 数组的内存地址
  int(*ptr3)[5] = &nums; // 数组的内存地址

  // ptr1是普通的指针变量,指向了数组中第一个元素的内存地址
  // ptr2是普通的指针变量,指向了数组内存地址,此时可以看成是数组中第一个元素的内存地址
  // ptr3是数组指针(数组指针变量),指向了数组的内存地址,不能当成数组用,如果想要当成数组用,*ptr3
  // ptr3是可以加减整数,自增和自减,可以相加赋值,或者是相减赋值(+=,-=)但是&nums可以加减整数,也不可以自增和自减,不可以加等于或者减等于
  // ptr1+1,和 ptr2+1 都是向后移动一个单位(4个字节)
  // ptr3+1 是向后移动整个数组的总字节数(1个单位)
  return 0;
}