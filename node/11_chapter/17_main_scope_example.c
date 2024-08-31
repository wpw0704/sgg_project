// #include <stdio.h>
// int len = 5; // 全局变量
// int arr[5] = {10, 20, 30, 40, 50}; // 全局的数组
// // 函数
// void fn(int num) // num 局部变量
// {
//   int a = 250; // 局部变量
//   printf("%d \n", num + a); // 270 310
// }
// // 主函数
// int main()
// {
//   fn(20);
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d ", arr[i]); // 10 20 30 40 50
//   }
//   printf("\n============\n");
//   fn(60);
//   return 0;
// }


// #include <stdio.h>
// double price = 200.0;
// void test01()
// {
//   printf("%.2f \n", price);
// }
// void test2()
// {
//   price = 250.0;
//   printf("%.2f \n", price);
// }
// int main()
// {
//   printf("%.2f \n", price); // 200.00
//   test01(); // 200.00
//   test2(); // 250.00
//   test01(); // 250.00
//   return 0;
// }


#include <stdio.h>
int a = 10;
void func1()
{
  int a = 20;
  printf("func1 a = %d \n", a);
}
void func2(int a)
{
  printf("func2 a = %d \n", a);
}
void func3()
{
  printf("func3 a = %d \n", a);
}
int main()
{
  int a = 30;
  func1();
  func2(a);
  func3();
  {
    int a = 40;
    printf("block a = %d \n", a);
  }
  printf("main a = %d \n", a);
  return 0;
}
