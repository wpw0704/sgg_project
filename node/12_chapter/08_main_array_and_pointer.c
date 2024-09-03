#include <stdio.h>
int main()
{
  {
    // 数组名的理解
     // int nums[] = {10,20,30,40,50};
  // for (int i = 0; i < 5;i++){
  //   printf("索引:%d,元素数据值:%d,内存地址:%p\n",i,nums[i],&nums[i]);
  // }
  // 数组的内存地址可以直接通过数组名来获取,恰巧数组的内存地址和数组中第一个元素的内存地址相同
  // nums 和&nums[0] 地址相同,但是sizeof计算的结果不同,前者计算的是数组的总字节数,后者计算的是内存地址所占的字节数

  // *nums和nums[0] 数据一样
  // printf("数组的内存地址:%p,第一个元素的数据值:%d\n",nums,*nums);

  // printf("数组的总字节数:%zu\n",sizeof(nums)); // 20
  // printf("第一个元素的内存地址的字节大小:%zu\n",sizeof(&nums[0])); // 8
  // // nums++; // 不行
  // // nums--; // 不行
  // int *ptr = &nums[0]; // 指针变量指向了第一个元素的内存地址
  // ptr++;
  // ptr--;
  // &nums[0];
  }

  // 数组名和指针变量之间的区别和关系
  int arr[] = {10,20,30,40,50};
  int *ptr = &arr[0]; // 指针变量ptr指向了数组中第一个元素的内存地址
  // 相等的,结果是:1,数组名中存储的内存地址和第一个元素的内存地址相同
  printf("arr==ptr的结果:%d\n",arr==ptr); 
  // 前者是20,后者是8,数组名遇到sizeof就当成数组来用,计算的是总字节数
  // 指针变量遇到sizeof计算的是该变量中的内存地址所占的字节大小
  printf("数组的总字节数:%zu,指针变量指向的内存地址的字节大小:%zu\n",sizeof(arr),sizeof(ptr));
  // 数组名不能自增和自减,数组的指向不可改变,内存地址的值不能改变,可以加减整数(自身的值不改变)
  // arr++;
  // arr--;
  // arr += 1;
  // arr -= 1;
  // arr + 1;
  // arr此时当成第一个元素的内存地址使用了
  // printf("内存地址:%p,数据值:%d\n",arr+1,*(arr+1)); // 获取的是第二个元素的内存地址和数据值
  // arr = {100,200}; // 不能,

  // 指针变量可以自增和自减,移动指针的指向,改变指针的指向(前后移动),可以加减整数(自身的值可以改变),指针变量的指向是可以改变的
  // ptr++;
  // ptr--;
  // ptr += 1;
  // ptr -= 1;
  // ptr + 1;
  // printf("内存地址:%p,数据值:%d\n",ptr+1,*(ptr+1));

  // int num = 200;
  // ptr = &num;

  return 0;
}