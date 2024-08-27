#include <stdio.h>
int main()
{
  // 正常的写法
  // for (int i = 0; i < 5;i++){
  //   printf("%d \n",i);
  // }
  // 第一个表达式可以放在for循环外部声明定义
  // int i = 0;
  // for (; i < 5; i++)
  // {
  //   printf("%d \n", i);
  // }
  // printf("i的值为:%d\n",i);

  // for循环第一个表达式放在for循环外部,第三个表达式放在大括号里面
  // int i = 0;
  // for (; i < 10;)
  // {
  //   printf("%d\n", i);
  //   i++;
  // }
  // printf("i的值为:%d\n", i);

  // for循环使用了多个循环标记变量(计数器,用了多个)
  for (int i = 0, j = 0; i < 3&&j < 5; i++, j++)
  {
    printf("i的值为:%d,j的值为:%d\n", i, j);
  }

  return 0;
}