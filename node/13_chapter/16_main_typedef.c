#include <stdio.h>
typedef struct
{
  int age;
  char name[20];
} Student;
int main()
{
  // typedef 用来起别名的
  // 定义一个结构体类型的变量
  // struct Student stu;
  // Student stu;

  // 为基本类型起别名
  // 语法: typedef 数据类型名 别名
  // typedef int Integer;
  // Integer num = 10;
  // typedef double dou;
  // dou d = 123.456;
  // typedef long long longl;
  // longl ll = 23;
  // typedef unsigned char Byte;
  // Byte b = 'a';
  // typedef int bool;
  // bool flag = 1;
  // bool flag2 = 0;

  // 变态的写法
  // typedef int chocolate, doughnut, mushroom;

  // // 定义结构体类型的同时直接使用typedef起别名
  // typedef struct {
  // }Teacher; // 这个Teacher就是该结构体的类型的别名
  // // 先定义一个结构体
  // struct Dog{
  // };
  // // 再使用typedef起别名,BigDog就是该结构体类型的别名
  // typedef struct Dog BigDog;

  // char *str = "abcdef";
  // typedef char * String; // 为char * 起别名
  // String str = "lalalal";
  // 为共用体类型起别名
  // typedef union
  // {
  //   char c;
  //   int num;
  // } Data;
  // Data dt = {.c = 'a'};

  // 为指针起别名
  // int num = 10;
  // int *ptr = &num;
  // typedef int *PtrInt; // 为指针起别名
  // PtrInt ptr2 = &num;

  // int nums[3] = {10,20,30}; // nums数组名 的类型 int[3]
  // typedef int Array[5]; // 为数组起别名
  // // 定义一个int类型的数组
  // Array arr = {10,20,30,40,50};

  // 定义一个数组指针
  // int nums[3] = {10,20,30};
  // // 定义一个数组指针,指向该数组的内存地址
  // int(*ptr)[3] = &nums;
  // typedef int(*PtrArray)[3]; // 为数组指针类型起别名
  // PtrArray ptr2 = &nums;

  return 0;
}