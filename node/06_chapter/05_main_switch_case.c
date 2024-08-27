#include <stdio.h>
int main()
{
  // 多向分支语句之switch-case语句
  /*
    switch-case语句:switch关键字,case关键字
    switch-casey语句语法:
    switch(表达式){
      case 值1:语句1;break;
      case 值2:语句2;break;
      case 值3:语句3;break;
      ...
      default:语句5;break;
    }
    switch-case语句执行过程:
      代码执行到switch(表达式)这行的时候,取出表达式的值,和第一个case后面的 值1 比较
      如果表达式的值和值1相同,则执行语句1,遇到break,则跳出整个switch-case语句,
      如果表达式的值和值1不相等,
      则和第二个case 后面的 值2 进行比较,如果相同,则执行语句2,遇到break,则跳出整个switch-case语句,
      如果表达式的值和值2不相等,
      则和第三个case 后面的 值3 进行比较,如果相同则,执行语句3,遇到break,则跳出整个switch-case语句,
      ...
      如果表达式的值和所有case后面的 值n 都不相等,则执行default后面的语句5,遇到break,则跳出整个switch-case语句


    案例:提示用户输入字符,a,b,c,d,e,f,g,则显示对应的星期,否则可以提示输入错误

  */
  char ch; // 定义一个char类型的变量,起名为ch,用来接收用户输入的字母
  printf("请您输入字符:a,b,c,d,e,f,g:\n");
  scanf("%c", &ch); // 从标准输入流中读取用户输入的字符,存储到变量ch中
  switch (ch)
  {
    case 'a': printf("星期一\n");break;
    case 'b': printf("星期二\n");break;
    case 'c': printf("星期三\n");break;
    case 'd': printf("星期四\n");break;
    case 'e': printf("星期五\n");break;
    case 'f': printf("星期六\n");break;
    case 'g': printf("星期日\n");break;
    default:printf("您输入有误\n");break;
  }
  printf("程序结束");

  return 0;
}