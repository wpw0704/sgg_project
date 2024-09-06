#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
  // 先动态的分配1块内存空间,50*4个字节的大小
  int *ptr = (int *)malloc(50 * sizeof(int));
  printf("内存地址:%p,字节大小:%zu\n", ptr, _msize(ptr));
  // 重新分配一块内存空间,100*4大小
  int *ptr2 = (int *)realloc(ptr, 1000 * sizeof(int));
  printf("内存地址:%p,字节大小:%zu\n", ptr2, _msize(ptr2));
  // 重新分配一块内存空间,10*4大小
  int *ptr3 = (int *)realloc(ptr2, 10 * sizeof(int));
  printf("内存地址:%p,字节大小:%zu\n", ptr3, _msize(ptr3));

  // 不用这块内存空间,释放
  free(ptr3);
  ptr3 = NULL;

  return 0;
}