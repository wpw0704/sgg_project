#include <stdio.h>
// 求两个数字中的最大值,使用函数来实现
int get_max(int x, int y)
{
  return x > y ? x : y;
}
// 求两个数字的和,使用函数来实现
int get_sum(int a, int b)
{
  return a + b;
}

// 函数不能嵌套声明
// void show_func1(){
//   printf("show_func1函数");
//   void show_func2(){
//     printf("show_func2函数");
//   }
// }
int main()
{
  // 求最大值
  int n1 = 10, n2 = 20;
  int max1 = get_max(n1, n2);
  int max2 = get_max(100, 200);
  printf("最大值为:%d\n",max1);
  printf("最大值为:%d\n",max2);
  // printf("最大值为:%d\n",get_max(30,40));
  // 求和
  int sum1 = get_sum(10, 20);
  int sum2 = get_sum(100, 200);
  printf("和为:%d\n",sum1);
  printf("和为:%d\n",sum2);


  return 0;
}