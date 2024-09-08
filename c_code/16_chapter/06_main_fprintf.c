#include <stdio.h>
int main()
{
  // 打开文件
  FILE *file = fopen("file3.txt", "a");
  // 判断文件是否打开成功
  if(file==NULL){
    printf("文件打开失败了\n");
    return 1;
  }
  // 格式化写入字符串
  char *str = "%d岁,名字叫:%s";
  int result = fprintf(file, str, 34, "小甜甜");
  // 判断写入是否成功
  if(result==EOF){
    printf("写入失败了\n");
    return 1;
  }
  // 关闭文件
  fclose(file);

  return 0;
}