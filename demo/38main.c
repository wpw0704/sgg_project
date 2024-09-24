#include <stdio.h>

// 求一个3*3矩阵对角线元素之和


int main()
{
    int nums[3][3] = {0};
    printf("请输入3*3的矩阵 \n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            scanf("%d", &nums[i][j]);
        }
    }

    int sum = 0;
    for (size_t i = 0; i < 3; i++)
    {
        sum += nums[i][i];
    }
    
    printf("%d \n",sum);

    
    return 0;
}