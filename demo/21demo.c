#include <stdio.h>

// 猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个 第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下 的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。

int get_taozi(int day, int x)
{
    if (day == 1)
    {
        return x;
    }
    return get_taozi(day - 1, 2*(x+1));
}
int main()
{
    printf("%d \n", get_taozi(10, 1));
    return 0;
}