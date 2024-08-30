#include <stdio.h>
int main()
{
  // 现在有三个班，每个班五名同学，用二维数组保存他们的成绩，并求出每个班级平均分、以及所有班级平均分，数据要求从控制台输入。

  // 定义一个三行五列二维数组
  int scores[3][5];
  // 计算行:二维数组的总字节数/第一行的总字节数(第一个元素的总字节)
  int rows = sizeof(scores) / sizeof(scores[0]);
  // 计算列:第一个元素的总字节数/第一行的第一列的数据的字节数(数据的字节数)
  int cols = sizeof(scores[0]) / sizeof(int);
  double class_sum=0; // 每个班级的总成绩
  double all_class_sum=0; // 所有班级的总成绩
  // 使用双层的for提示用户输入每个班的每个学员成绩
  for (int i = 0; i < rows;i++){ // 遍历的是行(班)
    for (int j = 0; j < cols;j++){ // 遍历的是列(学员个数)
      printf("请您输入第%d个班级中第%d个学员的成绩:\n",i+1,j+1);
      scanf("%d",&scores[i][j]);
    }
  }
  printf("\n=================\n");
  for (int i = 0; i < rows;i++){ // 遍历的是行(班)
    class_sum = 0; // 每次计算班级总成绩之前,先把这个成绩重置为0
    for (int j = 0; j < cols;j++){ // 遍历的是列(学员个数)
      class_sum += scores[i][j]; // 计算当前这个班级的总成绩
    }
    printf("第%d个班级的总成绩是:%.2lf,平均分:%.2lf \n",i+1,class_sum,class_sum/cols);
    all_class_sum += class_sum; // 求所有班级的总成绩
    printf("\n");
  }

  // 所有班级的平均分显示
  printf("所有班级的平均分为:%.2lf \n",all_class_sum/rows);

  return 0;
}