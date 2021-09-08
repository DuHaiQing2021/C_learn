#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

///****
//描述
//给定秒数seconds (0< seconds < 100,000,000)，把秒转化成小时、分钟和秒。
//
//输入描述：
//一行，包括一个整数，即给定的秒数。
//输出描述：
//一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。
//示例1
//输入：
//3661
//复制
//输出：
//1 1 1
//复制
//****/
//int main()
//{
//      int second, shi, fen, s;
//      scanf("%d", &second);
//      if (second > 0 && second < 100000000)
//        s = second % 60;
//        fen = second / 60 % 60;
//        shi = second / 3600 % 60;
//      printf("%d %d %d", shi, fen, s);
//      return 0;
//
//}




///******
//描述
//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。
//
//输入描述：
//一行，连续输入5个整数（范围0~100），用空格分隔。
//输出描述：
//一行，输出5个数的平均数（保留一位小数）。
//示例1
//输入：
//75 80 43 67 96
//复制
//输出：
//72.2
//复制
//******/
//int main()
//{
//    int a, b, c, d, e;
//    float f;//f平均成绩变量
//    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//    f = (a + b + c + d + e) / 5.0;
//    printf("%.1f", f);
//    return 0;
//}




///******
//描述
//给定两个整数a和b (0 < a,b < 10,000)，计算a除以b的整数商和余数。
//输入描述：
//一行，包括两个整数a和b，依次为被除数和除数（不为零），中间用空格隔开。
//输出描述：
//一行，包含两个整数，依次为整数商和余数，中间用一个空格隔开。
//示例1
//输入：
//15 2
//输出：
//7 1
//******/

//int main()
//{
//    int a, b, shang, yu;
//    scanf("%d %d", &a, &b);
//    if (a > 0 && b < 10000)
//    {
//        shang = a / b;//求a除b的商
//        yu = a % b;   //求a与b的余
//    }
//    printf("%d %d", shang, yu);
//    return 0;
//}




/*
写代码将三个整数数按从大到小输出。

例如：

输入：2 3 1

输出：3 2 1

*/
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", a + i);
//	}
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2 - i; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(a + i));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


///*****
//  写一个代码打印1 - 100之间所有3的倍数的数字
//*****/
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i% 3 == 0)printf("%5d",i);
//		if (i % 10 == 0)printf("\n");
//	}
//	return 0;
//}




/******
循环：---break--for---continue
类型：---char--int---float---double---signed---unsigned--
自定义类型：enum（枚举）typedef(类型重命名)


******/
//#include<stdio.h>
//typedef unsigned int uint;
//int main()
//{
//	uint a = 10;
//
//	printf("%d\n", a);
//	return 0;
//}


/******
static 有3种用法
1，static修饰局部变量：
（使得局部变量出了自己的范围也不销毁，其实是改变了局部变量的生命周期。
  但是作用域不变。
 ）

2，static修饰全局变量：
（全局变量本身具有外部链接属性.
  但是static 修饰全局变量，会使得全局变量失去外部连接属性
  变成内部链接属性
  所以static修饰的全局变量，只能在自己所在的.c文件中使用
 ）
3，static修饰函数：
（默认是具有外部连接属性
  但是被static修饰之后，会使得函数失去外部连接属性
  变成了内部连接属性
  所以static只能在本文件中使用，不能被其他文件使用
）
******/

/*1.1*/
//void test()
//{
//	//int a = 1;
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i=0;
//	for(i=0;i<10;i++)
//		test();
//	printf("\n");
//	return 0;
//}


/*2.1*/
//extern int extern_1;//声明外部变量extern_1
////extern int extern_2;//声明外部变量extern_2,但在add.c中这个变量前面加了static，所以错误
//static int extern_3 = 400;//静态全局变量可以在本源文件中使用但不能在其他源文件中使用。
//int main()
//{
//	printf("%d\n", extern_1);
//	//printf("%d", extern_2);
//	printf("%d\n", extern_3);
//	return 0;
//}

/*3.1*/
//extern int add(int x, int y);//外部符号声明。
////extern int add_1(int x, int y);
//int main()
//{
//	int a = 100,n=20;
//	int b = 200,m=30;
//	int c = add(a, b);
//	
//	printf("%d\n", c);
//	//int d = add_1(a, b);
//	//printf("%d\n", d);
//	return 0;
//}

/*****
#define定义常量和宏
****/
//#include<stdio.h>
//#define num 10       //define定义常量
//#define add(x,y) ((x)+(y))//define定义宏
//int add_1(int x,int y) 
//{ 
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = num;
//	printf("%d\n", a);
//	int n = 10;
//	int m = 25;
//	int sum = 0, sum_1 = 0;
//	sum = add(n, m);//使用#define宏定义add
//	printf("%d\n", sum);
//
//	sum_1 = add_1(n, m);//使用自定义函数add_1
//	printf("%d\n", sum_1);
//	return 0;
//
//}

/****
指针简介
注：%p--地址，地址的16进制表示形式
***/

//#include<stdio.h>
//int main() {
//	int a = 10;
//
//	printf("%p\n", &a);
//	//&a的时候，取出是a所占内存中4个字节中第一个字节的地址
// 	int* p = &a;//int* p是一个整形指针变量“*”告诉我们这是一个指针
//	if (*p == 10)printf("******\n");//这里的*p是指p的地址解用 得到指针所指的地址中存放的值
//	*p = 20;//这时*p所指a地址中所存的值10被20覆盖
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	return 0;
//}











