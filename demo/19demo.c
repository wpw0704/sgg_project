#include <stdio.h>

// 一个数如果恰好等于它的因子之和，这个数就称为"完数"，例如 6=1＋2＋3 ，请编程找出 1000 以内的所有完数。

int main()
{
    int sum, i, j;
    for (i = 1; i <= 1000; i++)
    {
        if (i == 1)
        {
            printf("%d \n", i);
        }

        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}