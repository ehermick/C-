/**
 * Description: CSE 240 - Spring 2019 - Assignment 3 - Part 2
				Make a program to populate a game board with pieces and to
				move those pieces around on the board
				
				GAMEBOARD.CPP
 *
 * Completion Time: ~ 4 hours
 *
 * Emma Hermick
 *
 * Version 1.0
 */

#include "gameboard.h"
#include "gamepiece.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

 //Instantiates 2D array "board" to size rows, columns
GameBoard::GameBoard(int rows, int cols)
{
    this -> rows = rows;
    this -> columns = cols;
    
    this -> board = new GamePiece*[rows];
    
    for (int r = 0; r < rows; r++)
    {
        this -> board[rows] = new GamePiece[cols];
    }
}

//Checks if parameters row and col are valid
bool GameBoard::isSpaceValid(int row, int col)
{
	//if at least one of the parameters row or col is less than
	//0 or larger than the last index of the array
	if (row < 0 || col < 0 || row >= rows || col >= columns)
	{
		//Then it returns 0 (false)
		return 0;
	}

	//Otherwise it returns 1 (true)
	else
	{
		return 1;
	}
}

//Validates space specified by row and col is valid and unoccupied
bool GameBoard::addPiece(GamePiece piece, int row, int col)
{
	//Space is valid and not occupied(has default label)
	if (strcmp(this -> board [row][col].getLabel(), "---") == 0
		&& (isSpaceValid(row, col) == 1))
	{
		//If space is valid and not occupied then space should be replaced
		//by the parameter "piece" and method returns 1 (true)
		this -> board[row][col] = piece;
		return 1;
	}

	//Otherwise returns 0 (false)
	else
	{
	    return 0;
	}
}

//Replaces dest with src, and replaces src with default
bool GameBoard::movePiece(int srcRow, int srcCol, int destRow, int destCol)
{
    //Validates that both src and dest spaces are valid & dest space unoccupied
    if  ((isSpaceValid(srcRow, srcCol) == 1)
		&& (strcmp(this -> board [destRow][destCol].getLabel(), "---") == 0)
		&& (isSpaceValid(destRow, destCol) == 1))
    {
        //Piece located at (srcRow, srcCol) moved to (destRow, destCol)
        this -> board[destRow][destCol] = this -> board[srcRow][srcCol];
        
        //Space at (srcRow, srcCol) replaced by default
        board[srcRow][srcCol] = "---";
        
        //Returns true (1)
        return 1;
    }
    
	//Otherwise return false (0)
	else
	{
		return 0;
	}
}

//Prints information of the "board"
void GameBoard::print()
{
    string str = "The GameBoard \n -------------------- \n";

	for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < columns; c++)
		{
			str = str + board[r][c].toString() + " ";
		}
		cout << str << "\n";

	}
}