#include <stdio.h>
// 古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
int main()
{

    unsigned long long a = 1, b = 1, temp, i;
    printf("%12llu%12llu", a, b); // 输出前两项

    for (i = 3; i <= 40; i++)
    {
        temp = a + b; // 计算下一项
                      // 输出下一项
        printf("%12llu", temp);
        a = b;    // 更新a
        b = temp; // 更新b
    if (i%4 == 0)
    {
        printf(" \n");
    }
    


    }

    return 0;
}
