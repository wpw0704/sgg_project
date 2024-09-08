#include <stdio.h>
int main()
{
  // 需求:向文件中写入一个字符
  // 打开一个文件
  // FILE *file = fopen("file1.txt", "w"); // 写入
  FILE *file = fopen("file1.txt", "a"); // 追加
  // 判断打开是否成功
  if(file==NULL){
    printf("文件打开失败了\n");
    return 0;
  }
  // 把一个字符写入到文件中
  char ch = 'A';
  int result = fputc(ch, file);
  // 判断写入是否成功
  if(result==EOF){
    printf("文件写入失败了\n");
    return 1;
  }
  // 关闭文件
  fclose(file);
  return 0;
}