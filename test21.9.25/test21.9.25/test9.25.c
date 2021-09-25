/*************************************
扫雷游戏
测试版
*************************************/
#include"game.h"

void game()
{
	char mine[ROWS][COLS] = {0};   //存放雷的面板信息
	char show[ROWS][COLS] = {0};   //排查出雷的面板信息 
	//初始化面板
	board(mine, ROWS, COLS,'0');
	board(show, ROWS, COLS,'*');
	//展示面板
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//布置雷
	Setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//排雷
	Findmine(show, mine, ROW, COL);
}

menu()
{
	printf("**************   扫雷游戏   ***************\n");
	printf("*******************************************\n");
	printf("****************  1.play  *****************\n");	
	printf("****************  0.exit  *****************\n");
	printf("*******************************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned) time(NULL));
	do
	{
		menu();
		printf("请选择>>>");
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
			printf("输入错误，重新选择\n");
		}
		if (input == 1)
		{
			game();


		}

	} while (input);



	return 0;
}
