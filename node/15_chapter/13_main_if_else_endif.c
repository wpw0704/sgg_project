#include <stdio.h>
// 条件编译的代码
// 如果编译器的版本大于c99 那么number_t类型默认就是long long,否则就用long类型
#if __STDC_VERSION__ > 199901
  #define NUMBER_T long long
  #define NUMBER_FORMAT "%lld"
#else
  #define NUMBER_T long
  #define NUMBER_FORMAT "%ld"
#endif
int main()
{
  // 需求:根据不同的编译器版本使用不同的数据类型
  printf("%ld\n",__STDC_VERSION__); // 输出的编译器的对应的版本 201710 
  // 修改tasks.json文件 中的"-std=c99" 199901

  NUMBER_T num = 100;
  printf(NUMBER_FORMAT,num);
  printf("\n%zu\n",sizeof(NUMBER_T));

  return 0;
}