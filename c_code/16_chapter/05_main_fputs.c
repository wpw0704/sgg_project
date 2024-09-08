#include <stdio.h>
int main()
{
  // 需求:向文件中写入字符串
  // 打开文件
  FILE *file = fopen("file2.txt", "a");
  // 判断文件打开是否成功
  if(file==NULL){
    printf("文件打开失败了\n");
    return 1;
  }
  // 写入字符串
  char *str = "hello";
  int result = fputs(str, file);
  // 判断字符串是否写入成功
  if(result==EOF){
    printf("写入失败\n");
    return 1;
  }

  // 关闭文件
  fclose(file);
  return 0;
}