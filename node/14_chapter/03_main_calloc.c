#include <stdio.h>
#include <stdlib.h>
int main()
{
  // 利用calloc动态的分配内存空间,存储一个数组的数据,5个数据
  int len = 5;
  // 动态的分配5个连续的内存空间,每个空间的大小是4个字节,ptr指针变量指向该空间
  int *ptr = (int *)calloc(len, sizeof(int));
  printf("内存地址:%p,数据值:%d\n",ptr,*ptr);
  // 判断内存分配是否成功
  if(ptr==NULL){
    printf("内存分配失败了\n");
    return 0;
  }
  for (int i = 0; i < len;i++)
    ptr[i] = i * 10;
  for (int i = 0; i < len;i++){
    printf("索引:%d,元素值:%d,内存地址:%p\n",i,ptr[i],&ptr[i]);
  }

    return 0;
}