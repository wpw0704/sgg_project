#include <stdio.h>
int main()
{
  // 打开文件读取字符串
  FILE *file = fopen("file2.txt", "r");
  if(file==NULL){
    printf("打开失败了\n");
    return 1;
  }
  char str[20]; // 用来存储读取的字符串
  char * result = fgets(str,sizeof(str),file);
  if(result==NULL){
    printf("读取结束或者失败了\n");
    return 1;
  }
  printf("%s",str);

  // 关闭文件
  fclose(file);

  return 0;
}