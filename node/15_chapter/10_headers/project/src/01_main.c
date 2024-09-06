#include <stdio.h> // 引入系统的库文件, 库文件名字使用的是<>包裹的
// 如果引入自定义的库文件,使用的是 "" 包裹
// #include "./02_my_header.h" // 引入自定义的头文件
// 绝对路径(写死的路径/固定路径)和相对路径(相当于当前的文件或者目录的路径)
// 绝对路径:从某个盘符开始,一直到这个文件的路径地址
// 相对路径:相当于当前的这个文件,来找到另一个文件的路径地址(推荐)

// 绝对路径(不推荐的写法)
// #include "D:\2024_08_21\code\15_chapter\10_headers\project\src\02_my_header.h"

// ./ 相对于当前这个文件的一个相对路径,
 // 写法1: "./文件名.h"
 // 简写: "文件名.h"
#include "02_my_header.h"
#include "./includes/03_my_header.h"
#include "../04_my_header.h"
#include "../incs/05_my_header.h"
#include "../../06_my_header.h"
// #include "../../../11_main_define_paramenter_example.c" // 报错了,原因:该文件中还有主函数
int main()
{
  func2();
  func3();
  func4();
  func5();
  func6();

  return 0;
}