#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

///****
//����
//��������seconds (0< seconds < 100,000,000)������ת����Сʱ�����Ӻ��롣
//
//����������
//һ�У�����һ����������������������
//���������
//һ�У�������������������Ϊ����������Ӧ��Сʱ����������������������Ϊ�㣩���м���һ���ո������
//ʾ��1
//���룺
//3661
//����
//�����
//1 1 1
//����
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
//����
//�Ӽ�������5��ѧ���ĳɼ����������������ǵ�ƽ���ɼ���������������һλС������
//
//����������
//һ�У���������5����������Χ0~100�����ÿո�ָ���
//���������
//һ�У����5������ƽ����������һλС������
//ʾ��1
//���룺
//75 80 43 67 96
//����
//�����
//72.2
//����
//******/
//int main()
//{
//    int a, b, c, d, e;
//    float f;//fƽ���ɼ�����
//    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//    f = (a + b + c + d + e) / 5.0;
//    printf("%.1f", f);
//    return 0;
//}




///******
//����
//������������a��b (0 < a,b < 10,000)������a����b�������̺�������
//����������
//һ�У�������������a��b������Ϊ�������ͳ�������Ϊ�㣩���м��ÿո������
//���������
//һ�У�������������������Ϊ�����̺��������м���һ���ո������
//ʾ��1
//���룺
//15 2
//�����
//7 1
//******/

//int main()
//{
//    int a, b, shang, yu;
//    scanf("%d %d", &a, &b);
//    if (a > 0 && b < 10000)
//    {
//        shang = a / b;//��a��b����
//        yu = a % b;   //��a��b����
//    }
//    printf("%d %d", shang, yu);
//    return 0;
//}




/*
д���뽫�������������Ӵ�С�����

���磺

���룺2 3 1

�����3 2 1

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
//  дһ�������ӡ1 - 100֮������3�ı���������
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
ѭ����---break--for---continue
���ͣ�---char--int---float---double---signed---unsigned--
�Զ������ͣ�enum��ö�٣�typedef(����������)


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
static ��3���÷�
1��static���ξֲ�������
��ʹ�þֲ����������Լ��ķ�ΧҲ�����٣���ʵ�Ǹı��˾ֲ��������������ڡ�
  ���������򲻱䡣
 ��

2��static����ȫ�ֱ�����
��ȫ�ֱ�����������ⲿ��������.
  ����static ����ȫ�ֱ�������ʹ��ȫ�ֱ���ʧȥ�ⲿ��������
  ����ڲ���������
  ����static���ε�ȫ�ֱ�����ֻ�����Լ����ڵ�.c�ļ���ʹ��
 ��
3��static���κ�����
��Ĭ���Ǿ����ⲿ��������
  ���Ǳ�static����֮�󣬻�ʹ�ú���ʧȥ�ⲿ��������
  ������ڲ���������
  ����staticֻ���ڱ��ļ���ʹ�ã����ܱ������ļ�ʹ��
��
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
//extern int extern_1;//�����ⲿ����extern_1
////extern int extern_2;//�����ⲿ����extern_2,����add.c���������ǰ�����static�����Դ���
//static int extern_3 = 400;//��̬ȫ�ֱ��������ڱ�Դ�ļ���ʹ�õ�����������Դ�ļ���ʹ�á�
//int main()
//{
//	printf("%d\n", extern_1);
//	//printf("%d", extern_2);
//	printf("%d\n", extern_3);
//	return 0;
//}

/*3.1*/
//extern int add(int x, int y);//�ⲿ����������
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
#define���峣���ͺ�
****/
//#include<stdio.h>
//#define num 10       //define���峣��
//#define add(x,y) ((x)+(y))//define�����
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
//	sum = add(n, m);//ʹ��#define�궨��add
//	printf("%d\n", sum);
//
//	sum_1 = add_1(n, m);//ʹ���Զ��庯��add_1
//	printf("%d\n", sum_1);
//	return 0;
//
//}

/****
ָ����
ע��%p--��ַ����ַ��16���Ʊ�ʾ��ʽ
***/

//#include<stdio.h>
//int main() {
//	int a = 10;
//
//	printf("%p\n", &a);
//	//&a��ʱ��ȡ����a��ռ�ڴ���4���ֽ��е�һ���ֽڵĵ�ַ
// 	int* p = &a;//int* p��һ������ָ�������*��������������һ��ָ��
//	if (*p == 10)printf("******\n");//�����*p��ָp�ĵ�ַ���� �õ�ָ����ָ�ĵ�ַ�д�ŵ�ֵ
//	*p = 20;//��ʱ*p��ָa��ַ�������ֵ10��20����
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	return 0;
//}











