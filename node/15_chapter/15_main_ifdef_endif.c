#include <stdio.h>

// #define HAPPY
// // 条件编译,问:这个宏定义过没,如果定义过,则编译里面的代码,否则不编译
// #ifdef HAPPY
//   printf("定义过了\n");
// #endif

// 通过#ifdef可以用来实现某个库文件是否加载过
// #define FLAG
// #ifdef FLAG  // 此时的判断是:FLAG定义了,才引入对应的库文件
// #include "./10_headers/06_my_header.h"
// #endif

// #define FLAG
// // 按照宏定义的条件来引入不同的库文件
// #ifdef FLAG
// #include "./10_headers/06_my_header.h"
// #else
// #include "./10_headers/project/04_my_header.h"
// #endif
int main()
{
  func6();

  return 0;
}