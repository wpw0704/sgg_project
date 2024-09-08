#include <stdio.h>
#include <stdlib.h>
int main()
{
  // 想用函数的方式动态的分配内存空间(向系统申请想要的大小的内存空间)
  // 参数:字节大小
  // 返回值:void*类型的指针
  void *void_ptr = malloc(sizeof(int)); // 4个字节的内存空间
  int *ptr = (int *)void_ptr; // 强转成了int*类型的指针
  // 用之前要判断.指针是否为空
  if(ptr==NULL){
    printf("内存分配失败\n");
  }else{
    *ptr = 100;
    printf("%p,%d\n",ptr,*ptr);
  }
  // 释放内存空间
  free(ptr); // 释放空间中的数据
  ptr = NULL; // 指向为空

  return 0;
}