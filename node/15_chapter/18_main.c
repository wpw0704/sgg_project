#include <stdio.h>
// 宏定义的方式,判断当前的平台是什么平台

#if _WIN32  // 此时是windows系统平台
  // 调用Sleep函数,先引入windows.h库
  #include <windows.h>
  #define SLEEP(t) Sleep(t*1000)
#elif __linux__ // 此时是linux系统平台
  // 调用sleep函数,先引入unistd.h库
  #include <unistd.h>
  #define SLEEP sleep
#endif
int main()
{
  // 需求:在不同的平台下,程序运行起来后,暂停5秒,然后显示一句打招呼的内容
  SLEEP(5);
  printf("hello world\n");

  return 0;
}