#include <stdio.h>
int main()
{
  {
    float f1 = 0.12345f; // 有效小数6位
    float f2 = 3.11592f; // 有效小数6位
    float f3 = -2e12f;
    float f4 = 1.9823e2f;
    printf("f1=%.2f,f2=%f,f3=%f,f4=%f\n", f1, f2, f3, f4); // 普通的小数表示形式
    printf("f1=%e,f2=%e,f3=%e,f4=%e\n", f1, f2, f3, f4);   // 科学计数法的表示形式
  }
  printf("\n=========================\n");
  {
    double d1 = 3.1415926;
    double d2 = 0.123456;
    double d3 = -2e12f;
    double d4 = 1.9823e2;
    printf("d1=%.9lf,d2=%.3lf,d3=%lf,d4=%lf\n",d1,d2,d3,d4);
    printf("d1=%.2e,d2=%e,d3=%e,d4=%e\n",d1,d2,d3,d4);
  }

  return 0;
}