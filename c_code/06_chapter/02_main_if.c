#include <stdio.h>
int main()
{
  // 单向分支语句:
  /*
    if语句:if关键字
    if语句语法:
    if(条件表达式){
      代码块/语句块;
    }
    if语句的执行过程:
    代码执行到 if(条件表达式) 这行代码,先判断条件表达式的结果是否为真(条件表达式是否成立),如果结果为真,则执行大括号里面的代码块/语句块

    例子:
    提示用户输入年龄,判断该年龄是否大于等于18,则输出,可以看电影了
    提示用户输入年龄,如果成年,则提示可以看电影了
  */

  int age; // 声明一个int类型的变量,起名为age,用来存储用户输入的年龄的
  printf("请您输入年龄:\n");
  scanf("%d", &age); // 从标准输入流中取出用户输入的年龄数据,存储到age变量中
  if (age >= 18) // 判断年龄是否大于等于18岁
  {
    printf("可以看电影了,嘿嘿\n"); // 输出的语句代码
  }
  printf("程序结束\n"); // 提示程序结束

  return 0;
}