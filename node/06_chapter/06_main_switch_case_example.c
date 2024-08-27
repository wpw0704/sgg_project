#include <stdio.h>
int main()
{
  // 编写程序，输入月份，输出该月份有多少天。说明：1月、3月、5月、7月、8月、10月、12月有31天，4月、6月、9月、11月有30天，2月有28 天或 29天

  // int month; // 声明int类型的变量,起名为month,用来存储月份信息
  // printf("请您输入月份:\n"); // 提示用户输入
  // scanf("%d",&month); // 从标准输入流中读取月份信息存储到变量month中
  // // 对month变量中存储的数据值进行判断对比,使用switch-case
  // switch(month){
  //   case 1:printf("%d月份有31天\n",month);break;
  //   case 3:printf("%d月份有31天\n",month);break;
  //   case 5:printf("%d月份有31天\n",month);break;
  //   case 7:printf("%d月份有31天\n",month);break;
  //   case 8:printf("%d月份有31天\n",month);break;
  //   case 10:printf("%d月份有31天\n",month);break;
  //   case 12:printf("%d月份有31天\n",month);break;

  //   case 4:printf("%d月份有30天\n",month);break;
  //   case 6:printf("%d月份有30天\n",month);break;
  //   case 9:printf("%d月份有30天\n",month);break;
  //   case 11:printf("%d月份有30天\n",month);break;

  //   case 2:printf("%d月份有28天或者29天\n",month);break;
  //   default : printf("输入有误\n");break;
  // }
  // printf("程序结束\n");

  // 优化写法:

  int month;                 // 声明int类型的变量,起名为month,用来存储月份信息
  printf("请您输入月份:\n"); // 提示用户输入
  scanf("%d", &month);       // 从标准输入流中读取月份信息存储到变量month中
  // 对month变量中存储的数据值进行判断对比,使用switch-case
  switch (month)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("%d月份有31天\n", month);
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("%d月份有30天\n", month);
    break;
  case 2:
    printf("%d月份有28天或者29天\n", month);
    break;
  default:
    printf("输入有误\n");
    break;
  }
  printf("程序结束\n");
  return 0;
}