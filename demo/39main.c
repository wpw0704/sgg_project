#include <stdio.h>

// 有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

int main()
{
    int a;
    int nums[4] ={1,2,3,5};
    int len = sizeof(nums) / sizeof(int);
    printf("请输入一个数： \n"); 
    scanf("%d", &a);
    int nums1[len+1] = {0};
    for (size_t i = 0; i < len+1; i++)
    {
        
        if (nums[i] < a)
        {
            nums1[i] = nums[i];
        }else 
        {
            nums1[i] = a;
        }
        
    }
    
    return 0;
}