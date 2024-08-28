#include <stdio.h>
// 要求输出国际象棋棋盘  8*8
int main()
{
    int x = 0;
    int y = 1;
    for (int j = 0; j < 8; j++)
    {
        x = 0;
        y = 1;
        if (j % 2 == 0)
        {
            x=1;
            y=0;
        }
        for (int i = 0; i < 4; i++)
        {
            printf("%d\t%d\t", x, y);
        }
        printf(" \n");
    }


    return 0;
}