#include <stdio.h>

// 将一个正整数分解质因数。例如：输入 90,打印出 90=2*3*3*5

int main()
{
    int n, i;
    printf("请输入一个数： \n");
    scanf("%d", &n);
    for (;;)
    {
        for ( i = 2; i <= n; i++)
        {
            
            if (n % i == 0)
            {
                printf("%d*", i);
                break;
            }
            else
            {
                continue;
            }
        }
        if (n == i)
        {
            break;
        }
        n = n / i;
    }

    return 0;
}