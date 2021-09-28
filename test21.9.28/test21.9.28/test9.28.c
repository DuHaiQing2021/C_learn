#define _CRT_SECURE_NO_WARNINGS 1

/***************
给一个整数
把它变成6进制的形式输出
***************/
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int arr[40] = { 0 };
//	int i = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		arr[i]= num % 6;
//		num = num / 6;
//		i++;
//	}
//	for (i--; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}

/**********************
小乐乐坐电梯每12个人一趟
一趟总共需要花费4分钟（上去2分钟，下来2分钟）
假设有n个人等电梯
求小乐乐需要多长时间上楼
**********************/
//#include<stdio.h>
//int main()
//{
//	int t = 0;
//	int n = 0;
//	scanf("%d", &n);
//	t = n / 12 * 4 + 2;
//	printf("%d\n", t);
//
//	return 0;
//}

/*******************
小乐乐需要求两个正整数（n和m）的最大公约数和最小公倍数，
并求最大公约数和最小公倍数之和
*******************/
//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	long long temp = 0;
//	scanf("%lld %lld", &n, &m);
//	long long n2 = n;
//	long long m2 = m;
//	//最大公约数
//	while (temp=m2%n2)
//	{
//		m2 = n2;
//		n2 = temp;
//	}
//	long long max = n2;
//	//最小公倍数
//	long long min = m * n / max;
//	long long sum = max + min;
//	printf("%lld", sum);
//	return 0;
//}


/************
多组输入，每行输入包括一个字符
判断该字符是否为字母，是（Yes）否（No）
************/
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();//消除换行
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			printf("Yes\n");
//		else
//			printf("No\n");
//
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((scanf("%c", &ch)) != EOF)
//	{
//		getchar();//消除换行
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			printf("Yes\n");
//		else
//			printf("No\n");
//
//
//	}
//
//
//	return 0;
//}

/*******************
用循环打印‘*’组成的“空心”正方形图案
“多组输入”一个整数，整数表示行数也表示正方形边“*”的数量
*******************/
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
// 
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if ((i == 0 || i == n - 1) || (j == 0 || j == n - 1))
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


/****************
 公务员面试
 现场打分，有七位考官，每组7个分数，去掉最高最低求平均值
****************/
//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	int i = 0;
//	int sum = 0;
//	int max = 0;
//	int min = 100;
//	double avg = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (max < score)
//		{
//			max = score;
//		}
//		if (min > score)
//		{
//			min = score;
//		}
//	}
//	avg = (sum - max - min) / 5;
//	printf("%.2lf",avg);
//	return 0;
//}

//#include<stdio.h>
//void Triangle(int a, int b, int c)
//{
//    if (a != b && a != c && b != c)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    else if (a == b && a == c && b == c)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            printf("Equilateral triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    else if ((a == b && a != c) || (a == c && a != b) || b == c && b != a)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            printf("Isosceles triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//
//
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while ((scanf("%d %d %d ", &a, &b, &c) != EOF))
//    {
//        Triangle(a, b, c);
//    }
//
//    return 0;
//}

/***********************
冒泡排序
***********************/
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,0,6,9,10,55,16,22,11,3 };
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for(i=0;i<len-1;i++)
//		for (j = 0; j < len-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

///*******************
//交换数组a和数组b的内容
//*******************/
//#include<stdio.h>
//void exchange(char* p1, char* p2)
//{
//
//	while (*p1 != '\0' || *p2 != '\0')
//	{
//		char temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//		p1++;
//		p2++;
//	}
//}
//int main()
//{
//	char a[10] = "abcdef";
//	char b[10] = "fajhafja";
//	printf("a数组的值：%s\nb数组的值：%s\n\n", a, b);
//	exchange(a, b);
//	printf("a数组的值：%s\nb数组的值：%s\n\n", a, b);
//	return 0;
//}