#include <stdio.h>
// 条件编译指令
// 满足条件则编译里面的代码,如果不满足条件,里面的代码就不进行编译操作
/*
方式1:
#if 条件
代码
#endif
*/
// #if 1
// const double PI = 3.14;
// #endif
/*
方式2:
#if 条件
代码
#else
代码
#endif
*/

// #if 0
// const double PI = 3.14;
// #else
// const double PI =3.1415;
// #endif

int main()
{
// #if 1
// printf("啦啦啦1");
// #else
//   printf("啦啦啦2");
// #endif

  return 0;
}