#include <stdio.h>
// 99乘法表
int main()
{

    for (int i = 1; i < 10; i++)
    {
            for (int j = 1; j < i+1; j++)
            {
                printf("%d*%d \t",j,i);
            }
        printf(" \n");
    }

    return 0;
}