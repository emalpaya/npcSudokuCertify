/****************************************************************
* Author: Eva Malpaya
* Date Created: 11/28/2020
* Last Modification Date: 12/7/2020
* Assignment Number: CS325 HW 8 Portfolio Project
* Filename: main.cpp
*
* Overview: This program allows the user to play an instance
*           of the NP-Complete puzzle and game, Sudoku. The
*           user may enter values into the puzzle and submit
*           for completion and verification when done.
*           The program then certifies the solution in
*           polynomial time.
*
* Input:	User input from terminal
*
* Output:	Terminal output only
*
* This program utilizes the Game, GetInt, and Menu classes
* I wrote for CS 162 in Fall 2019 quarter
* (Retrieved November 2020).
*****************************************************************/
#include <iostream>
#include "Game.hpp"

int main()
{
    Game game;

    // While user wants to play
    while (game.getUserChoice() != 2)
    {
        // Get user's choice
        game.setUserChoice(game.titleScreen());

        // if user wants to quit
        if (game.getUserChoice() == 2)
        {
            return 0;
        }
        // Otherwise, play an instance of the game
        game.playGame();
        game.setTimesPlayed(game.getTimesPlayed() + 1);
    }
}