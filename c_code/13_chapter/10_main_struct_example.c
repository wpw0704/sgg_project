#include <stdio.h>
// 定义一个狗狗的结构体类型
struct Dog{
  char *name; // 名字
  int age; // 年龄
  double weight; // 体重
};
// 传入结构体变量,汇总信息数据
char * get_dog_info(struct Dog dog){
  static char info[100];
  sprintf(info, "狗狗叫:%s,年龄是%d岁了,体重是%.2lfkg", dog.name, dog.age, dog.weight);
  return info;
}
int main()
{
  // 定义一个Dog结构体类型,存储一些小狗狗的信息数据,调用一个函数,传入结构体变量,返回一个字符串的狗狗信息
  // 定义结构体类型变量
  struct Dog dog;
  // 为成员赋值
  dog.name = "大黄";
  dog.age = 5; // 年龄
  dog.weight = 50.5;  // 体重
  char *info= get_dog_info(dog);
  printf("%s\n",info);

  return 0;
}