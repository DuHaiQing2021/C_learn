#define _CRT_SECURE_NO_WARNINGS 1

/***************
��һ������
�������6���Ƶ���ʽ���
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
С����������ÿ12����һ��
һ���ܹ���Ҫ����4���ӣ���ȥ2���ӣ�����2���ӣ�
������n���˵ȵ���
��С������Ҫ�೤ʱ����¥
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
С������Ҫ��������������n��m�������Լ������С��������
�������Լ������С������֮��
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
//	//���Լ��
//	while (temp=m2%n2)
//	{
//		m2 = n2;
//		n2 = temp;
//	}
//	long long max = n2;
//	//��С������
//	long long min = m * n / max;
//	long long sum = max + min;
//	printf("%lld", sum);
//	return 0;
//}


/************
�������룬ÿ���������һ���ַ�
�жϸ��ַ��Ƿ�Ϊ��ĸ���ǣ�Yes����No��
************/
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();//��������
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
//		getchar();//��������
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
��ѭ����ӡ��*����ɵġ����ġ�������ͼ��
���������롱һ��������������ʾ����Ҳ��ʾ�����αߡ�*��������
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
 ����Ա����
 �ֳ���֣�����λ���٣�ÿ��7��������ȥ����������ƽ��ֵ
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
ð������
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
//��������a������b������
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
//	printf("a�����ֵ��%s\nb�����ֵ��%s\n\n", a, b);
//	exchange(a, b);
//	printf("a�����ֵ��%s\nb�����ֵ��%s\n\n", a, b);
//	return 0;
//}