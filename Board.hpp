//  Created by Eva Malpaya on 12/7/20.
//  Copyright � 2020 Eva Malpaya. All rights reserved.
/****************************************************************
* Author: Eva Malpaya
* Date Created: 11/28/2020
* Last Modification Date: 12/7/2020
* Assignment Number: CS325 HW 8 Portfolio Project
* Filename: Board.hpp
*
* Overview: This program allows the user to play an instance
*           of the NP-Complete puzzle and Board, Sudoku. The
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
#ifndef Board_HPP
#define Board_HPP
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
#include <typeinfo>
#include <vector>
#include "GetInt.hpp"
#include "Board.hpp"
using std::cout;
using std::cin;
using std::string;
using std::endl;

/*
 * Description: Board class
 */
class Board
{

private:
    std::vector<std::vector<int>> board; // 2D vector to hold board

public:
    // Constructor/Destructor
    Board();
    ~Board();

    int getValue(int rowNum, int colNum);
    void setValue(int rowNum, int colNum, int value);

    void displayBoard();
    int isEmptyValues();
};
#endif /* Board_hpp */