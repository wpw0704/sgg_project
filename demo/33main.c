#include <stdio.h>
#include <stdbool.h>

// 判断一个数字是否为质数。
bool get_num(int a){
    if (a == 1 || a == 0)
    {
        return false;
    }
    for (size_t i = 2; i < a; i++)
    {
        if (a % i== 0)
        {
            return false;
        }
        
    }
    return true;
    
}

int main()
{
    printf("%d \n",get_num(2));
    return 0;
}