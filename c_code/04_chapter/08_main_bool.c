#include <stdio.h>
#include <stdbool.h> // 引入系统的头文件(库文件)
int main()
{
  // 定义布尔类型的变量,并赋值
  bool flag1 = true;
  bool flag2 = false;

  if(flag1){
    printf("flag1 为真");
  }
  if(flag2){
    printf("flag2 为真");
  }

  return 0;
}