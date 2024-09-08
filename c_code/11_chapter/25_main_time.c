#include <stdio.h>

void add(){
  int sum = 0;
  for (int i = 0; i < 100000;i++){
    for (int j = 0; j < 10000;j++){
      sum += i;
    }
  }
}
#include <time.h>
int main()
{
  // time_t current_time; // 定义了一个存储日期时间的变量,类型是time_t类型
  // time(&current_time); // 获取当前的日期时间
  // printf("%lld\n",current_time);
  // printf("%s\n",ctime(&current_time)); // 年月日时分秒的时间.星期

  time_t start_time, end_time, diff_time; // 开始时间,结束时间,时间差
  time(&start_time); // 开始的时间
  add(); // 调用函数
  time(&end_time); // 结束的时间
  diff_time = difftime(end_time, start_time); // 求时间差
  printf("%lld\n",diff_time);

  return 0;
}