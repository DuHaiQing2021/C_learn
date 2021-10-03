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
//    //sizeof-返回值的无符号整型
//    //算术转换
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
i的初始值为0，i--结果-1，i为整形，sizeof(i)求i类型大小是4，，
但是sizeof的返回值类型实际为无符号整形，
因此编译器会自动将左侧i自动转换为无符号整形的数据，
-1对应的无符号整形是一个非常大的数字，超过4或者8，
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
求Sn=a+aa+aaa。。。求前5项之和
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

/**********************求出0～100000之间的所有“水仙花数”并输出。
“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”
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
//		//求出该数位数
//		int cot = count(temp);
//		//求出该数各位位数值
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


