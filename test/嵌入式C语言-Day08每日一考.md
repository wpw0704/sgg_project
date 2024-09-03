##### 1. 【代码题】写出下面程序的运行结果

```c
int num = 100;
void func()
{
    num += 20;   // 120
}
int main()
{
    int num = 10;
    func();
    printf("%d", num);  // 10
    return 0;
}
```

##### 2. 【代码题】写出下面程序的运行结果

```c
int n = 100;
void func(int n)
{
    n += 10;   //		
    printf("%d", n); // 110
}
int main()
{
    func(n);		// 110
    printf("%d", n); // 110
    return 0;
}
```

##### 3.【代码题】写出下面程序的执行结果

```c
void func()
{
    int n1 = 10;
    static int n2 = 20;
    n1 ++;
    n2 ++;
    printf("%d %d \n", n1, n2);
}
int main()
{
    func();		// 11 21
    func();		// 11 22
    return 0;
}
```

##### 4. 【代码题】写出下面程序的运行结果

```c
void func(int n)
{
    printf("%d \n", n); // 4 2 0
    if (n >= 1) {
        func(n - 2);
    }
    printf("%d \n", n); // 4 2 0
}

int main()
{
    func(4);
    return 0;
}
```

##### 5. 【问答题】 sizeof 和 strlen() 获取的字符串长度有什么区别

```
sizeof 
strlen 
```
