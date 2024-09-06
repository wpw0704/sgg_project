#include <stdio.h>
#define PI 3.14
void show_func(){
  printf("%.2lf\n",PI);
}
// 取消宏定义
#undef PI
// void show_func2(){
//   printf("%.2lf\n",PI);
// }
int main()
{
  show_func();

  return 0;
}
