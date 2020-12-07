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
 * Description: Board class.
 * Private class member includes a 2D vector
 * to hold the sudoku board.
 * Public class members include a constructor,
 * destructor, getter, setter, and a helper
 * function to display the board.
 */

/* Default Constructor 
 * Sets up a solvable instance of the sudoku
 * puzzle.
 */
Board::Board()
{
    std::vector<int> rowTemp; // temporary vector to hold 1 row of 2D vector

    // initialize countValues
    for (int i = 0; i < 9; i++)
    {
        countValues.push_back(0);
    }

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

    /* Initialize the default values
     *
     * Puzzle and solution from ('Easiest,' retrieved November 2020):
     * https://dingo.sbs.arizona.edu/~sandiway/sudoku/examples.html 
     *
     */

    // row 0
    setValue(0, 3, 2);
    setValue(0, 4, 6);
    setValue(0, 6, 7);
    setValue(0, 8, 1);
    
    // row 1
    setValue(1, 0, 6);
    setValue(1, 1, 8);
    setValue(1, 4, 7);
    setValue(1, 7, 9);

    // row 2
    setValue(2, 0, 1);
    setValue(2, 1, 9);
    setValue(2, 5, 4);
    setValue(2, 6, 5);

    // row 3
    setValue(3, 0, 8);
    setValue(3, 1, 2);
    setValue(3, 3, 1);
    setValue(3, 7, 4);

    // row 4
    setValue(4, 2, 4);
    setValue(4, 3, 6);
    setValue(4, 5, 2);
    setValue(4, 6, 9);

    // row 5
    setValue(5, 1, 5);
    setValue(5, 5, 3);
    setValue(5, 7, 2);
    setValue(5, 8, 8);

    // row 6
    setValue(6, 2, 9);
    setValue(6, 3, 3);
    setValue(6, 7, 7);
    setValue(6, 8, 4);

    // row 7
    setValue(7, 1, 4);
    setValue(7, 4, 5);
    setValue(7, 7, 3);
    setValue(7, 8, 6);

    // row 8
    setValue(8, 0, 7);
    setValue(8, 2, 3);
    setValue(8, 4, 1);
    setValue(8, 5, 8);


    //#debugme start
    //// row 0
    //setValue(0, 0, 4);
    //setValue(0, 1, 3);
    //setValue(0, 2, 5);
    //setValue(0, 5, 9);
    //setValue(0, 7, 8);
    //
    //// row 1
    //setValue(1, 2, 2);
    //setValue(1, 3, 5);
    //setValue(1, 5, 1);
    //setValue(1, 6, 4);
    //setValue(1, 8, 3);

    //// row 2
    //setValue(2, 2, 7);
    //setValue(2, 3, 8);
    //setValue(2, 4, 3);
    //setValue(2, 7, 6);
    //setValue(2, 8, 2);

    //// row 3
    //setValue(3, 2, 6);
    //setValue(3, 4, 9);
    //setValue(3, 5, 5);
    //setValue(3, 6, 3);
    //setValue(3, 8, 7);

    //// row 4
    //setValue(4, 0, 3);
    //setValue(4, 1, 7);
    //setValue(4, 4, 8);
    //setValue(4, 7, 1);
    //setValue(4, 8, 5);

    //// row 5
    //setValue(5, 0, 9);
    //setValue(5, 2, 1);
    //setValue(5, 3, 7);
    //setValue(5, 4, 4);
    //setValue(5, 6, 6);

    //// row 6
    //setValue(6, 0, 5);
    //setValue(6, 1, 1);
    //setValue(6, 4, 2);
    //setValue(6, 5, 6);
    //setValue(6, 6, 8);

    //// row 7
    //setValue(7, 0, 2);
    //setValue(7, 2, 8);
    //setValue(7, 3, 9);
    //setValue(7, 5, 7);
    //setValue(7, 6, 1);

    //// row 8
    //setValue(8, 1, 6);
    //setValue(8, 3, 4);
    //setValue(8, 6, 2);
    //setValue(8, 7, 5);
    //setValue(8, 8, 9);
    //#debugme end

}

/* Destructor */
Board::~Board()
{
    board.clear();
    board.resize(0);

    countValues.clear();
    countValues.resize(0);
} 

/* Getter function.
 * Returns the value of a spot on the board.
 *
 * input:   row number of spot on board to change,
 *          column number of spot on board to change
 */
int Board::getValue(int rowNum, int colNum)
{
    return board[rowNum][colNum];
}

/* Setter function.
 * Sets a value on the board.
 * 
 * input:   row number of spot on board to change,
 *          column number of spot on board to change,
 *          value to add or change
 */
void Board::setValue(int rowNum, int colNum, int value)
{
    board[rowNum][colNum] = value;
}

/* Helper 
 * Displays the board.
 */
void Board::displayBoard()
{
    // board indices of ease of reading
    cout << "    |  COL:" << endl; 
    cout << "ROW:|  0  1  2  |  3  4  5  |  6  7  8  |" << endl;

    for (int i = 0; i < 9; i++)
    {
        if (i % 3 == 0) // segment divider
        {
            cout << "____|___________________________________|" << endl;
        }
        cout << i << "   "; // board indicies for ease of reading
        for (int j = 0; j < 9; j++)
        {
            if (j % 3 == 0) // segment divider
            {
                cout << "|  ";
            }

            if (board[i][j] == -1) // if spot is empty
            {
                cout << "   ";
            }
            else // display the value held there
            {
                cout << board[i][j] << "  ";
            }
        }
        cout << "|" << endl; // right border of board
    }
    cout << "____|___________________________________|" << endl; // bottom border of board
}

// input: row, column, value to check
// output: 1 if value is in, 0 if not
int Board::isInRow(int row, int val)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[row][i] == val)
        {
            return 1;
        }

    }
    return 0;
}
int Board::isInCol(int col, int val)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == val)
        {
            return 1;
        }

    }
    return 0;
}
int Board::isInSeg(int row, int col, int val)
{
    /* Code for checking segment adapted from
    * (retrieved November 2020):
    * https://codepumpkin.com/sudoku-checker/
    */

    int segRowStart = 0; // helper variable for tracking segment row start
    int segColStart = 0; //  helper variable for tracking segment col start

    // get the start of the segment
    segRowStart = row - row % 3;
    segColStart = col - col % 3;

    // check every number in the block segment
    for (int y = segRowStart; y < segRowStart + 3; y++)
    {
        for (int z = segColStart; z < segColStart + 3; z++)
        {
            //cout << userBoard.getValue(y, z);//#debugme
            if (board[y][z] == val) // if board incomplete
            {
                return 1;
            }
        }
    }

    return 0;

}



// checks if user board is full
// input: none
// output: 1 if full; 0 if not
int Board::isBoardFull()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == -1) 
            {
                return 0;
            }

        }
    }

    return 1;
}

// returns 1 if correct
// returns 0 if incorrect
int Board::isBoardCorrect()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (isInRow(i, board[i][j]) || isInCol(j, board[i][j]) || isInSeg(i, j, board[i][j]))
            {
                return 0;
            }

        }
    }

    return 1;
}

// input: row and col to check
// output: 1 if space is empty; 0 if not
int Board::isSpaceEmpty(int row, int col)
{
    if (board[row][col] == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

