#include <stdio.h>
int main()
{
  // 打开一个文件
  FILE *file = fopen("file3.txt","r");
  // 判断打开是否成功
  if(file==NULL){
    printf("文件打开失败了\n");
    return 1;
  }
  int age;
  char name[20];
  int result = fscanf(file, "%d岁,名字叫:%s", &age, name);
  // 判断
  if(result==EOF){
    printf("读取失败了\n");
    return 1;
  }
  printf("%d,%s\n",age,name);
  fclose(file); // 关闭文件
  return 0;
}