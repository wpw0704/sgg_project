#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 定义一个节点的结构体类型
typedef struct Node
{
    int data;          // 用来存放数据的变量
    struct Node *next; // 用来指向下一个节点内存地址及的指针变量
} Node;
// 定义一个链表的结构体类型
typedef struct
{
    Node *header;  //-用来指向节点的内存地址的指针变量
    size_t length; // 结点的个数,链表的长度
} LinkedList;

// 初始化链表的函数()
void init_linked_list(LinkedList *list)
{
    list->header = NULL; // 初始化表头中的指针变量是一个空指针
    list->length = 0;    // 初始化链表的长度(节点)
}
// 释放链表的函数(释放链表及内部节点所占用的内存空间)
void destroy_linked_list(LinkedList *list)
{
    // 从链表中取出第一个节点
    Node *current_node = list->header;
    while (current_node != NULL)
    {
        Node *free_node = current_node;
        // 把药释放的当前节点的下一个节点先存储取来
        current_node = current_node->next;
        free(current_node); // 释放当前节点
    }
    list->header = NULL; // 重置表头中指针的指向
    list->length = 0;    // 重置长度
}
// 获取链表长度的函数
size_t get_length(LinkedList *list)
{
    return list->length;
}
// 根据链表的指针变量和索引，找当前索引的前一个节点
Node *get_prev_node(LinkedList *list, size_t index)
{
    // 前一个节点
    Node *prev_node = list->header;
    for (size_t i = 1; i < index; i++)
    {
        prev_node = prev_node->next;
    }
    return prev_node;
}
// 向链表的指定位置插入一个结点的函数
void insert_at(LinkedList *list, size_t index, int element)
{
    // 索引是否超过范围
    if (index > list->length)
    {
        return;
    }

    // 定义节点,动态分配内存空间，设置节点的指针指向一个地址
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = element;
    // 插入一个新节点
    // 判断索引是不是0
    if (index == 0)
    {
        // 把第一个节点的内存地址取出来，给新节点的next指针变量
        new_node->next = list->header;
        // 把新的节点的内存地址给header
        list->header = new_node;
    }
    else
    {
        // 根据当前的索引，找前一个节点
        Node *prev_node = get_prev_node(list, index);
        // 把当前这个索引位置的内存地址取出来，给新的节点的next指针变量
        prev_node->next = new_node;
    }
    list->length++; // 长度加一
}
// 向链表的尾部追加一个结点的函数
void insert_end(LinkedList *list, int element)
{
    insert_at(list, list->length, element);
}
// 从链表的指定位置移除一个结点的函数
bool delete_at(LinkedList *list, size_t index, int *dle_element)
{
    if (index >= list->length)
    {
        return false;
    }
    // 定义一个节点（要删除的节点，取出里面的数据保存起来，外部可以看到）
    Node *del_node = NULL;
    // 判断索引的位置
    if (index == 0)
    {
        // 取出索引为0的节点，先存储起来
        del_node = list->header;
        // 把索引为0的下一个节点的内存地址next给header
        list->header = list->header->next;
    }
    else
    {
        // 先找到要删除的索引位置的前一个节点
        Node *perv_node = get_prev_node(list, index);
        // 取出当前索引位置的节点
        del_node = perv_node->next;
        perv_node->next = perv_node->next->next;
    }
    // 把要删除的节点中的数据取出来，并保存到del_element中
    *dle_element = del_node->data;
    free(del_node); // 释放当前要删除的节点内存空间
    list->length--;
    return true;
}
// 从链表的尾部移除一个结点的函数
bool delete_end(LinkedList *list, int *dle_element)
{
    return delete_at(list, list->length, dle_element);
}
// 获取链表中指定结点位置的数据的函数
void get_value(LinkedList *list, size_t index, int *element)
{
    if (index >= list->length)
    {
        return;
    }
    if (index != 0)
    {
        // 如果索引不是0，则找当前索引位置的前一个节点
        Node *perv_node = get_prev_node(list, index);
        // 通过前一个节点的next，找到了当前节点，再调用data，找到这个节点中的数据
        *element = perv_node->next->data;
        return;
    }
    // 如果索引为0，则直接从表头中找数据即可
    *element = list->header->data;
}
// 修改链表中指定结点位置的数据的函数
void edit_value(LinkedList *list, size_t index, int element)
{
    // 判断索引是否超出范围
    if (index >= list->length)
    {
        return;
    }
    if (index != 0)
    {
        // 先把当前索引位置的前一个节点找到
        Node *perv_node = get_prev_node(list, index);
        // 修改当前节点的数据
        perv_node->next->data = element;
        return;
    }
    // 修改索引为0位置的节点中的数据
    list->header->data = element;
}
// 遍历链表中所有结点的数据的函数
void printf_list(LinkedList *list)
{
    if (list->length == 0)
    {
        return;
    }
    // 从表头中取出第一个节点
    Node *current_node = list->header;
    while (current_node != NULL)
    {
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }

    printf(" \n");
}

int main()
{
    LinkedList list; // 结构体类型的变量
    // 初始化链表
    init_linked_list(&list);
    // 插入一个结点
    insert_at(&list, 0, 100);
    insert_at(&list, 1, 200);
    insert_at(&list, 2, 300);
    insert_at(&list, 3, 400);
    insert_at(&list, 4, 500);
    // 遍历链表
    printf_list(&list);
    printf("链表的长度:%zu\n", get_length(&list));
    insert_end(&list, 600);
    printf_list(&list);
    printf("链表的长度:%zu\n", get_length(&list));
    int del_element;
    delete_at(&list, 2, &del_element);
    printf("移除的节点中的数据:%d\n", del_element);
    printf_list(&list);
    printf("链表的长度:%zu\n", get_length(&list));

    delete_end(&list, &del_element);
    printf("移除的节点中的数据:%d\n", del_element);
    printf_list(&list);
    printf("链表的长度:%zu\n", get_length(&list));

    // 获取索引为3位置的数据
    int element;
    get_value(&list, 3, &element);
    printf("索引为3的位置的节点中的数据:%d\n", element);
    printf_list(&list);
    printf("链表的长度:%zu\n", get_length(&list));

    // 修改索引为3的结点位置的数据
    edit_value(&list, 3, 1000);
    printf_list(&list);

    // 释放链表
    destroy_linked_list(&list);
    printf("呀,遍历数了\n");
    printf_list(&list);
    printf("链表的长度:%zu\n", get_length(&list));
    return 0;
}