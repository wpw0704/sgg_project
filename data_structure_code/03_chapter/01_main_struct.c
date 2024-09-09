#include <stdio.h>
#include <stddef.h>
// 结构体
// 情况1:
// struct Student{
//   int num; // 4
//   double d; // 8
//   char c; // 1
// };
// 情况2:
// struct Student{
//   short s; // 2
//   int num; // 4
//   char c; // 1
// };
// 情况3:
// struct Student
// {
//   short s; // 2
//   char c;  // 1
//   double d; // 8
//   int num; // 4
// };

// struct Student{
//   char c; // 1
//   int n; // 4
//   char c1; // 1
// };
// struct Student{
//   char c; // 1
//   short s; // 2
//   int n; // 4
//   char c1; // 1
//   char c2; // 1
//   double d; // 8
// };

// 如果人为的把字节对齐数改成了4,成员中字节数最大的是8,那么此时按照4的对齐来计算
// 如果人为的把字节对其书改成超过8,比如:16,此时按照8来计算
// 不建议这么做的
// #pragma pack(4)
// struct Student{
//   int num; // 4
//   double d; // 8
//   char c; // 1
// };
// #pragma pack(4)
// struct Student{
//   char c1; // 1
//   short s; // 2
//   char c2; // 1
// };

struct Student1
{
  char c1; // 1
  char c2; // 1
  char c3;
  char c4;
  char c5;
  int n; // 4
};
struct Student2
{
  char c1; // 1
  int n; // 4
  char c2; // 1
};

int main()
{
  // struct Student stu;
  // printf("%d\n", sizeof(stu)); // 13 16 24
  // printf("%zu \n", offsetof(struct Student1, c1));  //
  // printf("%zu \n", offsetof(struct Student1, c2));  //
  // printf("%zu \n", offsetof(struct Student1, c5));  //
  // printf("%zu \n", offsetof(struct Student1, n));   //
  // printf("%zu \n", offsetof(struct Student2, c1));  //
  // printf("%zu \n", offsetof(struct Student2, n));   //
  // printf("%zu \n", offsetof(struct Student2, c2));  //
  // printf("长度为:%zu \n", sizeof(struct Student1)); //
  // printf("长度为:%zu \n", sizeof(struct Student2)); //

  return 0;
}