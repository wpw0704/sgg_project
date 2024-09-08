#include <stdio.h>
void cook()
{
  printf("洗锅放油\n");
  printf("放菜\n");
  printf("炒菜\n");
  printf("放料\n");
  printf("装盘\n");
  printf("开吃\n");
}
void eat()
{
  printf("有人扶我坐着着\n");
  printf("有人帮我带好餐布\n");
  printf("有人喂我吃\n");
}
void cook1() {}
int main()
{

  printf("123123");
  // 早上饿了
  cook(); // 做饭
  // 吃饭
  eat();

  // 中午饿了
  cook();

  // 晚上饿了
  cook();

  // 半夜饿了
  cook();

  // 你媳妇饿了
  cook();
  return 0;
}