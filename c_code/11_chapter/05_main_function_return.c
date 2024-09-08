#include <stdio.h>
int get_num(){
  return 10;
}
void show_func1(){
  printf("今天天气格外好\n");
  printf("龙哥来到桃花岛\n");
  printf("看见海哥在洗澡...\n");
  return ;
  // printf("啦啦啦啦...鼓楼鼓楼~");
}
int main()
{
  show_func1();
  // int num = get_num();
  // printf("结果是:%d",num);
  /*
  返回值:一个函数中有明确的数据需要返回,此时该函数要有返回值的类型以及函数内部要使用return关键字对数据进行返回

  如果一个函数有返回值,那么函数中必须要有return,return后面必须要有明确的数据
  如果一个函数没有返回值,那么函数中就没有return,或者return后面没有明确的返回值数据
  如果一个函数中有return,那么函数在执行的过程中(调用函数的时候,函数体代码在执行的时候),如果遇到了return,那么执行该语句后,此时函数调用结束,如果后面有代码则不执行




  
  */
  
  return 0;
}