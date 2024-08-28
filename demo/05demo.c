// 输入三个整数 x、y、z，请把这三个数由小到大输出。

#include <stdio.h>

int main()
{
    int x, y, z, i;
    printf("输入三个整数: \n");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y)
    {
        i = x;
        x = y;
        y = i;
    }
    if (x > z)
    {
        /*交换x,z的值*/
        i = z;
        z = x;
        x = i;
    }

    if (y > z)
    {
        /*交换z,y的值*/
        i = y;
        y = z;
        z = i;
    }

    printf("从小到大排序: %d %d %d\n", x, y, z);

    return 0;
}