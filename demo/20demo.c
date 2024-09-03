#include <stdio.h>

// 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
long double sum = 100;
long double get_hight(long double n, long double h){
    
    
    if (n == 10)     // 第10次落地      
    {
        return h;
    }
    sum += h;
    return get_hight(n+1, h/2);  // 第n次落地，高度为上一次高度的一半
}

int main()
{
    printf("%Lf \n",get_hight(0,100));
    printf("%Lf \n",sum);
    return 0;
}