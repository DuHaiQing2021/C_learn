/***************************
扫雷游戏
函数的功能定义
****************************/
#include"game.h"

//初始化面板
void board(char board[ROWS][COLS], int rows, int cols,char ret)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}
}


//展示面板
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------------------------------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------------------------------\n");
}

//布置雷
void Setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = MINE_MAX;

	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}


}

//排雷
void Findmine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("请输入排查坐标：>>>");
		scanf("%d %d", & x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0')
			{
				show[x][y] = Roundmine(mine, x, y) + '0';
				Displayboard(show, row, col);
				int ret=Ismine(show,row, col);
				if (ret == MINE_MAX)
				{
					printf("所有雷已经找到！\n\n");
					break;
				}

			}
			else
			{
				printf("你被炸死了！\n\n");
			}
		}
		else
		{
			printf("超出范围，请重新输入\n\n");
		}

	}

}

//检查周围雷个数
int Roundmine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}

//找出的雷
int Ismine(char show[ROWS][COLS],int row, int col)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if(show[i][j]=='*')
			{
				count++;
			}

		}
	}
	return count;

}