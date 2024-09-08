#include <stdio.h>
int main()
{
    // （3）创建一个char类型的26个元素的数组，分别放置'A'-'Z‘。使用for循环访问所有元素并打印出来(用二维数组存储大写和小写字母,2行26列---作业)。
    char chs[27];
    for (int i =0 ; i < 26;i++){
      chs[i] = i+65;
    }
    for (int i = 0; i < 26;i++){
      printf("%c ",chs[i]);
    }



      return 0;
}