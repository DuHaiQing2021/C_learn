#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
// 
// 
//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//#include <stdio.h>
//int i;//0
//int main()
//{
//    i--;//-1
//    //sizeof-����ֵ���޷�������
//    //����ת��
//    //int->size_t
//
//    if (i > sizeof(i)) 
//    {
//
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
/**
i�ĳ�ʼֵΪ0��i--���-1��iΪ���Σ�sizeof(i)��i���ʹ�С��4����
����sizeof�ķ���ֵ����ʵ��Ϊ�޷������Σ�
��˱��������Զ������i�Զ�ת��Ϊ�޷������ε����ݣ�
-1��Ӧ���޷���������һ���ǳ�������֣�����4����8��
**/

//#include<stdio.h>
//void print(int *p,int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", *p++);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	print(arr, size);
//
//	return 0;
//}

/**********
��Sn=a+aa+aaa��������ǰ5��֮��
*********/
//#include<stdio.h>
//int add(int a,int n)
//{
//	int Sn = 0;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		Sn = Sn * 10+2;
//		sum += Sn;
//	}
//
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d %d", &a,&n);
//	sum = add(a,n);
//	printf("%d", sum);
//	return 0;
//}

/**********************���0��100000֮������С�ˮ�ɻ������������
��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�����
*********************************/
//#include<stdio.h>
//#include<math.h>
//int count(int i)
//{
//	int cot = 1;
//	while (i/=10)
//	{
//		cot++;
//	}
//	return cot;
//}
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		int temp = i;
//		int sum = 0;
//		//�������λ��
//		int cot = count(temp);
//		//���������λλ��ֵ
//		while (temp)
//		{
//			sum += (int) pow (temp % 10, cot);
//			temp /= 10;
//		}
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//
//}


