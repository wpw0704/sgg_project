#include <stdio.h>

// if not define HAPPY
// 如果这个宏 没有定义
// #ifndef HAPPY
// #define HAPPY
// 代码1
// 代码2
// 代码3
// #endif

// #ifndef HAPPY
// #define HAPPY
// 代码1
// 代码2
// 代码3
// #endif
int main()
{
// #ifndef FOO // 如果没有定义FOO
// #define FOO // 则宏定义FOO
// #endif      // if结束


// #ifndef BAR // 如果没有定义BAR
// #define BAR // 则宏定义BAR
// #endif      // if结束


// // 使用条件编译,进行宏是否定义的判断
// #if define FOO   // 如果定义了宏FOO
//   x = 10;        // 则x 为10
// #elif define BAR // 如果定义了宏BAR
//  x = 20; // 则x 为20
// #else
//  int x = 40; // 否则x 为 40
// #endif
  
  return 0;
}