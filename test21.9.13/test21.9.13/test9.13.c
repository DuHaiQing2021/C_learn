#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>
/***************************************

��������Ϸ

*****************************************/
//void meau()
//{
//    printf("*******��������Ϸ*******\n");
//    printf("************************\n");
//    printf("*********1.into*********\n");
//    printf("*********0.exit*********\n");
//    printf("************************\n");
//}
//
//
///**********
//ʱ������ٶȣ�
//C���Կ���ʹ��time������
//
//
//***********/
//
//void game()
//{
//    /*���������*/
//    //1.���������
//    int rd = rand()%100+1;//�����0-32767�����֣������еĽ�����������Ҫ��srandԤ���趨��
//    //2.������
//    int guess;
//    printf("������֣�>>>>");
//    do
//    {
//        scanf("%d", &guess);
//        if (guess > rd)
//        {
//            printf("�´��ˣ�\n\n");
//        }
//        else if (guess < rd)
//        {
//            printf("��С�ˣ�\n\n");
//        }
//        else if (guess == rd)
//        {
//            printf("��ϲ������ˣ�\n\n");
//            break;
//        }
//    } while (guess != rd);
//    printf("��ѡ���Ƿ������Ϸ��\n");
//    printf("��ʾ��1����\t0�˳�\n");
//}
//
//int main()
//{
//    int input;
//    int tep;
//    srand((unsigned int)time(NULL));//�����������������㣬��ҪƵ������ 
//    do
//    {
//        meau();
//        printf("��ѡ��>>>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("������Ϸ\n\n\n");
//            break;
//        case 0:
//            printf("�˳���Ϸ\n\n\n");
//            break;
//        default:
//            printf("ѡ���������ѡ��\n\n\n");
//            break;
//        }
//        if (input == 1)
//        {
//           game();
//           scanf("%d", &tep);
//           while (tep)
//           {
//               game();
//               scanf("%d", &tep);
//               input = tep;
//           }
//           input = tep;
//        }
//    } while (input);
//
//
//    return 0;
//}



/****
goto���
ע�⣺goto�����ԭ�д���˳�����Ծ�����ʹ�á�
����Ҳ��Ӧ�ó����������Կ����������Ƕ�ס�
****/
//int main() 
//{
//	printf("hehe\n");
//flag:
//	printf("haha\n");
//	printf("\n");
//	printf("####\n");
//	goto flag;
//	return 0;
//}



//�ػ�����
//ֻҪ�����������������Ծ͵���ʱ1����
//1���Ӻ�͹ػ��������һ�����ڣ����룺�������͹ػ�
//cmd>>shutdown -s -t 60  //����60s�ػ�
//       shutdown -a //ȡ���ػ�
// 
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = "0";
//	system("shutdown -s -t 60");
//	printf("������һ����֮��ػ���������룺����������ȡ���ػ�\n");
//again:
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//		printf("������ȷȡ���ػ�");
//	}
//	else
//	{
//		printf("������󣬲�Ҫ�رս���");
//		goto again;
//	}
//	return 0;
//}


/*��ӡ1000--2000���������*/
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d\t", i);
//		}
//		if (i % 50 == 0)printf("\n");
//	}
//	return 0;
//}

/***��д1-100�����������г��ֶ��ٸ�����9***/
//#include<stdio.h>
//int main() 
//{
//	int i = 0;
//	int g = 0;  //��λ
//	int s = 0;  //ʮλ
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		g = i % 10;         //��λ��9
//		s = i % 100 / 10;   //ʮλ��9
//		if (9 == g)
//		{
//			sum++;
//		}
//		if (9 == s) 
//		{
//			sum++;
//		}
//	}
//	printf("9�ĸ���%d", sum);
//	return 0;
//}

/***
�������
����1/1-1/2+1/3......+1/99-1/100.
***/
//#include<stdio.h>
//int main()
//{
//	int i = 2;  //��ĸ
//	double j = -1.0; //����
//	double sum = 1.0;
//	for (i = 2; i <= 100; i++)
//	{
//		j = j * (-1);
//		sum -= (j / i);
//	}
//	printf("�������е�ֵΪ%lf", sum);
//	return 0;
//}

/****��ʮ���������ֵ***/
//#include<stdio.h>
//int main()
//{
//	int a[10] = {0};
//	int i = 0;
//	int j = 0;
//	int max;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	max = a[0];
//	for (j = 0; j < 10; j++)
//	{
//		if (max < a[j])
//		{
//			max = a[j];
//		}
//	}
//	printf("���ֵΪ��%d", max);
//	return 0;
//}



/***��ӡ9*9�˷��ھ�***/
//#include<stdio.h>
//int main()
//{
//	int i = 1;                       
//	int j = 2;
//	int sum=0; //sumΪ�˻�
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = j * i;
//			printf("%d*%d=%d\t", j, i, sum);
//			if (i == j) 
//			{
//				printf("\n");
//			}
//		}
//	}
//
//	return 0;
//}
