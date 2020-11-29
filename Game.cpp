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
 * Date: 12/10/2019
 * This class serves as a displayMenu to be called upon by main.
 * It keeps track of the number of times a user has played,
 * validates their input, maintains the main "title screen,"
 * and tracks the state of the game.
 */

///////////////////////////////////////////////
// Constructor/Destructor
///////////////////////////////////////////////
Game::Game()
{
    // initialize main menu display
    menu.addDisplay("What would you like to do?");
    menu.addDisplay("Please enter 1-3:");

    // initialize main menu options
    menu.addOption("Change or Add a value");
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

///////////////////////////////////////////////
// Getters
///////////////////////////////////////////////
int Game::getUserChoice()
{
    return userChoice;
}

///////////////////////////////////////////////
// Setters
///////////////////////////////////////////////
void Game::setUserChoice(int newUserChoice)
{
    userChoice = newUserChoice;
}


///////////////////////////////////////////////
// Gameplay
///////////////////////////////////////////////
    // displays title screen; gets
    // and validates user input.
    // adjusts for times user has played.
int Game::displayMenu()
{
    cout << "Solve the Sudoku Puzzle." << endl;
    cout << endl;

    displayBoards();

    menu.show();

    return getInteger.isBetween(1, 3);
}

// displays the boards
// default board
// then user's progress board
void Game::displayBoards()
{
    cout << "Starting Puzzle:" << endl;
    defaultBoard.displayBoard();
    cout << endl;
    cout << "Your Progress: " << endl;
    userBoard.displayBoard();
    cout << endl;
}

/*
 * driver()
 * Primary displayMenu function. I had intended
 * to modularize this function further, but
 * ran out of time.
 *
 * input: shopping.txt
 * output: results.txt
 *
 */
void Game::driver()
{
    if (userChoice == 1)
    {
        changeOrAddValue();
    }
    else // 2
    {
        submitAndCheckAnswer();
    }
}

void Game::changeOrAddValue()
{
    int rowNum = 0;
    int colNum = 0;
    int isUpdateable = 1;
    int userValue = 0;

    cout << "Which ROW # would you like to change or update" << endl;
    cout << "(enter 0 - 8)?:" << endl;
    rowNum = getInteger.isBetween(0, 8);
    cout << endl;

    cout << "Which COL # would you like to change or update" << endl;
    cout << "(enter 0 - 8)?:" << endl;
    colNum = getInteger.isBetween(0, 8);
    cout << endl;

    isUpdateable = checkUpdateable(rowNum, colNum);

    if (isUpdateable == 0)
    {
        cout << "Sorry, that value is already given." << endl;
        cout << "You may not change that value." << endl;
        cout << endl;
    }
    else
    {
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

// checks if row and col number entered
// is updateable (i.e., not one of the default
// values given)
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

// CERTIFIES/VERIFIES THE SOLUTION
void Game::submitAndCheckAnswer()
{
    int isVerified = 1;

    // check every row
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (userBoard.getValue(i, j) == -1)
            {
                //cout << "Sorry, you must complete the board first." << endl;
                isVerified = 0;
            }
            else
            {
                countValues[userBoard.getValue(i, j) - 1]++;
            }
        }

        // check row
        for (int k = 0; k < 9; k++)
        {
            if (countValues[k] != 1)
            {
                isVerified = 0;
            }
        }

        // reset value checker
        resetCountValues();
    }

    // check every column
    for (int x = 0; x < 9; x++)
    {
        for (int y = 0; y < 9; y++)
        {
            if (userBoard.getValue(y, x) == -1)
            {
                //cout << "Sorry, you must complete the board first." << endl;
                isVerified = 0;
            }
            else
            {
                countValues[userBoard.getValue(y, x) - 1]++;
            }
        }

        // check column
        for (int z = 0; z < 9; z++)
        {
            if (countValues[z] != 1)
            {
                isVerified = 0;
            }
        }

        // reset value checker
        resetCountValues();
    }

    if (isVerified == 0)
    {
        cout << "Your solution is incorrect." << endl;
        cout << endl;
    }
    else
    {
        cout << "Your solution is correct." << endl;
        cout << endl;
        cout << "Thanks for playing!" << endl;
        userChoice = 3;
    }
}

void Game::resetCountValues()
{
    countValues.clear();
    countValues.resize(0);

    for (int i = 0; i < 9; i++)
    {
        countValues.push_back(0);
    }
}