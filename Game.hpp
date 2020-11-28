/****************************************************************
* Author: Eva Malpaya
* Date Created: 10/18/2020
* Last Modification Date: 10/19/2020
* Assignment Number: CS325 HW 3 Problem 4
* Filename: Game.hpp
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
* Original header comment block is below.
*****************************************************************/
//  Created by Eva Malpaya on 12/10/19.
//  Copyright © 2019 Eva Malpaya. All rights reserved.
 /*********************************************************************
  ** Program name: Game.hpp
  ** Author: Eva Malpaya
  ** Date: 12/10/2019
  ** Description: The implementation file for the Game class.
  ** This class serves as a driver to be called upon by main.
  ** I wanted to separate the driver from the already lengthy
  ** main class to make it usable for future programs, as well.
  ** It keeps track of the number of times a user has played,
  ** validates their input, maintains the main "title screen,"
  ** and tracks the state of the game.
  *********************************************************************/

#ifndef Game_HPP
#define Game_HPP
#include "Menu.hpp"
#include "GetInt.hpp"
using std::cout;
using std::cin;
using std::string;
using std::endl;

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