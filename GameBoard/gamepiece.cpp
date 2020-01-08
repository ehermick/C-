/**
 * Description: CSE 240 - Spring 2019 - Assignment 3 - Part 2
				Make a program to populate a game board with pieces and to
				move those pieces around on the board
				
				GAMEPIECE.CPP
 *
 * Completion Time: ~ 1 hour
 *
 * Emma Hermick
 *
 * Version 1.0
 */




#include "gamepiece.h"
#include <stdio.h>
#include <string.h>

using namespace std;

 //Assign the default string to game piece's label
GamePiece::GamePiece()
{
	strcpy(this -> label, "---");
}

//Assign the gamepiece label with newLabel provided
GamePiece::GamePiece(char* newLabel)
{
	strcpy(this -> label, newLabel);
}

//Return the piece's label
char* GamePiece::getLabel()
{
	return this ->label;
}

//Constructs a string of length 3 from piece's label
char* GamePiece::toString()
{
	//If label shorter than 3, add spaces to label
	if (sizeof(label) < 3)
	{
	    if (sizeof(label) == 2)
	    {
	        this -> label == label, "-";
	    }
	    
	    if (sizeof(label) == 1)
	    {
	        this -> label == label, "--";
	    }
	}
	
    //If label longer than 3, use first 3 characters
	if (sizeof(label) > 3)
	{
	    for(int i = 0; i < 3; i++)
	    {
	        label == label + label[i];
	    }
	}

	return label;
}