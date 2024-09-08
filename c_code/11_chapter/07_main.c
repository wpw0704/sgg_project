#include <stdio.h>
void show_func()
{
}
// 主函数中有两个参数,
// 参数1: int argc ----数字类型---参数个数
// 参数2: char const *argv[] ----字符串数组
// 主函数不能在其他的函数中调用,主函数中也不能调用主函数自己
int main(int argc, char const *argv[])
{
  // printf("%d\n", argc); // 输出主函数中的第一个参数,参数的个数默认至少是1个
  // // 遍历程序运行的时候传入进来的参数
  // for (int i = 0; i < argc; i++)
  // {
  //   printf("value: %s\n", argv[i]);
  // }

  // int a = 10;
  // if(a){
  //   return 0;
  // }else{
  //   return 1;
  // }
  


  return 0;
}

