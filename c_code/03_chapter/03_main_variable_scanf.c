#include <stdio.h>

int main(){
  // int num = 10;
  // printf("num的值是:%d \n",num);
  // 需求:提示用户输入一个数据,并且输出出来
  // int num; // 声明一个int类型的变量,起名为num
  // printf("请您输入一个整数:\n");
  // // 用来获取用户输入的内容(从标准的输入流中读取出用户输入的数据值,存储到num变量中)
  // scanf("%d",&num); // %d表示占位,&--取地址符号
  // printf("您刚刚输入的是:%d",num);


  // 需求2:提示用户输入多个数字
  // int a, b, c;
  // printf("请您输入3个数字(用空格隔开):\n");
  // scanf("%d %d %d",&a,&b,&c);
  // printf("您输入的数据分别是:%d,%d,%d \n",a,b,c);

   int a, b, c;
  printf("请您输入3个数字(用逗号隔开):\n");
  scanf("%d,%d,%d",&a,&b,&c);
  printf("您输入的数据分别是:%d,%d,%d \n",a,b,c);


  return 0;
}