#include <stdio.h>
void show_num(int a){
  if(a>1)
    show_num(a-1);
  printf("%d\n",a); // 输出5
}
void show_num2(int a){
  if(a<5)
    show_num2(a+1);
  printf("%d\n",a); // 1
}
void show_num3(int a){
  if(a<18)
    show_num3(a + 1);
  printf("%d\n",a); // 14
}
int main()
{
  // 正序输出1-5,倒序输出5-1
  // 先挂起的后输出
  show_num(5);
  printf("\n=============\n");
  show_num2(1);

  // 倒序输出18到14
   printf("\n=============\n");
   show_num3(14);

   return 0;
}