// 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include <stdio.h>

/**
 *  1<i<168/2 + 1
 *  i 和 j 都是大于等2 的偶数
 * i*j = 168
 *
 */
int main()
{
    for (int i = 1; i < 168 / 2 + 1; i++)
    {
        if (168 % i == 0)
        {
            int j = 168 / i;
            if (i % 2 == 0 && j % 2 == 0 && i > j)
            {
                int n = (i - j) / 2;
                int m = (i + j) / 2;
                int x = n * n - 100;
                printf("%d + 100 = %d * %d\n", x, n, n);
                printf("%d + 268 = %d * %d\n", x, m, m);
            }
        }
    }

    return 0;
}