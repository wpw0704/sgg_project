#include <stdio.h>

// 求100之内的素数
size_t i, j;

void get_num(int a)
{

    for (i = 1; i <= a; i++)
    {
        if (i == 1)
        {
            continue;
        }
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            printf("%zu \n", i);
        }
    }
}

int main()
{
    get_num(100);
    return 0;
}