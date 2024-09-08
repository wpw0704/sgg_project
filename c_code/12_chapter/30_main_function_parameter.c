#include <stdio.h>
void show_func(void (*ptr_msg)(char *),char *msg){
  printf("今天早上\n");
  // 随便输出一句话
  ptr_msg(msg);
  printf("今天晚上\n");
}
void show_msg(char * msg){
  printf("%s\n",msg);
}
int main()
{
  show_func(show_msg,"今天是下雨的");

  return 0;
}