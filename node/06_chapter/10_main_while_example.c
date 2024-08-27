#include <stdio.h>
int main()
{
  {
    // 循环输出7-15数字

    int i = 7;
    while (i <= 15)
    {
      printf("%d\n", i);
      i++; // 计数器
    }
    printf("i的值为:%d\n", i); // 16
  }
  printf("\n====================\n");

  {
    // 倒序输出数字 53 ~ 48
    int i = 53;
    while (i >= 48)
    {
      printf("%d\n", i);
      i--; // 计数器
    }
    printf("i的值为:%d\n", i);
  }

  printf("\n======================\n");

  {
    // 输出10（包括10）以内所有的偶数
    int i = 0; // 计数器
    while (i <= 10)
    {
      // 判断,当前的这个数字和2取余是否为0
      if (i % 2 == 0)
        printf("%d \n", i);
      i++;
    }
    printf("i的值为%d\n", i);
  }

  printf("\n==================\n");
  {
    // 输出10（包括10）以内所有的偶数
    int i = 0; // 计数器
    while (i <= 10)
    {
      printf("%d \n", i);
      i += 2;
    }
    printf("i的值为%d\n", i);
  }

  // int a = 10;
  // int a = 20;
  // printf("%d \n",a);
  // 变量名不要重复声明(暂且)

  printf("\n====================\n");
  {
    // 计算100以内（包括100）所有数字的和
    // 容器==========存储的数字和
    // 思路:把两个数字的和存储到容器中,下一次,把容器中存储的和取出来和新的数字相加,再次存储都容器中
    int i = 0;   //
    int sum = 0; //  存储和的容器
    while (i <= 100)
    {
      // sum = sum + i;
      sum += i; // 求和
      i++;      // 计数器
    }
    printf("1-100之间所有数字和为:%d,i的值为:%d\n", sum, i);
  }

  printf("\n====================\n");
  {
    // // 求1-10之间所有奇数的成绩
    // int i = 1; // 计数器
    // int result = 1; // 乘积容器
    // while(i<=10){
    //   if(i%2!=0)
    //     result = result * i;
    //   i++; // 计数器
    // }
    // printf("结果为:%d,i的值为:%d\n",result,i);

    // 求1-10之间所有奇数的成绩
    int i = 1;      // 计数器
    int result = 1; // 乘积容器
    while (i <= 10)
    {
      result = result * i;
      i += 2; // 计数器
    }
    printf("结果为:%d,i的值为:%d\n", result, i);
  }
  return 0;
}