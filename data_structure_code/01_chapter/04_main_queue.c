#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 定义一个队列类型的结构体
typedef struct
{
  int *data;       // 指针变量,用来指向某一个块内存空间的内存地址
  size_t length;   // 数据的个数(长度)
  size_t capacity; // 容量
  size_t front;    // 待删除的移动索引
  size_t rear;     // 添加后的移动索引
} Queue;
// 初始化队列的函数
void init_queue(Queue *queue, size_t init_capacity)
{
  // 开辟空间(申请一块空闲的空间),并设置指针变量的指向
  queue->data = (int *)malloc(init_capacity * sizeof(int));
  queue->length = 0;               // 初始化数据的个数
  queue->capacity = init_capacity; // 初始化容量
  queue->front = 0;                // 初始化待删除的移动索引为0
  queue->rear = 0;                 // 初始化添加后的移动索引为0
}
// 释放队列的函数
void destroy_queue(Queue *queue)
{
  free(queue->data);
  queue->data = NULL;  // 重置为空指针
  queue->length = 0;   // 重置数据的个数
  queue->capacity = 0; // 重置容量
  queue->front = 0;    // 重置待删除的移动索引为0
  queue->rear = 0;     // 重置添加后的移动索引为0
}
// 获取长度的函数
size_t get_length(Queue *queue)
{
  return queue->length;
}
// 入队列的函数
void en_queue(Queue *queue, int element)
{
  // 判断长度和容量是否一致,如果一致数据满了,不能再添加了
  if (queue->length == queue->capacity)
    return;
  // 利用添加后的移动索引来入队进行添加数据的操作
  queue->data[queue->rear] = element;
  // queue->rear++; // 坑---会出现越界的问题(不能出现越界的情况)
  queue->rear = (queue->rear + 1) % queue->capacity;
  queue->length++; // 长度加1
}
// 出队列的函数
bool out_queue(Queue *queue, int *del_element)
{
  if (queue->length == 0)
    return false;
  // 利用待删除数据的移动索引,取出要删除的数据
  *del_element = queue->data[queue->front];
  // 立刻移动索引
  queue->front = (queue->front + 1) % queue->capacity;
  queue->length--; // 长度减1
  return true;
}
// 遍历队列的函数
void printf_queue(Queue *queue)
{
  if (queue->length == 0)
    return;
  for (size_t i = 0; i < queue->length; i++)
  {
    size_t index = (queue->front + i) % queue->capacity;
    printf("%d ", queue->data[index]);
  }
  printf("\n");
}
int main()
{
  Queue q;
  // 初始化队列
  init_queue(&q, 6); // 可以存储6个数据
  // 入队
  en_queue(&q, 10);
  en_queue(&q, 20);
  en_queue(&q, 30);
  en_queue(&q, 40);
  en_queue(&q, 50);
  en_queue(&q, 60);

  printf("长度:%zu\n", get_length(&q));
  printf_queue(&q);
  // 出队列
  int del_element;
  out_queue(&q, &del_element);
  printf("出队列的数据:%d\n", del_element);
  printf("长度:%zu\n", get_length(&q));
  printf_queue(&q);
  en_queue(&q, 70);

  out_queue(&q, &del_element);
  printf("出队列的数据:%d\n", del_element);
  printf("长度:%zu\n", get_length(&q));
  printf_queue(&q);
  en_queue(&q, 80);

  out_queue(&q, &del_element);
  printf("出队列的数据:%d\n", del_element);
  printf("长度:%zu\n", get_length(&q));
  printf_queue(&q);
  en_queue(&q, 90);

  out_queue(&q, &del_element);
  printf("出队列的数据:%d\n", del_element);
  printf("长度:%zu\n", get_length(&q));
  printf_queue(&q);
  en_queue(&q, 100);
  printf("长度:%zu\n", get_length(&q));
  printf_queue(&q);
  return 0;
}