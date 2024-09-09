#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 定义一个栈类型的结构体
typedef struct
{
  int *data;       // 指针变量指向一块内存空间的地址
  size_t length;   // 数据的个数(长度)
  size_t capacity; // 栈数据结构容量
} Stack;
// 初始化栈内存空间的函数
void init_stack(Stack *stack, size_t init_capacity)
{
  // 开辟内存空间,并设置指针的指向为当前空间的内存地址
  stack->data = (int *)malloc(init_capacity * sizeof(int));
  stack->length = 0;               // 初始化长度为0
  stack->capacity = init_capacity; // 初始化栈中数据的容量
}
// 重新分配内存空间容量的函数
void resize_stack(Stack *stack, size_t new_capacity)
{
  // 重新分配内存空间,并且设置指针的新的指向
  stack->data = (int *)realloc(stack->data, new_capacity * sizeof(int));
  stack->capacity = new_capacity; // 更新容量数据
}
// 释放内存空间的函数
void destroy_stack(Stack *stack)
{
  free(stack->data);   // 释放指针指向的内存空间
  stack->data = NULL;  // 重置指针的指向
  stack->length = 0;   // 重置长度为0
  stack->capacity = 0; // 重置容量为0
}
// 获取长度的函数
size_t get_length(Stack *stack)
{
  return stack->length;
}
// 入栈的函数
void push_stack(Stack *stack, int element)
{
  // 判断长度和容量是否一致
  if (stack->length == stack->capacity)
    resize_stack(stack, stack->capacity * 2); // 重新分配内存空间
  // 压栈,向栈底存入一个数据
  stack->data[stack->length] = element;
  stack->length++; // 长度加1
}
// 出栈的函数
bool pop_stack(Stack *stack, int *del_element)
{
  if (stack->length == 0)
    return false;
  // 把要移除的数据,先存储起来
  *del_element = stack->data[stack->length - 1];
  stack->length--;
  return true;
}
// 遍历栈中所有数据的函数
void printf_stack(Stack *stack)
{
  if (stack->length == 0)
    return;
  for (int i = 0; i < stack->length; i++)
    printf("%d ", stack->data[i]);
  printf("\n");
}
int main()
{

  // 定义一个结构体的变量
  Stack stack;
  // 初始化栈
  init_stack(&stack, 5);
  // 入栈
  push_stack(&stack, 100);
  push_stack(&stack, 200);
  push_stack(&stack, 300);
  push_stack(&stack, 400);
  push_stack(&stack, 500);
  push_stack(&stack, 600);
  push_stack(&stack, 700);
  push_stack(&stack, 800);
  printf("栈中数据长度:%zu\n", get_length(&stack));
  printf_stack(&stack);
  int del_element;
  pop_stack(&stack, &del_element);
  pop_stack(&stack, &del_element);
  pop_stack(&stack, &del_element);
  printf("出栈的数据是:%d\n", del_element);
  printf("栈中数据长度:%zu\n", get_length(&stack));
  printf_stack(&stack);
  // 释放
  destroy_stack(&stack);
  printf("栈中数据长度:%zu\n", get_length(&stack));
  printf_stack(&stack);
  return 0;
}