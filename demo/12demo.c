// 判断 101 到 200 之间的素数

int main()
{
    int i, j;
    int count = 0;

    for (i = 101; i <= 200; i++)
    {
        for (j = 2; j < i; j++)
        {
            // 如果 j 能被 i 整除再跳出循环
            if (i % j == 0)
                break;
        }
        printf("%d \n",j);
        
    }
    return 0;
}