#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 1;
//	if (a)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			i++;
//			continue;//��������ѭ��������ִ���´�ѭ��
//		}
//		printf("%d", i);
//		i++;
//	}
//	printf("\n");
//	while (j<=10)
//	{
//		j++;
//		if (5 == j)
//		{
//			j++;
//			break;//��ֹ����ѭ��������ִ���´�ѭ��
//		}
//		printf("%d", j);
//	}
//	return 0;
//}


/*******forѭ��**********/
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			printf("%d", i);
//	}
//	return 0;
//}

//����ѭ��Ҫѭ�����ٴΣ�
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//        k++;
//    return 0;
//}

/*1--n�Ľ׳�*/
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	int n=0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("n�Ľ׳�Ϊ��%d\n", sum);
//	return 0;
//}

/*����1��+2��+3��������+10��*/
#include<stdio.h>
int main()
{
	int n = 1;
	//int i = 1;
	int ret = 1;
	int sum = 0;

	//for (n= 1; n<=4;n++)
	//{
	//	//ret = 1;
	//	//for (i = 1; i <= n; i++)
	//	//{
	//	//	ret *= i;
	//	//}
	//	//sum += ret; 
	//}
	for (n = 1; n <= 10; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}


