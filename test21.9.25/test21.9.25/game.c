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
void Findmine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("�������Ų����꣺>>>");
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
					printf("�������Ѿ��ҵ���\n\n");
					break;
				}

			}
			else
			{
				printf("�㱻ը���ˣ�\n\n");
			}
		}
		else
		{
			printf("������Χ������������\n\n");
		}

	}

}

//�����Χ�׸���
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

//�ҳ�����
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