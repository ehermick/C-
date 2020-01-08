/**
 * Description: CSE 240 - Spring 2019 - Assignment 3 - Part 2
				Make a program to populate a game board with pieces and to
				move those pieces around on the board
				
				GAMEBOARD.H
 *
 * Completion Time: ~ 5 min
 *
 * Emma Hermick
 *
 * Version 1.0
 */



#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include "gamepiece.h"

class GameBoard
{
public:
	GameBoard(int rows, int cols);

	bool isSpaceValid(int row, int col);
	bool addPiece(GamePiece piece, int row, int col);
	bool movePiece(int srcRow, int srcCol, int destRow, int destCol);
	void print();
	
//private member variables added
private:
    GamePiece **board;
    int rows;
    int columns;
    
};

#endif