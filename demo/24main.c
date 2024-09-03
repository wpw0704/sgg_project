#include <stdio.h>

// 有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

int main()
{
    int i, t;
    double sum = 0;
    double a = 2, b = 1;
    for (i = 1; i <= 20; i++)
    {
        sum = sum + a / b;
        t = a;
        a = a + b;
        b = t;
    }
    printf("%lf \n", sum);

    return 0;
}