#include <stdio.h>
int main()
{
  // 嵌套分支:分支语句中还有其他的分支语句
  /*
    语法:
    方式1:
    if(){
      if(){}else{}
    }
    方式2:
    if(){
      switch(){}
    }
    方式3:
    switch(){
      case 值: if-else语句;break;
    }
    .....很多种方式
  */

  // 输入油号（92或95）和油量，计算需要支付的金额。92号汽油每升4元，如果油量大于等于40升，每升3.5元；95号汽油每升5元，如果油量大于等于40升，每升4.5元
  int oilN, oilL; // 声明int类型的两个变量,分别起名为oilN,oilL,代表的是油号和油量
  printf("请您输入油号:\n");
  scanf("%d", &oilN); // 接收用户输入的油号
  printf("请您输入油量:\n");
  scanf("%d", &oilL); // 接收用户输入的油量
  double price;       // 定义double类型的变量,起名为price,用来存储金额
  // 使用switch-case语句判断油号
  switch (oilN)
  {
  case 92:
    price = 4; // 价格4元
    if (oilL >= 40)
      price = 3.5;
    printf("%d号的油,加%d升,金额为:%.2lf\n", oilN, oilL, price * oilL);
    break;
  case 95:
    price = 5; // 价格5元
    if (oilL >= 40)
      price = 4.5;
    printf("%d号的油,加%d升,金额为:%.2lf\n", oilN, oilL, price * oilL);
    break;
  default:
    printf("输入有误\n");
    break;
  }


  

  return 0;
}