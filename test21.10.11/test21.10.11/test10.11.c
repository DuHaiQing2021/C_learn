#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	//printf("%d\n", __STDC__);//��ΪVS��֧��ANSI C,��ʵ__STDC__δ����
//	//gcc ��֧�ֵ�
//	//gcc��C�����﷨��֧�ַǳ���
//
//	return 0;
//}


//#define �����ʶ������
//#define �����

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
////int_t ��������
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
//	//Ԥ������滻Ϊ
//	int *p1, p2;//p1��ָ�룬p2�����ε�
//	ptr_t2 p3, p4;//p3��p4����ָ������
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
//	int b = a + 1;//b�õ�����11��a����
//	int b = ++a;//b�õ�����11������a���ˣ�������ʽ���и����õ�
//
//	return 0;
//}

////���ʵ�� - 1
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
////������ʵ�� - 2
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 8;
//	//��Ĳ����ǲ�����ֱ���滻��ȥ��
//	//�滻��ȥ��ȥ���������
//
//	//int m = MAX(a++, b++);
//	//int m = ((a++) > (b++) ? (a++) : (b++));
//	//�����Ĳ����Ǽ�����ٴ���ȥ��
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


//���ʵ�� - 1
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
////������ʵ�� - 2
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
////���з���
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

//��������ָ���ǣ�������������Ͳ�����룬����������������Ͳ��������
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
//	//�жϷ����Ƿ񱻶���
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

//�Լ������Լ������ͷ�ļ�ʹ��""
//1���������ڵ�ǰ���̵�Ŀ¼�²���
//2�������һ���Ҳ�������ȥ�⺯����Ŀ¼�²���

//������Ŀ¼�µ�ͷ�ļ�ʱʹ�õ�<>
//ֱ��ȥ�⺯�����ڵ�Ŀ¼�²���


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
