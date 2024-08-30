#include <stdio.h>
int main()
{
  // 定义一个字符数组(简化的写法)
  // char chs[] = "hello";
  // 访问数组中某个位置的字符
  // printf("%c\n",chs[3]);
  // 计算字符数组的长度(字符的个数)
  // int len1 = sizeof(chs) / sizeof(chs[0]);
  // int len2 = sizeof(chs) / sizeof(char);
  // printf("%zu\n",len1); // 6
  // printf("%zu\n",len2); // 6 
  // 为什么是6个,因为字符串(字符数组)中默认有一个\0--结束符
  // int len = sizeof(chs); // 比较常用
  // printf("%zu\n",len);

  // char chs2[] = {'a','b','c','d'};
  // printf("%zu\n",sizeof(chs2));
  // 注意:使用sizeof计算字符数组长度的时候,如果有了结束符,或者指定了数组的长度,计算的结果是对的


  char chs[] = "hello"; // 遍历
  int len = sizeof(chs);
  printf("%zu\n",len); // 6
  for (int i = 0; i < len;i++){
    printf("%c\n",chs[i]);
  }
    return 0;
}