//  Created by Eva Malpaya on 12/7/20.
//  Copyright © 2020 Eva Malpaya. All rights reserved.
/****************************************************************
* Author: Eva Malpaya
* Date Created: 11/28/2020
* Last Modification Date: 12/7/2020
* Assignment Number: CS325 HW 8 Portfolio Project
* Filename: Game.cpp
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
#include "Game.hpp"

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


 /* Constructor/Destructor */
Game::Game()
{
    // initialize main menu display
    menu.addDisplay("What would you like to do?");
    menu.addDisplay("Please enter 1-3:");

    // initialize main menu options
    menu.addOption("Change or Add a value");
    menu.addOption("EXTRA CREDIT: Fill with Solving Algorithm");
    menu.addOption("Submit and Check answer");
    menu.addOption("Quit");

    // initialize userChoice
    userChoice = 0;

    // initialize countValues
    for (int i = 0; i < 9; i++)
    {
        countValues.push_back(0);
    }
}

// Destructor
Game::~Game()
{
    countValues.clear();
    countValues.resize(0);
}

/* Getters */
int Game::getUserChoice()
{
    return userChoice;
}

/* Setters */
void Game::setUserChoice(int newUserChoice)
{
    userChoice = newUserChoice;
}


/* Gameplay */

/* displayMenu function
 *
 * Drives displaying the boards,
 * displays menu options,
 * calls input validator to get and
 * valdiate user's choice.
 *
 * input: none
 *
 * output: returns user choice
 *
 */
int Game::displayMenu()
{
    cout << "GAME RULES:" << endl;
    cout << "Solve the Sudoku Puzzle." << endl;
    cout << "Fill the 'Your Progress' board below with" << endl;
    cout << "integer values such that every row," << endl;
    cout << "column, and partitioned 3x3 segment" << endl;
    cout << "contains distinct values from 1-9." << endl;
    cout << endl;

    displayBoards();

    menu.show();

    return getInteger.isBetween(1, 4);
}

/* displayBoards function
 *
 * Displays the default board and
 * user progress board that precedes
 * displaying the menu.
 *
 * input: none
 *
 * output: terminal output only
 *
 */
void Game::displayBoards()
{
    cout << "Starting Puzzle:" << endl;
    defaultBoard.displayBoard();
    cout << endl;

    cout << "Your Progress: " << endl;
    userBoard.displayBoard();
    cout << endl;
}

/* driver function
 *
 * Primary driver function for gameplay.
 * User can add or change a value on the
 * board or submit it for certification.
 *
 * input: none
 *
 * output: none
 *
 */
void Game::driver()
{
    switch (userChoice)
    {
    case 1: 
        changeOrAddValue();
        break;
    case 2:
        fillWithSolveAlgo();
        break;
    case 3:
        submitAndCheckAnswer();
        break;
    default:
        submitAndCheckAnswer();
    }
}

/* changeOrAddValue function
 *
 * Gameplay function.
 *
 * input:   input from terminal only--
 *          row number from user,
 *          column number from user,
 *          value to set on board
 *
 * output:  output to terminal only
 *
 */
void Game::changeOrAddValue()
{
    int rowNum = 0;
    int colNum = 0;
    int isUpdateable = 1; // helper bool variable
    int userValue = 0;

    // get row number user would like to change
    cout << "Which ROW # would you like to change or update" << endl;
    cout << "(enter 0 - 8)?:" << endl;
    rowNum = getInteger.isBetween(0, 8);
    cout << endl;

    // get column number user would like to change
    cout << "Which COL # would you like to change or update" << endl;
    cout << "(enter 0 - 8)?:" << endl;
    colNum = getInteger.isBetween(0, 8);
    cout << endl;

    // checks if user is changing non-given default value
    isUpdateable = checkUpdateable(rowNum, colNum);

    if (isUpdateable == 0)
    {
        cout << "Sorry, that value is already given." << endl;
        cout << "You may not change that value." << endl;
        cout << endl;
    }
    else
    {
        // get value user would like to add or change to
        cout << "What number would you like to add to ";
        cout << "ROW " << rowNum << " ";
        cout << "COL " << colNum << "?" << endl;
        cout << "(enter 1 - 9)?:" << endl;
        userValue = getInteger.isBetween(1, 9);
        cout << endl;

        // set number in board to userValue
        userBoard.setValue(rowNum, colNum, userValue);
    }
}

/* checkUpdateable function
 *
 * Helper gameplay function. Checks if
 * row and column number entered by user
 * is a changeable value (i.e., not one of
 * the default values already given).
 *
 * input:   row number on board to check,
 *          column number on board to check,
 *
 * output:  1 if changeable value; 0 if not
 *
 */
int Game::checkUpdateable(int rowNum, int colNum)
{
    if (defaultBoard.getValue(rowNum, colNum) == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

/* submitAndCheckAnswer function
 *
 * Gameplay function. Certifies/verifies
 * the user's solution to the NP-Complete
 * Sudoku board puzzle. Utilizes polynomial
 * time algorithm to certify.
 *
 * input:   none
 *
 * output:  terminal output only; displays
 *          whether solution is correct
 *          or incorrect. Note that an
 *          incomplete or unfinished board
 *          counts as an incorrect solution.
 *
 */
void Game::submitAndCheckAnswer()
{
    int isVerified = 1; // helper bool variable

    /* check every row */
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (userBoard.getValue(i, j) == -1) // if board incomplete
            {
                isVerified = 0; // incorrect solution
            }
            else // update bool helper array
            {
                countValues[userBoard.getValue(i, j) - 1]++;
            }
        }

        // check bool helper array
        for (int k = 0; k < 9; k++)
        {
            // if not unique values
            if (countValues[k] != 1)
            {
                isVerified = 0; // incorrect solution
            }
        }

        // reset bool helper array for next row
        resetCountValues();
    }

    /* check every column */
    for (int x = 0; x < 9; x++)
    {
        for (int y = 0; y < 9; y++)
        {
            if (userBoard.getValue(y, x) == -1) // if board incomplete
            {
                isVerified = 0; // incorrect solution
            }
            else // update bool helper array
            {
                countValues[userBoard.getValue(y, x) - 1]++;
            }
        }

        // check bool helper array
        for (int z = 0; z < 9; z++)
        {
            // if not unique values
            if (countValues[z] != 1)
            {
                isVerified = 0; // incorrect solution
            }
        }

        // reset bool helper array for next row
        resetCountValues();
    }


    /* check every segment
     * code for checking segment adapted from
     * (retrieved November 2020):
     * https://codepumpkin.com/sudoku-checker/
     */

    int segRow = 0; // helper variable for tracking segment row start
    int segCol = 0; //  helper variable for tracking segment col start

    for (int x = 0; x < 9; x = x + 3) // for each segment block vertically
    {
        for (int w = 0; w < 9; w = w + 3) // for each segment block vertically
        {
            // get the start of the segment
            segRow = x - x % 3;
            segCol = w - w % 3;

            // check every number in the block segment
            for (int y = segRow; y < segRow + 3; y++)
            {
                for (int z = segCol; z < segCol + 3; z++)
                {
                    //cout << userBoard.getValue(y, z);//#debugme
                    if (userBoard.getValue(y, z) == -1) // if board incomplete
                    {
                        isVerified = 0; // incorrect solution
                    }
                    else // update bool helper array
                    {
                        countValues[userBoard.getValue(y, z) - 1]++;
                    }
                }
            }
            //cout << "end box" << endl; //#debugme
            //cout << endl; //#debugme

            // check bool helper array
            for (int s = 0; s < 9; s++)
            {
                // if not unique values
                if (countValues[s] != 1)
                {
                    isVerified = 0; // incorrect solution
                }
            }

            // reset bool helper array for next block
            resetCountValues();
        }
    }



    // if at any point during the above three checks
    // an incorrect value was found on the board,
    if (isVerified == 0)
    {
        // display incorrect
        cout << "Your solution is incorrect." << endl;
        cout << endl;
    }
    else // display correct solution; exit game
    {
        cout << "Your solution is correct." << endl;
        cout << endl;
        cout << "Thanks for playing!" << endl;
        userChoice = 4;
    }
}

/* resetCountValues function
 *
 * Helper Gameplay function. Resets
 * the bool helper array used to check
 * each line.
 *
 * input:   none
 *
 * output:  none
 *
 */
void Game::resetCountValues()
{
    // clear existing
    countValues.clear();
    countValues.resize(0);

    // re-initialize
    for (int i = 0; i < 9; i++)
    {
        countValues.push_back(0);
    }
}

// Code adapted from (retrieved December 2020):
// https://codepumpkin.com/sudoku-solver-using-backtracking/
bool Game::fillWithSolveAlgo()
{
    // traverse through board
    // if a space is changeable 
    // fill it with a number not yet in row, column, or segment
    // pass filled board to itself

    // base case board is full
    // answers are correct

    //userBoard.displayBoard();//#debugme

    // traverse through board
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            // for every space in board
            if (checkUpdateable(i, j))
            {
                if (userBoard.isSpaceEmpty(i, j))
                {
                    for (int k = 1; k < 10; k++) // fill it with first avail unique value from 1-9
                    {
                        if (!userBoard.isInRow(i, k) && !userBoard.isInCol(j, k) && !userBoard.isInSeg(i, j, k))
                        {
                            userBoard.setValue(i, j, k);
                            if (fillWithSolveAlgo())
                            {
                                return true;
                            }
                            else
                            {
                                userBoard.setValue(i, j, -1); // set it to empty
                            }
                        }
                    }
                    return false;
                }
            }
        }
        
    }
    return true;
}


