#include <stdio.h>
int main()
{
  // 算数运算符
  // +(正号) -(负号)
  {
    // int num = -10;
    // int x = -num, y = +num;
    // printf("x = %d,y = %d \n", x, y);

    // int num = +10;
    // int x = -num, y = +num;
    // printf("x = %d,y = %d \n", x, y);
  }

  // +(加号) -(减号) *(乘号) /(除号) %(取余/取模)
  {
    // int x = 10, y = 3;
    // printf("x+y = %d \n",x+y); // 13
    // printf("x-y = %d \n",x-y); // 7
    // printf("x*y = %d \n",x*y); // 30
    // printf("x/y = %.2lf \n",x*1.0/y); // 3
    // printf("x%y = %d \n",x%y); // 1

    // int x = 10,y = 3;
    // double d = x*1.0 / y;
    // printf("%lf\n",d);

    // int x = 10;
    // int y = 3;
    // printf("x%y=%d\n",x%y);
    // 两个操作数进行取余操作,第一个操作数的符号决定着结果的符号
    printf("10%3=%d\n", 10 % 3);     // 1
    printf("-10%3=%d\n", -10 % 3);   // -1
    printf("10%-3=%d\n", 10 % -3);   // 1
    printf("-10%-3=%d\n", -10 % -3); // -1
  }

  return 0;
}