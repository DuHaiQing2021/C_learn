#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//void test1(int* arr[])
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//
//
//}
////同上等价
//void test2(int** p)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", **(p+i));
//	}
//}
//int main()
//{
//	int arr_p[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* arr[3] = {arr_p,arr_p+3,arr_p+5 };
//	test1(arr);
//	printf("\n");
//	test2(arr);
//
//	return 0;
//}
//void test(int(*p)[5], int a, int b)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", *(*(p+i)+j));
//		}
//		printf("\n");
//	}
//
//
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	test(arr, 3, 5);
//
//	return 0;
//}

//
//void test(int(*p)[5], int a, int b)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", *(*(p+i)+j));
//		}
//		printf("\n");
//	}
//
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	test(arr, 3, 5);
//
//	return 0;
//}