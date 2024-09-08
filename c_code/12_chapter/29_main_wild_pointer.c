#include <stdio.h>

int * get_num(){
  int num = 100;
  return &num;
}
int main()
{
  // 野指针:当一个指针变量声明了,没有赋值,此时是一个野指针(不受控制的内存地址)

  // 1. 声明指针变量,没有赋值,野指针
  // int num = 10;
  // int *ptr; // 野指针
  // *ptr = 100;
  // printf("%p,%d\n",ptr,*ptr);
  // 2.数组越界的内存地址
  // int nums[] = {10,20,30};
  // int *ptr = nums;
  // ptr += 3; // 野指针，数组越界的内存地址
  // printf("%d,%p\n",*ptr,ptr);
  // for (int i = 0; i < 3;i++){
  //   printf("索引:%d,数据值:%d,内存地址:%p\n",i,nums[i],&nums[i]);
  // }
  // 3. 指针变量指向了已经释放的内存地址
  // int *ptr = get_num(); // 野指针
  // printf("%p,%d\n",ptr,*ptr);

  // 野指针:比如,指针变量声明了没有赋值,或者指向了数组越界的内存地址,指向了已经释放的内存地址,不要使用野指针,因为不受控制,也有可能会报错(报异常了)
  // 避免使用野指针:
  // 声明指针变量的时候要赋初值
  // 指针变量不要指向一个越界的内存地址
  // 指向变量不要指向一个销毁的内存地址

  // int *ptr;
  // if(ptr!=NULL)

  return 0;
}