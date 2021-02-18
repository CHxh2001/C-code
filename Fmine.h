#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
void initboard(char board[ROWS][COLS],int row,int col,char set);
void display(char mine[ROWS][COLS],int rows,int cols);
void setmine(char board[ROWS][COLS], int row, int col);
#include<time.h>
#include<stdlib.h>
void paly(char board[ROWS][COLS], char show[ROWS][COLS], int rows,int cols);
int Count(char board[ROWS][COLS],int x, int y);
#define Setcount 80