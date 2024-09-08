#include <stdio.h>
// 定义一个关于季节的枚举类型
enum Season
{
  spring,
  summer,
  autumn,
  winter
};
int main()
{
  // 遍历枚举类型的成员值
  // for (enum Season i = spring; i <= winter;i++){
  //   printf("%d\n",i);
  // }
  // 目的:通过switch-case语句使用枚举类型的数据值
  // 需求:提示用户输入季节,显示对应喜欢的季节内容
  // 定义一个枚举类型的变量
  enum Season ss;
  printf("请您输入季节编号:1-spring,2-summer,3-autumn,4-winter\n");
  scanf("%d",&ss);
  switch(ss){
    case 0:printf("您喜欢春季\n");break;
    case 1:printf("您喜欢夏季\n");break;
    case 2:printf("您喜欢秋季\n");break;
    case 3:printf("您喜欢冬季\n");break;
  }

  return 0;
}