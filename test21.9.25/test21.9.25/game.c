/***************************
ɨ����Ϸ
�����Ĺ��ܶ���
****************************/
#include"game.h"

//��ʼ�����
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


//չʾ���
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

//������
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

//����
void Finemine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = MINE_MAX;
	while (1)
	{
		printf("�������Ų����꣺>>>");
		scanf(% d % d, &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0')
			{
				Roundmine(mine[x][y], row, col);
			}
		}
		else
		{
			printf("������Χ������������\n\n");
		}

	}

}

//�����Χ�׸���
Roundmine(char mine[][y], int row, int col)
{


}