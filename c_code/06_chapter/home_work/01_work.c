#include <stdio.h>
int main()
{
  //   （1）实现判断一个整数，属于哪个范围：大于0；小于0；等于0。
  // int num = 0;
  // if(num>0)
  //   printf("大于0");
  // else if(num<0)
  //   printf("小于0");
  // else
  //   printf("等于0");

  // （2）判断一个年份是否为闰年。
  // int year = 2023; // 年份
  // if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
  //   printf("是闰年\n");
  // else
  //   printf("不是闰年\n");

  // （3）判断一个整数是否是水仙花数，所谓水仙花数是指一个3位数，其各个位上数字立方和等于其本身，例如：153 = 1*1*1 + 5*5*5 + 3*3*3。

  // for (int i = 100; i < 1000; i++)
  // {
  //   int bai = i / 100;     // 百位数
  //   int shi = i / 10 % 10; // 十位数
  //   int ge = i % 10;       // 个位数
  //   if (bai * bai * bai + shi * shi * shi + ge * ge * ge == i)
  //   {
  //     printf("是水仙花数,值是:%d\n",i);
  //   }
  // }

  // （4）编写程序，根据输入的月份和年份，求出该月的天数（1-12）, 就是需要考虑闰年（2月份 29）和平年（2月份 28）。
  // int year, month; // 年和月
  // printf("请您输入年份:\n");
  // scanf("%d", &year);
  // printf("请您输入月份:\n");
  // scanf("%d", &month);
  // switch (month)
  // {
  // case 1:
  // case 3:
  // case 5:
  // case 7:
  // case 8:
  // case 10:
  // case 12:
  //   printf("%d年%d月有31天\n", year, month);
  //   break;
  // case 4:
  // case 6:
  // case 9:
  // case 11:
  //   printf("%d年%d月有30天\n", year, month);
  //   break;
  // case 2:
  //   if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
  //     printf("%d年%d月有29天\n", year, month);
  //   else
  //     printf("%d年%d月有28天\n", year, month);
  //   break;
  // }

  // （5）输入星期几，如果是星期一到星期三，打印：AAA，星期四到星期五，打印： BBB，星期六到星期日，打印CCC，如果都不是，提示“输入错误”。
  // int num;
  // printf("输入星期几的数字:\n");
  // scanf("%d", &num);
  // switch (num)
  // {
  // case 1:
  // case 2:
  // case 3:
  //   printf("AAA\n");
  //   break;
  // case 4:
  // case 5:
  //   printf("BBB\n");
  //   break;
  // case 6:
  // case 7:
  //   printf("CCC\n");
  //   break;
  // default:
  //   printf("输入错误\n");
  //   break;
  // }

  // （6）请使用for、while、do—while 三种形式打印1000——9999年内所有的闰年。
  // for (int i = 1000; i < 10000; i++)
  //   if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
  //     printf("%d ", i);

  // （7）输出小写的a-z以及大写的Z—A。

  // for (int i = 97; i < 123; i++)
  // {
  //   printf("%c ", i);
  // }
  // printf("\n");
  // for (int i = 90; i >= 65; i--)
  // {
  //   printf("%c ", i);
  // }
  // printf("\n=================\n");
  // （8）求出1-1/2+1/3-1/4…..1/100的和。
  double sum = 0;
  for (int i = 1; i <= 100;i++){
    if(i%2==0)
      sum -= 1.0 / i;
    else
      sum += 1.0 / i;
  }
  printf("%lf\n",sum);

  return 0;
}