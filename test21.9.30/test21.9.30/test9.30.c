#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*******************
ָ��ļӼ�����
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
ָ��-ָ��
***************/
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	/*char ch[5] = { 0 };*/
//	//printf("%d\n",&arr[9]-&ch[0]);//eorr
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//	printf("%d\n", &arr[9] - &arr[5]);
//	//ָ��-ָ���ǰ��������ָ��ָ��ͬһ������
//	//ָ��-ָ��õ������־���ֵ��ָ���ָ��֮���Ԫ�صĸ���
//	return 0;
//}


////���ַ�������
//#include<string.h>
//int main()
//{
//	//��strlen�������ַ�������
//	char ch[] = "abcdefj";
//	int len = strlen(ch);
//	printf("%d\n", len);
//
//	//��ָ�����ַ�������
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
//	for (p = &arr[values]; p > &arr[0];)//p = &arr[values]��ʱָ�벻����Խ�磬��Ϊû������arr��ֵ
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
//	for (p = &arr[values]; p > &arr[0];)//p = &arr[values]��ʱָ�벻����Խ�磬��Ϊû������arr��ֵ
//	{
//		*--p = 0;
//	}
//	for (i = 0; i < values; i++)
//	{
//		printf("%.2f  ", arr[i]);
//	}
//	return 0;
//}

//����--��һ�������Ŀռ䣬�ŵ�����ͬ�����͵�Ԫ��
//�����С��Ԫ�����ͣ�Ԫ�ظ����й�ϵ
//int arr[10];
//ָ�루������-��һ���������ŵ�ַ
//ָ������Ĵ�С ��4��32bit��/8��64bit�����ֽڣ�byte��

//int main()
//{
//	int arr[10] = {0};
//	int size=sizeof(arr);
//	int* p=arr;
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", size);
//
//	//������ȷʵ����Ԫ�صĵ�ַ
//	//������2������
//	/*
//	1.sizeof����������--�����������������Ԫ�ص�ַ���Ǳ�ʾ��������ģ�������������������Ĵ�С����λ�����ֽڡ�
//	2.&������--�����������������Ԫ�صĵ�ַ���Ǳ�ʾ �������� �ģ��õ������������ĵ�ַ��
//	*/
//
//
//	return 0;
//}

//��ַ�ǲ��ϱ仯��
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);    //����������Ԫ�صĵ�ַ
//	printf("%p\n", arr + 1);
//	
//	printf("%p\n", &arr[0]);//ȡ����һ��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);   //ȡ����������ĵ�ַ
//	printf("%p\n", &arr + 1);//���������ַ��1������������40���ֽ����顣
//
//
//	return 0;
//}


/**********
����ָ��
**********/
//int main()
//{
//	int a = 10;      //a��4���ֽڵĿռ�
//	int* p = &a;     //p��ָ����������ָ������ĵ�ַ��
//	int** p1 = &p;   //p1�Ƕ���ָ�루���ָ������ĵ�ַ��
//	//int*** p2 = &p1; //p2������ָ�루��Ŷ���ָ�������ַ��
//	//����ָ�����ʹ��
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

