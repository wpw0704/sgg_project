#include <stdio.h>
// 全局变量,全局常量,全局数组
int num = 10; 
const double PI = 3.14;
char chs[] = "hello";
void func1(){
  printf("func1 function...\n");
}

static int num1 = 10; 
static const double PI1 = 3.14;
static char chs1[] = "hello";
static void func2(){
  printf("func1 function...\n");
}