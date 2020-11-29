//  Created by Eva Malpaya on 12/7/20.
//  Copyright © 2020 Eva Malpaya. All rights reserved.
/****************************************************************
* Author: Eva Malpaya
* Date Created: 11/28/2020
* Last Modification Date: 12/7/2020
* Assignment Number: CS325 HW 8 Portfolio Project
* Filename: Board.cpp
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
#include "Board.hpp"

/*
 * Description: Board class
 */

Board::Board()
{
    std::vector<int> rowTemp;

    /* initialize the board */

    // add the 9 columns
    for (int i = 0; i < 9; i++)
    {
        rowTemp.push_back(-1);
    }

    // add the 9 rows
    for (int j = 0; j < 9; j++)
    {
        board.push_back(rowTemp);
    }

    /* initialize the default values */
    // row 0
    setValue(0, 0, 4);
    setValue(0, 1, 1);
    setValue(0, 2, 3);
    setValue(0, 8, 8);
    
    // row 1
    setValue(1, 0, 7);
    setValue(1, 1, 9);
    setValue(1, 2, 8);
    setValue(1, 3, 1);
    setValue(1, 8, 6);

    // row 2
    setValue(2, 0, 5);
    setValue(2, 3, 8);
    setValue(2, 5, 3);
    setValue(2, 7, 4);

    // row 3
    setValue(3, 0, 8);
    setValue(3, 4, 1);
    setValue(3, 6, 6);

    // row 4
    setValue(4, 3, 4);
    setValue(4, 5, 9);

    // row 5
    setValue(5, 2, 4);
    setValue(5, 4, 5);
    setValue(5, 7, 1);

    // row 6
    setValue(6, 1, 5);
    setValue(6, 3, 2);
    setValue(6, 5, 1);
    setValue(6, 8, 3);

    // row 7
    setValue(7, 0, 6);
    setValue(7, 5, 5);
    setValue(7, 6, 1);
    setValue(7, 7, 8);
    setValue(7, 8, 7);

    // row 8
    setValue(8, 0, 3);
    setValue(8, 6, 5);
    setValue(8, 7, 6);
    setValue(8, 8, 2);

}

// Destructor
Board::~Board()
{
    board.clear();
    board.resize(0);
} 

int Board::getValue(int rowNum, int colNum)
{
    return board[rowNum][colNum];
}

void Board::setValue(int rowNum, int colNum, int value)
{
    board[rowNum][colNum] = value;
}

void Board::displayBoard()
{
    cout << "   |   COL" << endl;
    cout << "ROW	|	0	1	2	|	3	4	5	|	6	7	8	|" << endl;

    for (int i = 0; i < 9; i++)
    {
        if (i % 3 == 0)
        {
            cout << endl;
        }
        cout << "i  ";
        for (int j = 0; j < 9; j++)
        {
            if (j % 3 == 0)
            {
                cout << "|  ";
            }

            if (board[i][j] == -1)
            {
                cout << "" << "    ";
            }
            else
            {
                cout << board[i][j] << "    ";
            }
        }
        cout << "   |" << endl;
    }
}

int Board::isEmptyValues()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == -1)
            {
                return 1;
            }
        }
    }
    return 0;
}