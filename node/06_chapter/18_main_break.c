#include <stdio.h>
#include <stdbool.h>

int main()
{
  // break:关键字,用来跳出循环,或者是终止switch-case语句的

  // 循环输出0-10之间的数字,但是只能输出0/1/2就结束

  // for (int i = 0; i <= 10;i++){
  //   // 判断i是否为3,如果是,则跳出
  //   if(i==3){
  //     break; // 跳出当前循环
  //   }
  //   printf("%d\n",i);
  // }

  // 编写程序，要求输入一个数字，判断该数字是否是质数。

  // 说明：质数指只能被1和自身整除且大于1的数字

  // int num ; // 用来存储用户输入的数据
  // printf("请您输入一个数字:\n");
  // scanf("%d",&num);
  // bool flag = num >= 1 ? 1 : 0;
  // for (int i = 2; i < num;i++){
  //   if(num%i==0){
  //     flag = 0; // 改变了标识的数据值
  //     break;
  //   }
  // }
  // // 判断
  // if(flag==1)
  //   printf("是一个质数\n");
  // else
  //   printf("不是一个质数\n");

  // 思路2:
  int num; // 用来存储用户输入的数据
  printf("请您输入一个数字:\n");
  scanf("%d", &num);
  bool flag = num >= 1 ? 1 : 0; // 标识,用来控制数字整除的过程中是否能够被整除的一个标识
  for (int i = 2; i <= num/2; i++)
  {
    if (num % i == 0)
    {
      flag = 0; // 改变了标识的数据值
      break;
    }
  }
  // 判断
  if (flag == 1)
    printf("是一个质数\n");
  else
    printf("不是一个质数\n");

  return 0;
}