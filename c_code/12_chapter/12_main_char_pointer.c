#include <stdio.h>
#include <string.h>
int main()
{
  // 字符指针:就是一个指针,指向的是一个字符串的内存的地址

  // 字符指针的声明语法:char * 指针变量名;

  // char chs0[3] = {'a','b','\0'};
  // char chs1[3] = {'a','b'};
  // char chs2[] = {'a','b'};
  // char chs3[] = {"abcd"};
  // char chs4[] = "abcdefg";
  // char *chs5 = "hello";
  // // printf("%s\n",chs5);
  // // printf("字节数:%zu\n",sizeof(chs5)); // 8 当前的chs5指针变量中的内存地址的字节数
  // // printf("字符串的长度:%lld\n",strlen(chs5)); // 5 字符串的个数
  // int len = strlen(chs5); // 字符串的个数
  // for (int i = 0; i < 5;i++){
  //   printf("%c,%p\n",chs5[i],&chs5[i]);
  // }
  // printf("\n===========\n");
  // printf("%p\n",chs5);
  // 字符指针,指向了一个字符数组的内存地址(首地址),字符串实际上在内存中是以字符数组来存储的

  // char chs1[] = "hello"; // 字符数组
  // // chs1 = "world"; // 报错,原因是:数组指向不能改变
  // chs1[3] = 'a'; // 但是可以通过索引的方式来改变数组中某个元素的数据
  // printf("%s\n",chs1);
  // 字符指针,字符指针变量,指向可以改变
  // char *chs2 = "hello";
  // // chs2 = "what are you no sha lei"; // 指向可以改变
  // chs2[0] = 'w';
  // printf("%s\n",chs2);

  // 字符数组和字符指针的区别:
  // 字符数组是一个数组,里面存储的是字符,指向不能改变,但是可以通过索引改数组中的数据值
  // 字符指针:是一个指针,指向的是一个字符/字符串/字符数组的内存地址,指向可以改变,但是不能通过索引修改数据值


  return 0;
}