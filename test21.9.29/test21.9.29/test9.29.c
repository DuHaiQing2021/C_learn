#define _CRT_SECURE_NO_WARNINGS 1       

//#include<Stdio.h>
//int main()
//{
//	char a = 3;              
//	//00000000000000000000000000000011
//	//a-00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//b-01111111
//
//	char c = a + b;    
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//c--10000010
//	printf("%d", c);
//	//11111111111111111111111110000010--c��������������
//	//10000000000000000000000001111110--c��ԭ�루-126��
//	return 0;
//}

/******************
��ַָ����

******************/

//010110
//100001
//110111
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int count = 0;
//    int p = 0;
//    scanf("%d %d", &a, &b);
//    int temp = a ^ b;
//    while (temp != 0)
//    {
//        p = temp % 2;
//        if (p == 1)
//        {
//            count++;
//        }
//        temp /= 2;
//    }
//    printf("%d", count);
//
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int sum_j = 0;    //��ʾ����
//	int sum_o = 0;    //��ʾż��
//	int temp = 0;
//	int i = 0;
//	int Bin[20] = { 0 };
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		
//		temp = num % 2;
//		Bin[i] = temp;
//		if (temp == 1)
//		{
//			sum_j++;
//		}
//		else
//		{
//			sum_o++;
//		}
//		
//		num /= 2;
//		i++;
//	}
//	i--;
//	while (i>=0)
//	{
//		printf("%d", Bin[i]);
//		i--;
//	}
//	printf("\n");
//	printf("������������������%d\tż������%d\n", sum_j, sum_o);
//
//	return 0;
//}



//#include<Stdio.h>
//int Bin(int num)
//{
//	int temp = 0;
//	int count = 0;
//	while (num != 0)
//	{
//		temp = num % 2;
//		if (temp == 1)
//		{
//			count++;
//		}
//		num /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	scanf("%d", &num);
//	sum = Bin(num);
//	printf("������1�ĸ���Ϊ%d��\n", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("x=%d y=%d", &x, &y);
//
//	x = x ^ y;
//	y = x ^ y;
//	x = x ^ y;
//	printf("x=%d y=%d", x, y);
//
//	return 0;
//}