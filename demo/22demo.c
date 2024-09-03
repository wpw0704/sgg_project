#include <stdio.h>

// 两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。

int main()
{
    char c1[] = "abc", c2[] = "xyz";
    for (int i = 2; i >=0; i--)
    {
        for (int j = 0; j < 3; j++)
        {
            if (c2[j] == 'y')
            {               
                printf("%c--%c \n",c1[i],c2[j]);
                c2[j] = '0';
            }else if (c1[i] == 'b' && c2[j] == 'x' && c2[j] != '0')
            {
                printf("%c--%c \n",c1[i],c2[j]);
                c2[j] = '0';
            }else if (c1[i] == 'a' && c2[j] == 'z'&& c2[j] != '0')
            {
               printf("%c--%c \n",c1[i],c2[j]);
            }
            
        }
        
    }
    
    return 0;
}