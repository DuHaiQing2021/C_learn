/*************************************
ɨ����Ϸ
���԰�
*************************************/
#include"game.h"

void game()
{
	char mine[ROWS][COLS] = {0};   //����׵������Ϣ
	char show[ROWS][COLS] = {0};   //�Ų���׵������Ϣ 
	//��ʼ�����
	board(mine, ROWS, COLS,'0');
	board(show, ROWS, COLS,'*');
	//չʾ���
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//����
	Findmine(show, mine, ROW, COL);
}

menu()
{
	printf("**************   ɨ����Ϸ   ***************\n");
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
		printf("��ѡ��>>>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("������Ϸ\n");
			break;
		default:
			printf("�����������ѡ��\n");
		}
		if (input == 1)
		{
			game();


		}

	} while (input);



	return 0;
}
