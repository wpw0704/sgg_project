#include <stdio.h>
// 定义一个Box的结构体类型
struct Box
{
  int length; // 长度
  int width;  // 宽度
  int height; // 高度
};
// 获取体积的函数
int get_volume(struct Box *ptr_box){
  return ptr_box->length * ptr_box->width * ptr_box->height;
}
int main()
{
  // 需求:提示用户输入长宽高,通过结构体类型的方式来定义这三个成员,调用一个函数传入结构体指针,可以计算体积
  // 定义结构体变量
  struct Box box;
  printf("请您输入长:\n");
  scanf("%d",&box.length);
  printf("请您输入宽:\n");
  scanf("%d",&box.width);
  printf("请您输入高:\n");
  scanf("%d",&box.height);
  int volume = get_volume(&box); // 调用函数,传入结构体变量的内存地址
  printf("体积为:%d\n",volume);

  return 0;
}