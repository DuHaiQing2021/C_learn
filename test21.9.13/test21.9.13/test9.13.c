#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>
/***************************************

猜数字游戏

*****************************************/
//void meau()
//{
//    printf("*******猜数字游戏*******\n");
//    printf("************************\n");
//    printf("*********1.into*********\n");
//    printf("*********0.exit*********\n");
//    printf("************************\n");
//}
//
//
///**********
//时间戳（百度）
//C语言可以使用time函数；
//
//
//***********/
//
//void game()
//{
//    /*生成随机数*/
//    //1.生成随机数
//    int rd = rand()%100+1;//这个是0-32767的数字，但运行的结果是有序的需要用srand预先设定。
//    //2.猜数字
//    int guess;
//    printf("请猜数字：>>>>");
//    do
//    {
//        scanf("%d", &guess);
//        if (guess > rd)
//        {
//            printf("猜大了！\n\n");
//        }
//        else if (guess < rd)
//        {
//            printf("猜小了！\n\n");
//        }
//        else if (guess == rd)
//        {
//            printf("恭喜你猜中了！\n\n");
//            break;
//        }
//    } while (guess != rd);
//    printf("请选择是否继续游戏：\n");
//    printf("提示：1继续\t0退出\n");
//}
//
//int main()
//{
//    int input;
//    int tep;
//    srand((unsigned int)time(NULL));//设置随机数的生成起点，不要频繁调用 
//    do
//    {
//        meau();
//        printf("请选择：>>>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("进入游戏\n\n\n");
//            break;
//        case 0:
//            printf("退出游戏\n\n\n");
//            break;
//        default:
//            printf("选择错误，重新选择\n\n\n");
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
goto语句
注意：goto会打乱原有代码顺序，所以尽量少使用。
但它也有应用场景，它可以快速跳出多层嵌套。
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



//关机程序
//只要程序运行起来，电脑就倒计时1分钟
//1分钟后就关机，如果在一分钟内，输入：我是猪，就关机
//cmd>>shutdown -s -t 60  //设置60s关机
//       shutdown -a //取消关机
// 
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = "0";
//	system("shutdown -s -t 60");
//	printf("电脑在一分钟之后关机，如果输入：“我是猪”就取消关机\n");
//again:
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");
//		printf("密码正确取消关机");
//	}
//	else
//	{
//		printf("密码错误，不要关闭界面");
//		goto again;
//	}
//	return 0;
//}


/*打印1000--2000的闰年年份*/
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

/***编写1-100的所有整数中出现多少个数字9***/
//#include<stdio.h>
//int main() 
//{
//	int i = 0;
//	int g = 0;  //个位
//	int s = 0;  //十位
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		g = i % 10;         //个位的9
//		s = i % 100 / 10;   //十位的9
//		if (9 == g)
//		{
//			sum++;
//		}
//		if (9 == s) 
//		{
//			sum++;
//		}
//	}
//	printf("9的个数%d", sum);
//	return 0;
//}

/***
分数求和
计算1/1-1/2+1/3......+1/99-1/100.
***/
//#include<stdio.h>
//int main()
//{
//	int i = 2;  //分母
//	double j = -1.0; //分子
//	double sum = 1.0;
//	for (i = 2; i <= 100; i++)
//	{
//		j = j * (-1);
//		sum -= (j / i);
//	}
//	printf("分数数列的值为%lf", sum);
//	return 0;
//}

/****求十个数的最大值***/
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
//	printf("最大值为：%d", max);
//	return 0;
//}



/***打印9*9乘法口诀***/
//#include<stdio.h>
//int main()
//{
//	int i = 1;                       
//	int j = 2;
//	int sum=0; //sum为乘积
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
