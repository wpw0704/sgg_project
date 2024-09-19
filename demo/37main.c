#include <stdio.h>

// 对10个数进行排序。
void get_exchange(int *a, int *b)
{
    int ptr = *a;
    *a = *b;
    *b = ptr;
}

int *get_exchange_arr(int *ptr, int len)
{
    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = 0; j < len - i - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                get_exchange(&ptr[j], &ptr[j + 1]);
            }
        }
    }

    return ptr;
}
int main()
{
    // int x = 1, y = 2;
    // get_exchange(&x, &y);
    // printf("%d,%d \n", x, y);
    int nums[] = {1, 3, 4, 2, 5, 6, 9, 7, 0, 8};
    int len = sizeof(nums) / sizeof(int);

    int *ptr = get_exchange_arr(nums, len);

    for (size_t i = 0; i < len; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}