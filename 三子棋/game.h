#pragma once
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define COW 6
#define VER 6

void InitBoard(char board[COW][VER], int cow, int ver);

void Displayboard(char board[COW][VER], int cow, int ver);

void Playermove(char board[COW][VER], int cow, int ver);

void Computermove(char board[COW][VER], int cow, int ver);

char Judgegame(char board[COW][VER], int cow, int ver);

int  Draw(char board[COW][VER], int cow, int ver);