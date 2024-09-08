#include <stdio.h>
int main()
{
  // 需求:动态的向数组中存储数据,并遍历出来
  // 遍历(通过某种循环的语句,一个一个的找到数组中的数据,进行操作)

  int arr[10]; // 空数组
  int len = sizeof(arr) / sizeof(arr[0]);
  printf("%d\n", len);
  // for (int i = 0; i < len;i++){
  //   arr[i] = i + 10;
  // }
  // for (int i = 0; i < len;i++){
  //   arr[i] = i ;
  // }
  for (int i = len - 1; i >= 0; i--)
  {
    arr[9 - i] = i;
  }
  // 遍历数组输出每个数据值
  for (int i = 0; i < len; i++)
  {
    printf("索引:%d,值:%d\n", i, arr[i]);
  }

  // int arr[10];
  // for (int i = 0; i < 10;i++){
  //   printf("索引:%d,值:%d\n",i,arr[i]);
  // }

  return 0;
}