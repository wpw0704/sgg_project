##### 1.【问答题】请写出三种野指针的成因

```
声明未初始化
指向了一个数组越界的位置
指向了已经释放的内存地址

```

##### 2.【问答题】 写出下列标识符各属于什么类型

```c
int *a1;			 指针类型  int *
double *a2[];	     指针数组 double *[]
double (*a3)[];		 数组指针 double(*)[]
int *a4(int, int);	 指针函数 int *()
int (*a5)(int, int); 函数指针 int(*)(int,int)
```

##### 3. 【代码题】写出以下三种定义结构体类型变量的写法

```
方式1:
struct Student{}; struct Student stu;
方式2: 
struct Student{}st;
方式3:
struct {}st;
```



###### 4. 【代码题】写出以下三种定义枚举类型变量的写法

```
方式1:
enum Color{}; enum Color c;
方式2: 
enum Color{}c;
方式3:
enum {}c;
```



### 5. 【代码题】 写出三种定义共用体类型定义变量赋值的写法

```
方式1:
union Data{char c;int a}; union Data ;d.c='A';
方式2: 
union Data{char c;int a}c={10};
方式3:
union {char c;int a}c={.c='A'};
```



