#define _CRT_SECURE_NO_WARNINGS 1
#include<Stdio.h>
/***************
调试技巧：
调试的基本步骤
1.发现程序错误的存在
2.以隔离、消除等方式对错误进行定位
3.确定错误产生的原因
4.提出纠正错误的解决办法
5.对程序错误予以改正，重新测试

Debug 通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序。
Release 称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优
的，以便用户很好地使用。
Debug才可以调试


F5是启动调试要和F9配合使用
F9是断点
***************/

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 1 };
//    for (i = 0; i <= 9; i++)
//    {
//        arr[i] = 1;
//         printf("hehe\n");
//    }
//    return 0;
//}
// 
/************
调用堆栈
************/
//void test2()
//{
//	printf("test2\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//    
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}







