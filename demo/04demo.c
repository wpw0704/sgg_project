// 输入某年某月某日，判断这一天是这一年的第几天？
// 1 3 5 7 8 10 12
#include <stdio.h>

int main()
{
    int m[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day, i;
    printf("year: \n");
    scanf("%d", &year);
    printf("month: \n");
    scanf("%d", &month);
    printf("day: \n");
    scanf("%d", &day);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("该闰年年份为:%d \n", year);
        i = 1;
    }
    else
    {
        i = 0;
    }

    for (int j = 0; j < month - 1; j++)
    {
        if (i == 1)
        {
            day += 1;
        }

        day += m[j];
    }
    printf("%d \n", day);

    return 0;
}