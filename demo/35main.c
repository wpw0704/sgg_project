#include <stdio.h>
#include <string.h>

// 字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"
char *get_overturn(char *ptr, int len)
{
    char c = ' ';
    for (size_t i = 0; i < len / 2; i++)
    {
        c = ptr[i];
        ptr[i] = ptr[len - 1 - i];
        ptr[len - 1 - i] = c;
        /* code */
    }
    return ptr;
}

int main()
{
    char nums[] = "www.runoob.com";
    int len = strlen(nums);
    char *ptr = get_overturn(nums,len);
    for (size_t i = 0; i < len; i++)
    {
        printf("%c",ptr[i]);
    }
    printf(" \n");
    return 0;
}