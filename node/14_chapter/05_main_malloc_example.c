#include <stdio.h>
#include <stdlib.h>


// 输出成绩小于60分的
void show_score(double *ptr1){
  for (int i = 0; i < 5;i++)
    if(*(ptr1+i)<60)
      printf("成绩为:%.2lf\n",*(ptr1+i));
}
int main()
{
  // 动态创建数组，输入5个学生的成绩，再定义一个函数检测成绩低于60分的，输出不合格的成绩。
  // 动态的分配内存空间
  double *ptr = (double *)malloc(5 * sizeof(double));
  // 判断内存分配是否成功
  if(ptr==NULL){
    printf("内存分配失败了\n");
    return 0;
  }
  for (int i = 0; i < 5;i++){
    printf("请您输入第%d个学生的成绩:\n",i+1);
    scanf("%lf",ptr+i);
  }
  // 数据已经录入完毕了
  show_score(ptr);

  return 0;
}