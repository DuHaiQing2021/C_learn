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
�����ݹ�
�ݹ飺����ֱ�ӻ��ӵĵ����Լ��еݹ�
�ݹ��������»�С
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


////��д��������������ʱ���������ַ�������
#include<Stdio.h>
//�ݹ�
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
//	printf("�ݹ����ַ�������:%s\n", arr);
//	printf("%d", len);
//	return 0;
//}
////�ǵݹ�
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
//	printf("�ǵݹ����ַ������ȣ�%s\n",arr);
//	printf("%d", len);
//	return 0;
//}


/***��n�Ľ׳�****/
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
//��ҵ����
//��ӡһ������ÿһλ
//��ҵ����
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
��ҵ����
��׳�
��ҵ����
�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
*********************************/

//#include<stdio.h>
//�ǵݹ�
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
//	int sum = 0;       //n�Ľ׳˽��
//	printf("�ǵݹ���׳�>>>");
//	scanf("%d", &n);   //�󼸵Ľ׳�
//	sum = fac(n);
//	printf("%d", sum);
//
//	return 0;
//}
//�ݹ�
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
//	printf("�ݹ���׳�>>>");
//	scanf("%d", &n);
//	int sum = fac(n);
//	printf("%d", sum);
//	return 0;
//}

/****************************************
��ҵ����
����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�

��ҵ����
дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

���룺1729�������19
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
��ҵ����
����쳲�������

��ҵ����
�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

���磺

���룺5  �����5

���룺10�� �����55

���룺2�� �����1
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
�ַ������򣨵ݹ�ʵ�֣�

��ҵ����
��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�

ʵ�֣��������ַ����е��ַ��������У����������ӡ��

Ҫ�󣺲���ʹ��C�������е��ַ�������������

���� :

char arr[] = "abcdef";


����֮����������ݱ�ɣ�fedcba
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
��ҵ����
�ݹ�ʵ��n��k�η�

��ҵ����
��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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