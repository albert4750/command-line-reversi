#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void initializeBoard(int dim, char mat[][dim]);
void printBoard(int dim, char board[][26]);
bool positionInBounds(int dim, int row, int col);
bool checkLegalInDirection(int dim, char board[][26], char color, int row, int col, int deltaRow, int deltaCol);
void dropChange(int dim, char board[][26], char color, char row, char col);
void oKmove(int dim, char board[][26], char color, int go[][dim]);
int moves(int dim, int go[][dim]);
int checkScore(int dim, char board[][26], char color, int row, int col);	//check score gives the go[][] in oKmove value
void cpuDetermine(int dim, int initial[][dim], int enemy[][dim], char *row, char *col);
void cpuDetermineE(int dim, int yours[][dim], char *row, char *col);
void printNBoard(int dim, int board[][26]);

int main(int argc, char **argv){

	// runs the game through collection of functions
	// will take user input in exact form only, did not write exception statements

	return 0;
}

void oKmove(int dim, char board[][26], char color, int go[][dim]){
	// function to determine where is it ok on the board for a color to place its
	// piece
}

int moves(int dim, int go[][dim]){
	// determine turns
}

int checkScore(int dim, char board[][26], char color, int row, int col){  //return the number to be assigned in the go matrix
	// used in move to determine whether it is legal to play here for a color
}

void cpuDetermine(int dim, int initial[][dim], int enemy[][dim], char *row, char *col){
	// algorithm for computer to decide where to put it
}

void cpuDetermineE(int dim, int go[][dim], char *row, char *col){
	// dumber computer
}

// |
// v     from lab 7, shud be right

void initializeBoard(int dim, char mat[][26]){					//initializes board
	// set game board
}

void printBoard(int dim, char board[][26]){						//print out board
	// print game board
}

bool positionInBounds(int dim, int row, int col){					//check if postion in bound, row and col is according board
	// determine whether postion entered is on the board
}

bool checkLegalInDirection(int dim, char board[][26], char color, int row, int col, int deltaRow, int deltaCol){
	// check if its legal for the piece to to dropped at that place for one of its 8 possible direction around
}

void dropChange(int dim, char board[][26], char color, char row, char col){		//drop and flip, row and col according abc
	// drop the piece and flip the pieces that are pinched in middle of two same color piece
}

void printNBoard(int dim, int board[][dim]){						//print out board
	// print out board with a slightly different argument
}
