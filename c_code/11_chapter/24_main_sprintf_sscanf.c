#include <stdio.h>
int main()
{
  // char name[] = "小甜甜5"; // 名字
  // int age = 28; // 年龄
  // double score = 93.8; // 成绩
  // char input_string[100]; // 长度为100的字符数组
  // // sprintf()函数,可以把指定的格式化字符串动态数据写入到某个字符数组中(字符串变量中)
  // sprintf(input_string, "名字是:%s,年龄是:%d,成绩是:%.2lf", name, age, score);
  // printf("%s\n",input_string);

  printf("\n==================\n");
  char output_string[] = "年龄是:23,成绩是:25.8,名字是:大甜甜";
  int age; // 用来存储提取的年龄
  double score; // 用来存储提取的成绩的
  char name[20]; // 用来存储提取的姓名的
  sscanf(output_string,"年龄是:%d,成绩是:%lf,名字是:%s",&age,&score,name);
  printf("name = %s\n",name);
  printf("age = %d\n",age);
  printf("score = %lf\n",score);

  return 0;
}