#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ROW 3
#define COL 3
#include <time.h>
#include <stdlib.h>
void reset(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void palyer(char board[ROW][COL], int row, int col);
void com(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);
int isfull(char board[ROW][COL], int row, int col);