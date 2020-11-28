/****************************************************************
* Author: Eva Malpaya
* Date Created: 10/18/2020
* Last Modification Date: 10/19/2020
* Assignment Number: CS325 HW 3 Problem 4
* Filename: main.cpp
*
* Overview: This program calculates which items a family
*           should choose based on its price, weight, and
*           maximum weight they can carry to in order
*           to maximize their total profits for a shopping
*           spree.
*           It utilizes the bottom-up or tableization method
*           learned this week for dynamic programming.
*
* Input:	shopping.txt
*
* Output:	results.txt
*
* This program utilizes the Game, GetInt, and Menu classes
* I wrote for CS 162 in Fall 2019 quarter
* (Retrieved October 2020).
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