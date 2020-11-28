//  Created by Eva Malpaya on 12/7/20.
//  Copyright © 2020 Eva Malpaya. All rights reserved.
/****************************************************************
* Author: Eva Malpaya
* Date Created: 11/28/2020
* Last Modification Date: 12/7/2020
* Assignment Number: CS325 HW 8 Portfolio Project
* Filename: Game.hpp
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
#ifndef Game_HPP
#define Game_HPP
#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>
#include <algorithm> 
#include "Menu.hpp"
#include "GetInt.hpp"
using std::cout;
using std::cin;
using std::string;
using std::endl;

/*
 * Description: Game class
 * Author: Eva Malpaya
 * Date: 12/10/2019
 * This class serves as a driver to be called upon by main.
 * It keeps track of the number of times a user has played,
 * validates their input, maintains the main "title screen,"
 * and tracks the state of the game.
 */
class Game
{

    private:
        Menu menu;
        GetInt getInteger;
        int userChoice;
        int timesPlayed;

    public:
        // Constructor/Destructor
        Game();
        ~Game();

        // Getters
        int getUserChoice();
        int getTimesPlayed();

        // Setters
        void setUserChoice(int);
        void setTimesPlayed(int);

        // Gameplay
        int titleScreen();
        void gameIntro();
        void playGame();

        // Helper
        void printArray(int* array, int size);
        void printChoices(int* array, int size);
        void printArrayResults(int* array, int size);
        void print2DVector(std::vector<std::vector<std::string>> inputTemp);
        std::vector<std::vector<std::string>> readInputFile(string inputFileName, std::vector<std::vector<std::string>> inputTemp);
        void goShopping(int numberOfItems, int* prices, int* weights, int maxWeight, int** maxProfit);
        void backTrace(int numberOfItems, int* prices, int* weights, int maxWeight, int** maxProfit, int* choices);
};
#endif /* Game_hpp */