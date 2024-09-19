#include <stdio.h>
#include <string.h>

int x = 0;
// 删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。

char *get_a(char *ptr, int len)
{
    static char num[256] = {0};
    char *ptr1 = num;
    char p = 'a';
    for (size_t i = 0; i < len; i++)
    {
        if (ptr[i] != p)
        {
            ptr1[x] = ptr[i];
            x++;
        }
    }
    ptr1[x] = '\0';
    return ptr1;
}

int main()
{
    char c[] = "acaba";
    int len = strlen(c);
    char *ptt = get_a(c, len);
    // printf("%d \n" ,x);
    for (int i = 0; i < x; i++)
    {
        printf("%c \n", ptt[i]);
    }

    return 0;
}