#include <stdio.h>
int num = 100; // 全局变量
double d = 23.5; // 全局变量
int arr[3] = {10,20,30}; // 全局数组
const int x = 10; // 全局常量
char chs[] = "hello"; // 全局字符数组/字符串
// 声明一个func1函数
void func1(){
  printf("func1函数中:%d\n",num);
  printf("func1函数中:%.2f\n",d);
  printf("func1函数中:%d\n",x);
  printf("func1函数中:%s\n",chs);

  for (int i = 0; i < 3;i++){
    printf("func1函数中:%d\n",arr[i]);
  }
}
int main()
{
  func1();
  printf("\n==============\n");
  printf("main函数中:%d\n",num);
  printf("main函数中:%.2f\n",d);
  printf("main函数中:%d\n",x);
  printf("main函数中:%s\n",chs);
  for (int i = 0; i < 3;i++){
    printf("main函数中:%d\n",arr[i]);
  }

  return 0;
}