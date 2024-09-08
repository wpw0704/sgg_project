#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 动态数组，存储连续数据的空间（指向这个内存空间的内存地址的一个指针变量），长度（真实的元素个数），容量（可大可小）

// 定义一个动态数组类型的结构体
typedef struct
{
    int *data;       // 指向一个内存空间地址的指针变量
    size_t length;   // 数组的元素个数，长度，真实的数据个数
    size_t capacity; // 数组的容量
} DynamicArray;

// 初始化数组的函数（指定容量的大小）
void init_dynamic_array(DynamicArray *array, size_t init_capacity)
{
    
    array->data = (int *)malloc(init_capacity * sizeof(int));
    array->length = 0;
    array->capacity = init_capacity;
}
// 重新分配内存空间的函数（扩容）
void resize_dynamic_array(DynamicArray *array, size_t new_capacity)
{
    array->data = (int *)realloc(array->data, new_capacity * sizeof(int));
    array->capacity = new_capacity; // 立刻更新容量数据
}
// 释放数组占用内存空间的函数
void destroy_dynamic_array(DynamicArray *array)
{
    free(array->data);   // 释放动态数组的内存空间
    array->data = NULL;  // 设置指针指向为空指针
    array->length = 0;   // 重置数组的长度
    array->capacity = 0; // 重置数组的容量
}
// 获取数组元素个数的函数（获取长度）
size_t get_length(DynamicArray *array)
{
    return array->length; // 返回数组的长度
}
// 向指索引位置插入一个数据的函数
void insert_at(DynamicArray *array, size_t index, int element)
{
    // 判断索引是否超出范围
    if (index > array->length)
    {
        return;
    }
    // 判断长度和容量是否相同
    if (array->length == array->capacity)
    {
        resize_dynamic_array(array, array->capacity * 2); // 扩容
    }
    // 从当前索引位置index向后一个一个的移动数据
    for (int i = array->length; i > index; i--)
    {
        array->data[i] = array->data[i - 1];
    }
    // 把新的输入存储到当前这个索引位置;
    array->data[index] = element;
    array->length++; // 长度加1
}
// 向数组尾部追加一个数据
void insert_end(DynamicArray *array, int element)
{
    insert_at(array, array->length, element);
}
// 从指定索引位置删除一个数据的函数
bool delete_at(DynamicArray *array, size_t index, int *del_element)
{
    if (index >= array->length)
    {
        return false;
    }
    // 从要删除的索引位置取出要删除的数据，保存起来
    *del_element = array->data[index];
    // 把当前索引位置后面的数据，一个一个的移动前面的一个索引位置
    for (int i = index; i < array->length - 1; i++)
    {
        array->data[i] = array->data[i + 1];
    }
    array->length--; // 长度减一
    return true;
}
// 从数组尾部移除一个数据
bool delete_end(DynamicArray *array, int *del_element)
{
    return delete_at(array, array->length - 1, del_element);
}
// 遍历数组的函数
void printf_array(DynamicArray *array)
{
    // 判断数组中是否有数据
    if (array->length == 0)
    {
        return;
    }
    for (int i = 0; i < array->length; i++)
    {
        printf("%d ", array->data[i]);
    }
    printf(" \n");
}
int main()
{
    DynamicArray array; // 定义了一个结构体变量
    // 初始化一个数组
    // array.data=NULL;
    init_dynamic_array(&array, 5);
    // 向数组中添加数据
    insert_at(&array, 0, 500);
    insert_at(&array, 0, 400);
    insert_at(&array, 0, 300);
    insert_at(&array, 0, 200);
    insert_at(&array, 0, 100);
    printf("长度:%zu\n", get_length(&array)); // 长度
    printf_array(&array);
    // 尾部插入数据
    insert_end(&array, 600);
    insert_end(&array, 700);
    insert_end(&array, 800);
    insert_end(&array, 900);
    printf("长度:%zu\n", get_length(&array)); // 长度
    printf_array(&array);
    // 移除数据
    int del_element;
    delete_at(&array, 3, &del_element);
    printf("移除的数据是:%d\n", del_element);
    printf("长度:%zu\n", get_length(&array)); // 长度
    printf_array(&array);
    // 移除尾部数据
    delete_end(&array, &del_element);
    printf("移除的数据是:%d\n", del_element);
    printf("长度:%zu\n", get_length(&array)); // 长度
    printf_array(&array);
    // 插入一个数据
    insert_at(&array, 10, 1000);
    printf("长度:%zu\n", get_length(&array)); // 长度
    printf_array(&array);
    // 释放
    destroy_dynamic_array(&array);
    printf("长度:%zu\n", get_length(&array)); // 长度
    printf_array(&array);

    return 0;
}