#include <stdio.h>
int main()
{
  // 从一个文件中读取所有的字符
  // 打开文件
  FILE *file = fopen("file1.txt", "r");
  // 判断文件打开是否成功
  if(file==NULL){
    printf("文件打开失败了\n");
    return 1;
  }
  char c;
  // 从file文件中读取一个字符
  while((c = fgetc(file))!=EOF){
    printf("%c\n",c);
  }
  // 关闭文件
  fclose(file);

  return 0;
}