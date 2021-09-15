#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
///***给定两个数求最大公约数**/
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
//	//	else printf("没有最大公约数"); 
//	//}
//	/***辗转相除法***/
//	while (m = x % y)
//	{
//		x = y;
//		y = m;
//	}
//	printf("最大公约数%d\n", y);
//
//	return 0;
//}
       /*打印1000--2000的闰年年份*/

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
//    printf("闰年有多少个%d", num);
//    return 0;
//
//}


/****
用函数的形式判断闰年
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
//        printf("%d  该年是闰年\n", year);
//    }
//    if (flag == 0)
//    {
//        printf("%d  该年不是闰年\n",year);
//    }
//    return 0;
//}


/**************
写一个代码；打印100~200之间的素数
**************/
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 101; i <= 200; i+=2)//素数不会被二整除
//    {
//        int j = 0;
//        int flag = 1;
//        for (j = 2; j <= sqrt(i); j++)//sqrt开根号函数
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
//    printf("\n100到200之间的素数有%d个\n", count);
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
//    printf("\n100到200中有%d个素数\n", count);
//    return 0;
//}



/*****
使用二分查找
*****/
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int left = 0;      //左边界
//    int right = 9;     //有边界
//    int mid = 0;       //中间量
//    int x = 0;         //查找的数字
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
//            printf("找到了，该数的下标为%d\n",mid);
//            break;
//        }
//    }
//    if (left > right) 
//    {
//        printf("找不到\n");
//    }
//    return 0;
//}

/********
用函数交换两个整数
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
乘法口诀
输入12 打印12*12
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
