#include <stdio.h>
int main()
{
  // 向文件中写入字符,字符串,格式化字符串
  FILE *file = fopen("file4.txt", "a");
  if(file==NULL){
    printf("文件打开失败了\n");
    return 1;
  }
  // 准备字符,并写入
  int result1 = fputc('A', file);
  if(result1==EOF){
    printf("写入字符失败了\n");
    return 1;
  }
  // 准备字符串,并写入
  int result2 = fputs("hello", file);
  if(result2==EOF){
     printf("写入字符串失败了\n");
    return 1;
  }

  // 准备格式字符串,并写入
  int result3 = fprintf(file,"今年%d岁,名字是:%s",57,"小甜甜");
    if(result3==EOF){
     printf("写入字符串失败了\n");
    return 1;
  }
  // 关闭文件
  fclose(file);

  return 0;
}