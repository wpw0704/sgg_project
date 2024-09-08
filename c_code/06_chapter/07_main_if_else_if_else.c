#include <stdio.h>
int main()
{
  /*
  if语句: 判断条件是否成立,成立则执行if语句对应的大括号中的代码,单向分支
  if(条件表达式){语句1}

  if-else-if语句:判断条件1是否成立,成立则执行if语句对应大括号中的代码,不成立则判断条件2,成立则执行else-if语句对应的大括号中的代码,依次类推
  if(条件表达式1){语句1;}else if(条件表达式2){语句2;}else if(条件表达式3){语句3}

  if-else-if-else语句:条件条件1是否成立,成立则执行if语句对应大括号中的代码,不成立则判断条件2,成立则执行else-if语句对应的大括号中的代码,依次类推,一直比较,如果发现每个else-if语句中的条件都不成立,则执行else语句对应的大括号里面的代码
  if(条件表达式1){语句1;}else if(条件表达式2){语句2;}else if(条件表达式3){语句3}else{语句4}

  switch-case语句:判断表达式的值和case后面的值x是否相等,相等则执行后面的语句,遇到break,跳出,否则继续判断下一个case后的值,如果都不相等,则执行default中的代码
  特殊情况:switch-case语句中的default是可以省略不写的
  switc(表达式){case 值1:语句1;break;case 值2:语句2;break;defule:语句3;break;}

  三元表达式语句:判断表达式1是否成立,成立则执行表达式2,否则执行表达式3
  表达式1?表达式2:表达式3

  对比总结:如果只有一个条件判断,一般使用if语句即可
  如果有两个条件要进行判断,一般使用if-else语句即可或者三元表达式
  如果有三个条件以上的判断,此时推荐使用if-else-if(else)语句或者switch-case语句
  什么情况下使用if-else-if....else语句,什么情况下使用switch-case语句?
  如果是进行范围的判断,一般推荐使用if-else-if相关的语句
  如果是进行具体的值的判断(多个值),一般推荐使用switch-case语句


  所有的分支语句,包括后期的循环语句,如果大括号中的代码,只有一行的情况下,此时大括号可以省略不写
  


  */

 // 请输入一个字符,显示对应的星期
  // char ch;
  // printf("输入一个字符:\n");
  // scanf("%c",&ch);
  // if(ch=='a'){

  // }else if(ch=='b'){

  // }else{

  // }

  // 输入一个分数,显示奖励xxx内容
  int score;
  printf("输入一个分数:\n");
  scanf("%d",&score);
  switch(score/10){
    case 9:printf("奖励一个包子");break;
    case 8:printf("奖励一个包子");break;
  }
  return 0;
}