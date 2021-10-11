#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	//printf("%d\n", __STDC__);//因为VS不支持ANSI C,其实__STDC__未定义
//	//gcc 是支持的
//	//gcc对C语言语法的支持非常好
//
//	return 0;
//}


//#define 定义标识符常量
//#define 定义宏

//
//#define MAX 100
//#define reg register
//
//#define STR "HEHE"
//
//
//int main()
//{
//	int a = 3;
//	int b = 20;
//	if (a == 4)
//		b = MAX;
//	else
//		b = -a;
//
//	//register int num = 100;
//	//reg int num2 = 200;
//
//	//int m = MAX;
//	//printf("%d\n", MAX);
//
//	//printf("%d\n", m);
//	//printf("%s\n", STR);
//
//	return 0;
//}

//
//#define SQUARE(X) ((X)*(X))
//
//int main()
//{
//	int a = 5;
//	int ret = SQUARE(a+5);
//	//int ret = a + 5 * a + 5;
//	//int ret = ((a) * (a));
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int ret = 10 * DOUBLE(2);
//	//int ret = 10 * 2 + 2;
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//#define INT int
//
//typedef int int_t;
////int_t 就是类型
//
//int  main()
//{
//	INT a;//int a;
//	int_t b;
//
//	return 0;
//}
//
//#define ptr_t int*
//typedef int* ptr_t2;
//
//
//int main()
//{
//	ptr_t p1, p2;
//	//预处理后替换为
//	int *p1, p2;//p1是指针，p2是整形的
//	ptr_t2 p3, p4;//p3和p4都是指针类型
//
//	return 0;
//}

//#define MAX 100
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	int sum = ADD(ADD(2,3), 10);
//	int ret = ADD(MAX, 10);
//
//	/*int sum = ((100) + (10));*/
//	printf("MAX = %d\n", MAX);
//	//printf("MAX = %d\n", 100);
//	return 0;
//}

//void print(int n)
//{
//	printf("the value of n is %d\n", n);
//}
//
//#define PRINT(n) printf("the value of "#n" is %d\n", n)
//
//int main()
//{
//	int a = 10;
//	PRINT(a);
//	int b = 20;
//	PRINT(b);
//
//
//	//int a = 10;
//	//printf("the value of a is %d\n", a);
//
//	//int b = 20;
//	//printf("the value of b is %d\n", b);
//
//	//print(a);
//	//print(b);
//
//	//printf("hello world\n");
//	//printf("hello ""world\n");
//
//
//
//
//	return 0;
//}

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int class103 = 100;
//	printf("%d\n", CAT(class, 103));
//	printf("%d\n", CAT(1, 2));
//	return 0;
//}

//#
//##

//int main()
//{
//	int a = 10;
//	int b = a + 1;//b得到的是11，a不变
//	int b = ++a;//b得到的是11，但是a变了，这个表达式是有副作用的
//
//	return 0;
//}

////宏的实现 - 1
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
////函数的实现 - 2
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 8;
//	//宏的参数是不计算直接替换进去的
//	//替换进去进去后参与运算
//
//	//int m = MAX(a++, b++);
//	//int m = ((a++) > (b++) ? (a++) : (b++));
//	//函数的参数是计算后再传进去的
//
//	int m = Max(a++, b++);
//
//	printf("m=%d\n", m);//8
//	printf("a=%d\n", a);//6
//	printf("b=%d\n", b);//9
//
//
//	return 0;
//}


//宏的实现 - 1
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
////函数的实现 - 2
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int MaxFloat(float x, float y)
//{
//	return x > y ? x : y;
//}
//
//
//int main()
//{
//	int a = 5;
//	int b = 8;
//
//	//int m = Max(a, b);
//	int m = MAX(a,b);
//
//	//int m = ((a) > (b) ? (a) : (b));
//
//	printf("m=%d\n", m);//8
//	printf("a=%d\n", a);//6
//	printf("b=%d\n", b);//9
//
//
//	return 0;
//}
//
// 
// 
//
////续行符号
//#define MALLOC(num, type) \
//	(type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//int*p = (int*)malloc(100*sizeof(int));
//	//malloc(100, int);
//	int* p = MALLOC(100, int);
//
//	//int* p = (int*)malloc(100 * sizeof(int));
//	return 0;
//}


//#define	MAX 100
//
//int main()
//{
//	int m = MAX;
//#undef MAX
//	int n = MAX;//err
//
//	return 0;
//}

//条件编译指的是：满足条件代码就参与编译，不满足条件，代码就不参与编译
//#if 0
//int  main()
//{
//
//	printf("hehe\n");
//
//
//	return 0;
//}
//
//
//int main()
//{
//	printf("haha\n");
//	return 0;
//}
//
//#endif
//
//#define M 2
//
//int main()
//{
//	int a = 2;
//#if M==2
//	printf("hehe\n");
//#endif
//	return 0;
//}


//#define M 500
//
//int main()
//{
//#if M==100
//	printf("haha\n");
//#elif M==200
//	printf("hehe\n");
//#else
//	printf("heihei\n");
//#endif
//
//
//	return 0;
//}

//#define MAX 0
//
//int main()
//{
//	//判断符号是否被定义
////#if defined(MAX)
////	printf("hehe:MAX\n");
////#endif
//	
//#if !defined(MAX)
//		printf("hehe:MAX\n");
//#endif
//
//
////#ifdef MAX
////	printf("hehe:MAX\n");
////#endif
//
//#ifndef MAX
//	printf("hehe:MAX\n");
//#endif
//
//	return 0;
//}


//stdio.h

//自己包含自己定义的头文件使用""
//1、首先是在当前过程的目录下查找
//2、如果第一步找不到，就去库函数的目录下查找

//包含库目录下的头文件时使用的<>
//直接去库函数所在的目录下查找


#include <stdio.h>

#include "C:\\Users\\bit\\Desktop\\add.h"

int main()
{
	int a = 10;
	int b = 20;

	int c = Add(a, b);

	printf("%d\n", c);

	return 0;
}
