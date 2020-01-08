/**
 * Description: CSE 240 - Spring 2019 - Assignment 3 - Part 2
				Make a program to populate a game board with pieces and to
				move those pieces around on the board
				
				GAMEPIECE.H
 *
 * Completion Time: ~5 min
 *
 * Emma Hermick
 *
 * Version 1.0
 */



#ifndef GAMEPIECE_H
#define GAMEPIECE_H
using namespace std;

class GamePiece
{
public:
	GamePiece();
	GamePiece(char* newLabel);

	char* getLabel();
	char* toString();

//private member variable, char label[30]
private: 
	char label[30];
};

#endif