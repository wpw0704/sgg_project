#include <stdio.h>
#include <string.h>
// 定义一个游客的结构体类型
struct Person
{
  char name[20]; // 名字
  int age;       // 年龄
  double pay;    // 支付
};
// 计算票价金额
void get_money(struct Person *ptr){
  ptr->pay= ptr->age > 18 ? 20 : 0;
}
int main()
{
  // 需求:提示用户输入名字,年龄,回车后,可以查看该游客支付的门票金额,如果输入的是n,则程序结束
  // 定义结构体变量,通过成员存储游客的信息数据
  while (1)
  {
    struct Person per;
    printf("请您输入名字:\n");
    scanf("%s", per.name);
    // 判断名字是不是n
    if (!strcmp(per.name, "n"))
      break;
    printf("请您输入年龄:\n");
    scanf("%d", &per.age);
    // 调用函数,传入年龄,判断年龄是否成年,得到支付的金额
     get_money(&per);
     printf("游客%s,今年%d岁了,需要支付%.2f元钱\n",per.name,per.age,per.pay);
  }
  printf("程序结束\n");
  return 0;
}