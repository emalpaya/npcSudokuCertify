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
#include <string>
#include <vector>
#include "Menu.hpp"
#include "GetInt.hpp"
#include "Board.hpp"
using std::cout;
using std::cin;
using std::string;
using std::endl;

/*
 * Description: Game class
 * Author: Eva Malpaya
 * Date Created: 12/10/2019
 * Date Modified: 11/28/2020
 * This class serves as a driver for the sudoku game.
 * It displays the default board, user progress board,
 * allows the user to add or change a value on the board,
 * and submit a board for solution certification.
 * It utilizes a polynomial time algorithm to verify
 * the NP-Complete Sudoku puzzle.
 *
 */
class Game
{

    private:
        Menu menu; // displays options to user
        GetInt getInteger; // input validator
        int userChoice; // holds user's choices
        Board defaultBoard; // default board for user to see
        Board userBoard; // working copy of board showing user's progress
        std::vector<int> countValues; // bool helper array to check no repetition

    public:
        // Constructor/Destructor
        Game();
        ~Game();

        // Getters
        int getUserChoice();

        // Setters
        void setUserChoice(int);

        // Gameplay
        int displayMenu();
        void driver();
        void displayBoards();
        void changeOrAddValue();
        void submitAndCheckAnswer();
        int checkUpdateable(int rowNum, int colNum);
        void resetCountValues();
        bool fillWithSolveAlgo();


};
#endif /* Game_hpp */