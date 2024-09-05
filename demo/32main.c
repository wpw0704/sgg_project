#include <stdio.h>
#include <strings.h>

// 删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母

char *func(char *ptr, char *ptr1, char c ,int len)
{
    for (int i = 0; i < len; i++)
    {
        if ( ptr[i] == c)
        {
            continue;
        }
        
        
    }
    return ptr1;
    
}

int main()
{
    char c = 'a';
    char num1[] = "aca";
    int len = strlen(num1), p = 0;
    for (int i = 0; i < len; i++)
    {
        if (num1[i] == c)
        {
            p++;
        }
    }
    char num2[len - p +1];
    func(num1,num2,c,len);
    for (int i = 0; i < strlen(num2); i++)
    {
        printf("%c \n",num2[i]);
    }
    
    return 0;
}