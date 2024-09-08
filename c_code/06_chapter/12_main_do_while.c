#include <stdio.h>
int main()
{
  // do-while循环
  // do-while循环:do关键字,while关键字
  /*
    do-while循环语法:

    int i = 0; // 计算器
    do{
      循环体语句;
      i++;
    }while(循环条件);

    do-while循环执行过程:
    代码先执行到do,然后执行里面的循环体代码,之后执行i++;然后执行循环条件,判断该条件是否成立,如果不成立,则循环结束,如果条件成立,则继续执行循环体,再进行条件的判断,后面的执行过程同上.


    do-while循环例子:


  */

  {
    // （1）输出10次 "我第n天吃了n个韭菜馅的包子"
    // int i = 0; // 计数器
    // do
    // {
    //   printf("第%d天吃了第%d个包子\n", i, i);
    //   i++; // 计数器操作
    // } while (i < 10);
    // printf("i的值为:%d\n",i);

    // （2）循环输出数字7~15
    // int i = 7;
    // do{
    //   printf("%d\n",i);
    //   i++;
    // } while (i<=15);
    // printf("i的值为:%d\n",i);

    // （3）倒序输出数字53 ~ 48

    // int i = 53;
    // do{
    //   printf("%d\n",i);
    //   i--;
    // } while (i>=48);
    // printf("i的值为:%d\n",i);

    // （4）输出10（包括10）以内所有的偶数
    // int i = 0;
    // do{
    //   if(i%2==0)
    //     printf("%d\n",i);
    //   i++;
    // } while (i<=10);

    // （5）计算100以内（包括100）所有数字的和

    // int i = 0;
    // int sum = 0;
    // do{
    //   sum += i;
    //   i++;
    // } while (i<=100);
    // printf("和为:%d,i为:%d\n",sum,i);

    // （6）计算10以内所有奇数的乘积

    // int i = 1;
    // int result = 1;
    // do{
    //   if(i%2!=0)
    //     result *= i;
    //   i++;
    // } while (i<=10);
    // printf("乘积为:%d,i为:%d\n",result,i);

    // 不确定循环:do-while循环
    // 输入密码123,只要密码不对,继续提示输入
    int pwd; // 存储密码
    do
    {
      printf("请您输入密码:\n");
      scanf("%d", &pwd);
    } while (pwd != 123);
    printf("程序结束\n");
  }

  printf("%zu\n",sizeof(long long));


  return 0;
}