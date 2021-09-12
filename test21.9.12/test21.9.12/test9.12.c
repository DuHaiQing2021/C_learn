#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
/*****折半查找******/
//void found(int* arr, int k,int size)
//{
//	int left = 0;
//	int right = size - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)       //1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if (arr[mid] == k)
//		{
//			printf("找到了,下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	found(arr, k, size);
//
//	return 0;
//}

/*
welcome to bit!!!!!
###################
w#################!
we###############!!
wel#############!!!
............
*/
//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char arr_1[] = { "welcome to bit!!!!!" };
//	char arr_2[] = { "###################" };
//	int left = 0;
//	int right = strlen(arr_1) - 1;
//	printf("%s\n%s\n", arr_1, arr_2);
//	while (left <= right)
//	{
//		arr_2[left] = arr_1[left];
//		arr_2[right] = arr_1[right];
//		printf("%s\n", arr_2);
//		Sleep(1000);//停1秒“Sleep”这个要大写开头，windows自带的时间停止函数
//		system("cls");//执行系统命令（清空屏幕）
//        left++;
//		right--;
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char password[] = "asa123456";
//	int i = 1;
//	printf("请输入密码：\n");
//	for (i = 1; i <= 3; i++)
//	{
//		scanf("%s", password);
//		if (strcmp(password, "asa123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else printf("密码错误\n");
//		if (3 == i)
//			printf("三次密码错误，退出登录。\n");
//	}
//	return 0;
//}

/******猜数字游戏****/
/*
1.电脑随机生成一个1-100的数字；
2.玩家猜数字：
      如果猜对了，就提示猜对了
      如果猜错了，就提示猜错了
      如果猜错了，提示：猜大了或者猜小了
3，可重复玩
*/

//#include<stdio.h>
//#include<stdlib.h>
//void meau() 
//{
//    printf("*******猜数字游戏*******\n");
//    printf("************************\n");
//    printf("*********1.into*********\n");
//    printf("*********0.exit*********\n");
//    printf("************************\n");
//}
//void game()
//{
//    int rd = rand();
//    printf("%d\n", rd);
//
//}
//
//int main()
//{ 
//    int input;
//    do 
//    {
//        meau();
//        printf("请选择：>>>");   
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("\n进入游戏\n\n\n");
//            break;
//        case 0:
//            printf("\n退出游戏\n\n\n");
//            break;
//        default:
//            printf("\n选择错误，重新选择\n\n\n");
//            break;
//        }
//        if (input == 1)
//        {
//            game();
//        }
//    } while (input);
//  
//
//    return 0;
//}