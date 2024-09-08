#include <stdio.h>
// 给我天数,返回桃子个数
int get_peach(int day){
  // 如果是第十天,只有1个
  if(day==10)
    return 1;
  return (get_peach(day + 1) + 1) * 2;
}
int main()
{
  // 有一堆桃子，猴子第一天吃了其中的一半，并多吃一个。以后每天猴子都吃其中的一半，然后再多吃一个。当到第十天时，想再吃时（注意：此时还没吃），发现只有1个桃子了。问：最初共多少个桃子？
  int result = get_peach(1);
  printf("桃子一共%d\n",result);

  return 0;
}