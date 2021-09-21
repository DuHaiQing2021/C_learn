#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 12;
//	int sum = add(a, b);
//	printf("%d", sum);
//
//	return 0;
//
//}


/*******
函数递归
递归：函数直接或间接的调用自己叫递归
递归解决：大事化小
********/
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//
//}
//int main()
//{
//
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}


////编写函数不允许创建零时变量，求字符串长度
#include<Stdio.h>
//递归
//my_strlen(char* s )
//{
//	if (*s != '\0')
//	{
//		return 1 + my_strlen(s + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[10] = "abdsssf";
//	int len = my_strlen(arr);
//	printf("递归求字符串长度:%s\n", arr);
//	printf("%d", len);
//	return 0;
//}
////非递归
//int my_strlen(char* p)
//{
//	int len = 0;
//	while (*p != '\0')
//	{
//		len++;
//		p++;
//	}
//	return len;
//}
//int main()
//{
//	char arr[10] = "scaaffas";
//	int len = my_strlen(arr);
//	printf("非递归求字符串长度：%s\n",arr);
//	printf("%d", len);
//	return 0;
//}


/***求n的阶乘****/
//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else 
//	{
//		return n * fac(n - 1);
//
//	}
//}
//
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}

///*****************
//作业标题
//打印一个数的每一位
//作业内容
//递归方式实现打印一个整数的每一位
//******************/
//#include<Stdio.h>   
//void print(int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	int len = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//
//}


/****************************
作业标题
求阶乘
作业内容
递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
*********************************/

//#include<stdio.h>
//非递归
//int fac(int n)
//{
//	int i = 1;
//	int z = 1;
//	for (i = 1; i <= n; i++)
//	{
//		z *= i;
//	}
//	return z;
//}
//int main()
//{
//	int n = 0;
//	int sum = 0;       //n的阶乘结果
//	printf("非递归求阶乘>>>");
//	scanf("%d", &n);   //求几的阶乘
//	sum = fac(n);
//	printf("%d", sum);
//
//	return 0;
//}
//递归
//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else 
//	{
//		return n * fac(n - 1);
//
//	}
//}
//
//int main()
//{
//	int n=0;
//	printf("递归求阶乘>>>");
//	scanf("%d", &n);
//	int sum = fac(n);
//	printf("%d", sum);
//	return 0;
//}

/****************************************
作业标题
计算一个数的每位之和（递归实现）

作业内容
写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

输入：1729，输出：19
**************************************/
//#include<Stdio.h>   
//int  DigitSum( unsigned int n)
//{
//	static int sum = 0;
//	if (n > 9)
//	{
//		DigitSum(n / 10);
//	}
//	sum += (n % 10);
//	return sum;
//}
//int main()
//{
//	unsigned int n = 0;
//	int sum = 0;
//	scanf("%u", &n);
//	sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//
//}


/***************************
作业标题
计算斐波那契数

作业内容
递归和非递归分别实现求第n个斐波那契数

例如：

输入：5  输出：5

输入：10， 输出：55

输入：2， 输出：1
*************************************/
//#include<stdio.h>
//int fib(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//



/******************************************
字符串逆序（递归实现）

作业内容
编写一个函数 reverse_string(char* string)（递归实现）

实现：将参数字符串中的字符反向排列，不是逆序打印。

要求：不能使用C函数库中的字符串操作函数。

比如 :

char arr[] = "abcdef";


逆序之后数组的内容变成：fedcba
******************************************/

//#include<stdio.h>
//#include<string.h>
//void reverse_string(char* left,char* right)
//{
//    if (left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        reverse_string(left + 1 , right - 1);
//    }
//    else
//    {
//        return;
//    }
//
//}
//int main()
//{
//    char arr[] = "abcdef";
//    char* p = arr + strlen(arr) - 1;
//    reverse_string(arr, p);
//    printf("%s", arr);
//    return 0;
//}


/**********************************
作业标题
递归实现n的k次方

作业内容
编写一个函数实现n的k次方，使用递归实现。
**************************************/
double fac(int n, int k)
{

	if (k > 0)
	{
		return n * fac(n, k - 1);
	}
	else if (k < 0)
	{
		return 1.0 / fac(n, -k);
	}
	else
	{
		return 1.0;
	}

}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double sum=fac(n, k);
	printf("%lf", sum);
	return 0;
}