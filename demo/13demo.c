#include <stdio.h>

// 打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方

int main()
{
    int i,x,y,z;
    printf("请输入一个三位数： \n");
    scanf("%d", &i);
    x = i/100;
    y = i/10 - x*10;
    z = i - x*100 - y*10;
    if (i == x*x*x + y*y*y + z*z*z)
    {
        printf("该数为水仙花数 \n");
    }
    else 
    {
        printf("该数不是为水仙花数 \n");
    }
    
    return 0;
}