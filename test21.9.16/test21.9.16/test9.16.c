#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


/****
注意：此代码不能实现值的交换
因为形参只是实参的一份临时拷贝，通过改变形参不会影响实参的值。

***/
//void swap(int p1, int p2) 
//{
//	int t = 0;
//	t = p1;
//	p1 = p2;
//	p2 = t;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	
//	printf("交换前：a = % d  b = % d\n", a, b);
//	swap(a, b);
//	printf("交换后：a = % d  b = % d\n", a, b);
//	//打印“交换后：a=20  b=10”
//	return 0;
//}

//void swap(int* p1, int* p2) //函数定义；p1和p2是形参变量
//{
//	int t=0;
//	t = *p1;
//	*p1 = *p2;
//	*p2 = t;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//  void swap(int* p1, int* p2);//函数声明；
//	printf("交换前：a = % d  b = % d\n", a, b);
//	swap(&a, &b);//函数调用；a和b是实参变量
//	printf("交换后：a = % d  b = % d\n", a, b);
//
//	return 0;
//}

/***
嵌套调用
***/
//#include <stdio.h>
//void new_line()
//{
//    printf("hehe\n");
//}
//void three_line()
//{
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        new_line();
//    }
//}
//int main()
//{
//    three_line();
//    return 0;
//}

//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10
// );
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}