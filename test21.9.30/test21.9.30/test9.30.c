#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*******************
指针的加减整数
*******************/
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[8];
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	printf("%p\n", p - 1);
//
//	return 0;
//}

/***************
指针-指针
***************/
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	/*char ch[5] = { 0 };*/
//	//printf("%d\n",&arr[9]-&ch[0]);//eorr
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//	printf("%d\n", &arr[9] - &arr[5]);
//	//指针-指针的前提是两个指针指向同一块区域
//	//指针-指针得到的数字绝对值是指针和指针之间的元素的个数
//	return 0;
//}


////求字符串长度
//#include<string.h>
//int main()
//{
//	//用strlen函数求字符串长度
//	char ch[] = "abcdefj";
//	int len = strlen(ch);
//	printf("%d\n", len);
//
//	//用指针求字符串长度
//	char* p1 = ch;
//	int count = 0;
//	while (*p1 != '\0')
//	{
//		count++;
//		p1++;
//	}
//	printf("%d\n", count);
//
//
//
//	return 0;
//}


//#include<stdio.h>
//#define values 5
//int main()
//{
//	float arr[values];
//	float* p;
//	int i = 0;
//	for (p = &arr[values]; p > &arr[0];)//p = &arr[values]这时指针不存在越界，因为没有引用arr的值
//	{
//		*--p=0;
//	}
//	for (i = 0; i < values; i++)
//	{
//		printf("%.2f  ", arr[i]);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#define values 5
//int main()
//{
//	float arr[values];
//	float* p;
//	int i = 0;
//	for (p = &arr[values]; p > &arr[0];)//p = &arr[values]这时指针不存在越界，因为没有引用arr的值
//	{
//		*--p = 0;
//	}
//	for (i = 0; i < values; i++)
//	{
//		printf("%.2f  ", arr[i]);
//	}
//	return 0;
//}

//数组--是一块连续的空间，放的是相同的类型的元素
//数组大小和元素类型，元素个数有关系
//int arr[10];
//指针（变量）-是一个变量，放地址
//指针变量的大小 是4（32bit）/8（64bit）个字节（byte）

//int main()
//{
//	int arr[10] = {0};
//	int size=sizeof(arr);
//	int* p=arr;
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", size);
//
//	//数组名确实是首元素的地址
//	//但是有2个例外
//	/*
//	1.sizeof（数组名）--这里的数组名不是首元素地址，是表示整个数组的，这里计算的是整个数组的大小，单位还是字节。
//	2.&数组名--这里的数组名不是首元素的地址，是表示 整个数组 的，拿到的是这个数组的地址。
//	*/
//
//
//	return 0;
//}

//地址是不断变化的
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);    //数组名是首元素的地址
//	printf("%p\n", arr + 1);
//	
//	printf("%p\n", &arr[0]);//取出第一个元素地址
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);   //取出整个数组的地址
//	printf("%p\n", &arr + 1);//整个数组地址加1就是跳过整个40个字节数组。
//
//
//	return 0;
//}


/**********
二级指针
**********/
//int main()
//{
//	int a = 10;      //a有4个字节的空间
//	int* p = &a;     //p是指针变量（存放指向变量的地址）
//	int** p1 = &p;   //p1是二级指针（存放指针变量的地址）
//	//int*** p2 = &p1; //p2是三级指针（存放二级指针变量地址）
//	//三级指针很少使用
//	**p1 = 20;
//	printf("%d", a);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* p[3];
//	p[0] = &arr[2];
//	p[1] = &arr[5];
//	p[2] = &arr[9];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *p[i]);
//
//	}
//
//	return 0;
//}

