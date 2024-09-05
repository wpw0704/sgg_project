#include <stdio.h>

// 请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。

int main()
{
    char c;
    printf("请输入星期几的第一个字母： \n");
    scanf("%c", &c);
    if (c == 'T' || c == 'S')
    {

        printf("请输入下一个字母： \n");
        scanf("%c", &c);
        c = getchar();

        if (c == 'u')
        {
            printf("请输入下一个字母： \n");
            scanf("%c", &c);
            c = getchar();

            switch (c)
            {
            case 'e':
                printf("Tuesday \n");
                break;
            case 'a':
                printf("Sunday \n");
                break;
            }
        }
        switch (c)
        {
        case 'h':
            printf("Thursday \n");
            break;
        case 'a':
            printf("Saturday \n");
            break;
        }
    }
    switch (c)
    {
    case 'M':
        printf("Monday \n");
        break;
    case 'W':
        printf("Wednesday \n");
        break;
    case 'F':
        printf("Friday \n");
        break;
    }

    return 0;
}