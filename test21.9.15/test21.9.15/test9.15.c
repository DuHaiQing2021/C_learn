#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
///***���������������Լ��**/
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int m = 0;
//	scanf("%d %d", &x, &y);
//	//int min = x < y ? x : y;
//	//for (m = min; m >= 1; m--)
//	//{
//	//	if (x % m == 0 && y % m == 0)
//	//	{
//	//		break;
//	//	}
//	//	else printf("û�����Լ��"); 
//	//}
//	/***շת�����***/
//	while (m = x % y)
//	{
//		x = y;
//		y = m;
//	}
//	printf("���Լ��%d\n", y);
//
//	return 0;
//}
       /*��ӡ1000--2000���������*/

//#include<stdio.h>

//int main()
//
//{
//    int i = 0;
//    int num = 0;
//    for (i = 1000; i <= 2000; i++)
//    {
//        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//
//        {
//            printf("%d\t", i);
//            num++;
//        }
//        if (i % 50 == 0)
//        {
//            printf("\n");
//        }
//    }
//    printf("�����ж��ٸ�%d", num);
//    return 0;
//
//}


/****
�ú�������ʽ�ж�����
****/
//#include<stdio.h>
//int judge(int year)
//{
//    int flag = 0;
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//    {
//        flag = 1;
//    }
//    return flag;
//}
//int main()
//{
//    int year=0;
//    int flag = 0;
//    scanf("%d", &year);
//    flag = judge(year);
//    if (flag == 1)
//    {
//        printf("%d  ����������\n", year);
//    }
//    if (flag == 0)
//    {
//        printf("%d  ���겻������\n",year);
//    }
//    return 0;
//}


/**************
дһ�����룻��ӡ100~200֮�������
**************/
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 101; i <= 200; i+=2)//�������ᱻ������
//    {
//        int j = 0;
//        int flag = 1;
//        for (j = 2; j <= sqrt(i); j++)//sqrt�����ź���
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//
//        }
//        if (flag == 1)
//        {
//            printf("%d\t", i);
//            count++;
//
//        }
//
//    }
//    printf("\n100��200֮���������%d��\n", count);
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int judge(int z)
//{
//    int n = 0;
//    int flag = 1;
//    for (n = 2; n <= sqrt(z); n++)
//    {
//        if (z % n == 0)
//        {
//            flag = 0;
//            break;
//        }
//    }
//    return flag;
//}
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int flag = 0;
//    int count = 0;
//    for (i = 101; i <= 200; i += 2)
//    {
//        flag = judge(i);
//        if(1==flag)
//        {
//            printf("%d\t", i);
//            count++;
//        }  
//    }
//    printf("\n100��200����%d������\n", count);
//    return 0;
//}



/*****
ʹ�ö��ֲ���
*****/
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int left = 0;      //��߽�
//    int right = 9;     //�б߽�
//    int mid = 0;       //�м���
//    int x = 0;         //���ҵ�����
//    scanf("%d", &x);
//    while (left<=right)
//    {
//        mid = (left+right)/2;
//        if (x >arr[mid])
//        {
//            left = mid + 1;
//        }
//        if (x < arr[mid])
//        {
//            right = mid - 1;
//        }
//        if (x == arr[mid])
//        {
//            printf("�ҵ��ˣ��������±�Ϊ%d\n",mid);
//            break;
//        }
//    }
//    if (left > right) 
//    {
//        printf("�Ҳ���\n");
//    }
//    return 0;
//}

/********
�ú���������������
*******/
//#include<stdio.h>
//void change(int* p1,int* p2)
//{
//    int t = 0;
//    t = *p1;
//    *p1 = *p2;
//    *p2 = t;
//
//}
//int main()
//{
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &x, &y);
//    change(&x, &y);
//    printf("%d %d\n", x, y);
//    return 0;
//}

/*********
�˷��ھ�
����12 ��ӡ12*12
**********/
//#include<stdio.h>
//void cheng(int n)
//{
//    int i = 1;
//    int j = 1;
//    int sum = 0;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            sum = i * j;
//            printf("%d*%d=%d\t", j, i, sum);
//            if (i == j)
//            {
//                printf("\n");
//            }
//        }
//    }
//}
//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    cheng(x);
//    return 0;
//}
