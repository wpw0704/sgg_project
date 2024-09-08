#include <stdio.h>
#include <stdbool.h>
// 定义客户的结构体类型
typedef struct
{
  int id;         // 编号标识
  char name[20];  // 名字
  int age;        // 年龄
  char gender;    // 性别
  char phone[20]; // 电话
  char email[50]; // 邮箱
} Customer;
// 定义结构体数组
Customer customers[100];
// 定义一个数组中真实容量的数据标识
int customer_count = 0;
// 定义一个全局的变量
int key;      // 用来存储用户选择的信息的编号标识
int loop = 1; // 循环的标识

// 添加客户的函数
void add()
{
  // 设置客户信息的编号标识
  customers[customer_count].id = customer_count + 1;
  printf("\n----------添 加 客 户-----------\n");

  printf("姓名:");
  scanf("%s", customers[customer_count].name); // 把姓名存储到索引为customer_count的name成员中
  getchar();                                   // 吃个回车

  printf("性别:");
  scanf("%c", &customers[customer_count].gender);

  printf("年龄:");
  scanf("%d", &customers[customer_count].age);

  printf("电话:");
  scanf("%s", customers[customer_count].phone);

  printf("邮箱:");
  scanf("%s", customers[customer_count].email);

  customer_count++; // 更新数组的真实容量数据
}
// 根据id找索引
int find_index(int id)
{
  // 遍历数组
  for (int i = 0; i < customer_count; i++)
    if (customers[i].id == id) // 判断数组中每个元素数据的id值和传入进来的id是否一致
      return i;                // 此时找到和数据了,则直接返回i---索引值
  return -1;                   // 整个循环遍历的过程中,从来没有找到对应的数据,则返回-1
}
// 修改客户信息的功能函数
bool edit(int id)
{
  // 根据id查找索引
  int index = find_index(id);
  // 判断索引值是不是-1
  if (index == -1)
    return false;
  // index如果不是-1就说明索引找到了
  printf("\n----------修 改 客 户-----------\n");
  // 有一个可以从输入流中读取数据,并把这个数据保存下来的容器
  char input[50];

  printf("姓名(%s):", customers[index].name);
  fgets(input, sizeof(input), stdin); // 从输入流中读取数据,存储到input字符数组中
  if (input[0] != '\n')
    sscanf(input, "%s", customers[index].name); // 输入的是名字

  // 性别
  printf("性别(%c):", customers[index].gender);
  fgets(input, sizeof(input), stdin);
  if (input[0] != '\n')
    sscanf(input, "%c", &customers[index].gender);

  // 年龄
  printf("年龄(%d):", customers[index].age);
  fgets(input, sizeof(input), stdin);
  if (input[0] != '\n')
    sscanf(input, "%d", &customers[index].age);

  // 电话
  printf("电话(%s):", customers[index].phone);
  fgets(input, sizeof(input), stdin);
  if (input[0] != '\n')
    sscanf(input, "%s", customers[index].phone);

  // 邮箱
  printf("邮箱(%s):", customers[index].email);
  fgets(input, sizeof(input), stdin);
  if (input[0] != '\n')
    sscanf(input, "%s", customers[index].email);

  return true;
}
// 修改客户信息的界面
void edit_view()
{
  int id; // 用来存储要删除的客户的编号
  printf("\n----------修 改 客 户-----------\n");
  printf("\n----------输入要修改的客户编号(-1.退出)-----------\n");
  scanf("%d", &id); // 接收用户输入的编号
  getchar();
  // 判断id是不是-1
  if (id == -1)
  {
    printf("您主动放弃修改客户操作\n");
    return;
  }
  // 开始修改的操作了
  printf("%s\n", edit(id) ? "修改成功" : "修改失败");
}

// 删除操作的函数
bool del(int id)
{
  // 根据id找索引值
  int index = find_index(id);
  // 判断
  if (index == -1)
    return false;
  // 开始删除数据了
  for (int i = index; i < customer_count - 1; i++)
  {
    customers[i] = customers[i + 1]; // 后一个位置的数据覆盖到前一个位置
    customers[i].id = i + 1;
  }
  customer_count--; // 更新真实容量数据
  return true;
}
// 删除客户信息的界面
void del_view()
{
  int id;      // 用来存储要删除的客户的编号
  char choice; // 用来存储y/n的标识
  printf("\n----------删 除 客 户-----------\n");
  printf("\n----------输入要删除的客户编号(-1.退出)-----------\n");
  scanf("%d", &id); // 接收用户输入的编号
  getchar();
  // 判断是不是-1
  if (id == -1)
  {
    printf("您主动放弃删除客户操作\n");
    return;
  }
  // 继续提示
  printf("是否确认删除(y/n)\n");
  scanf("%c", &choice);
  // 判断是不是n
  if (choice == 'n')
    return;
  // 此时输入是y
  // if(id在数组中存储){
  //   删除操作
  // }else{
  //   删除失败
  // }
  printf("%s\n", del(id) ? "删除成功" : "删除失败");
}

// 展示每个客户的信息
void get_customer(Customer *c)
{
  printf("%d\t%s\t%c\t%d\t%s\t\t%s\n", c->id, c->name, c->gender, c->age, c->phone, (*c).email);
}
// 展示客户列表的函数
void list()
{
  // 判断,数组的遍历
  if (customer_count == 0)
  {
    printf("列表中没有数据,请您输入数据后再显示\n");
    return;
  }
  // 此时有数据
  printf("编号\t姓名\t性别\t年龄\t电话\t\t邮箱\n");
  for (int i = 0; i < customer_count; i++)
  {
    get_customer(&customers[i]);
  }
}

// 主界面头部信息函数
void show_header()
{
  printf("\n=============客 户 信 息 管 理=========\n");
  printf("             1.添 加 客 户 \n");
  printf("             2.修 改 客 户 \n");
  printf("             3.删 除 客 户 \n");
  printf("             4.客 户 列 表 \n");
  printf("             5.退出(请选择1-5) \n");
}
// 主界面功能函数
void show_main()
{
  while (loop)
  {
    // 调用头部信息的函数
    show_header();
    scanf("%d", &key);
    // 吃掉那个回车
    getchar();
    switch (key)
    {
    case 1:
      add();
      break;
    case 2:
      edit_view();
      break;
    case 3:
      del_view();
      break;
    case 4:
      list();
      break;
    case 5:
      char choice; // 用来接收用户输入的字符,目的是要得到y/n
      do
      {
        printf("是否确认退出(y/n):\n");
        scanf("%c", &choice);
        getchar();
      } while (choice != 'y' && choice != 'n');
      // 立刻判断输入的是y/n
      if (choice != 'n')
        loop = 0;
      ;
      break;
    default:
      printf("输入有误,请重新输入\n");
      break;
    }
  }
}
int main()
{
  // 调用主界面功能函数
  show_main();
  printf("\n程序结束\n");

  return 0;
}