#include <stdio.h>

// 利用递归方法求5!。
int func(int x)
{
    if (x == 1)
    {
        return x;
    }
    return x * func(x - 1);
}

int main()
{

    printf("%d \n", func(5));
    return 0;
}