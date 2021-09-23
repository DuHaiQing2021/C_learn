#define _CRT_SECURE_NO_WARNINGS 1


#include<Stdio.h>

//冒泡排序
//void order(int* arr,int len)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len-1; i++)
//	{
//		for (j = 0; j < len- 1- i; j++)
//		{
//			if (arr[j] > *(arr+j+1))         //arr[j]== *(arr+j)
//			{
//				int temp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = temp;
//			}
//		}
//	}
//}
//
//void print(int* p,int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *p++);
//	}
//}
//int main()
//{
//	int arr[10] = { 0,55,65,1,2,7,6,22,11,10 };
//	int len = 0;
//	int i = 0;
//	len = sizeof(arr) / sizeof(arr[0]);
//	order(arr, len);
//	print(arr,len);
//	return 0;
//}

/****************
三子棋
***************/
#include"game.h"

menu()
{
	printf("****************   三子棋    *****************\n");
	printf("**********************************************\n");
	printf("****************   1.play   ******************\n");
	printf("****************   0.exit   ******************\n");
	printf("**********************************************\n");
}
void game()
{
	char Win = 0;
	char board[ROW][COL];   //棋盘数组

	//初始化棋盘
	InitBoard(board, ROW , COL);
	
	//打印棋盘
	Disboard(board, ROW, COL);

	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		Disboard(board, ROW, COL);
	    Win=IsWin(board, ROW, COL);
		if (Win !='J')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		Disboard(board, ROW, COL);
		Win = IsWin(board, ROW, COL);
		if (Win != 'J')
		{
			break;
		}
	}
	if (Win == '*')
	{
		printf("玩家胜出！\n");
	}
	else if (Win == '#')
	{
		printf("电脑胜出！\n");
	}
	else 
	{
		printf("平局！\n");
	}

}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择(1 or 0)>>>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("进入游戏\n");
			break;
		default:
			printf("选择错误 请重新选择\n");
		}
		if (input == 1)
		{
			game();
		}

	} while (input);
	return 0;
}