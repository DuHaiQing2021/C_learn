/***************************************
扫雷游戏
函数的功能声明
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

//初始化面板
void board(char board[ROWS][COLS], int rows, int cols,char ret);

//展示面板
void Displayboard(char board[ROWS][COLS], int row, int col);

//布置雷
void Setmine(char mine[ROWS][COLS], int row, int col);

//排雷
void Findmine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);

//周围雷的个数
int Roundmine(char mine[ROWS][COLS], int x, int y);

//判断雷
int Ismine(char show[ROWS][COLS], int row, int col);