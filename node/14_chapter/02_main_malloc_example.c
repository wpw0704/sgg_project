#include <stdio.h>
#include <stdlib.h>
int main()
{
  // 需求:动态的分配一块内存,存储多个数据(5个数据)
  // void *ptr = malloc(20);
  int len = 5; // 存储5个数据
  // 向系统动态的申请20个字节大小的内存空间,并且转成int*类型的指针,该指针变量指向这块内存空间
  int *ptr = (int *)malloc(len * sizeof(int));
  // 判断,动态内存空间是否申请成功
  if (ptr == NULL)
  {
    printf("申请内存空间失败\n");
    return 0;
  }
  printf("%p\n",ptr);
  // 先存储数据,然后移动指针变量的指向
  for (int i = 0; i < len; i++)
    // *(ptr + i) = i * 10;
    ptr[i] = i * 10;
  for (int i = 0; i < len; i++)
    printf("索引:%d,数据值:%d,内存地址:%p\n", i, *(ptr + i), ptr + i);
  return 0;
}