/***************************************
ɨ����Ϸ
�����Ĺ�������
***************************************/

#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE_MAX 10

//��ʼ�����
void board(char board[ROWS][COLS], int rows, int cols,char ret);

//չʾ���
void Displayboard(char board[ROWS][COLS], int row, int col);

//������
void Setmine(char mine[ROWS][COLS], int row, int col);

//����
void Findmine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);

//��Χ�׵ĸ���
int Roundmine(char mine[ROWS][COLS], int x, int y);

//�ж���
int Ismine(char show[ROWS][COLS], int row, int col);