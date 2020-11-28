//  Created by Eva Malpaya on 12/7/20.
//  Copyright © 2020 Eva Malpaya. All rights reserved.
/****************************************************************
* Author: Eva Malpaya
* Date Created: 11/28/2020
* Last Modification Date: 12/7/2020
* Assignment Number: CS325 HW 8 Portfolio Project
* Filename: GetInt.hpp
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
#include "GetInt.hpp"

/*
 * Description: GetInt class
 * Author: Eva Malpaya
 * Date: 12/10/2019
 * The GetInt class prompts the user for an integer
 * input, validates their input, clears extraneous input, and re-
 * prompts until an acceptable input is received. It includes
 * functions that can be called when an input less than or
 * greater than a certain integer is needed, or when an input
 * between two integers is needed.
 * Code adapted from LearnCPP example (retrieved in October 2019):
 * https://www.learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
 */

/*
        GetInt::GetInt()
        Constructor.
*/
GetInt::GetInt()
{

}

/*
        GetInt::isGreaterThan()
        This function validates and returns an
        input greater than the passed integer
        and is non-inclusive.
*/
int GetInt::isGreaterThan(int min)
{
    while (true) // loop until valid GetInt is entered
    {
        cout << "Enter an integer value:\n";
        int GetInt;
        cin >> GetInt;

        // if wrong data type OR less than the minimum
        if (cin.fail() || GetInt < min)
        {
            cin.clear();            // clear the failure flag
            cin.ignore(99999, '\n'); // clear any values in the buffer after failed GetInt
            cout << "Input is invalid; please try again.\n";    // prompt user to try again
        }
        else
        {
            cin.ignore(99999, '\n'); // clear any extra info in the buffer after failed GetInt
            return GetInt;   // return the valid integer GetInt
        }
    }
}

/*
        GetInt::isBetween()
        This function validates and returns an
        input between two passed integers and
        is inclusive.
*/
int GetInt::isBetween(int min, int max)
{
    while (true) // loop until valid GetInt is entered
    {
        cout << "Enter an integer value:\n";
        int GetInt;
        cin >> GetInt;

        // if wrong data type OR not in range
        if (cin.fail() || (GetInt < min) || (GetInt > max))
        {
            cin.clear();            // clear the failure flag
            cin.ignore(99999, '\n'); // clear any values in the buffer after failed GetInt
            cout << "Input is invalid; please try again.\n";    // prompt user to try again
        }
        else
        {
            cin.ignore(99999, '\n'); // clear any extra info in the buffer after failed GetInt
            return GetInt;   // return the valid integer GetInt
        }
    }
}

/*
        Game::isLessThan()
        This function validates and returns an
        input less than the passed integer and
        is non-inclusive.
*/
int GetInt::isLessThan(int max)
{
    while (true) // loop until valid GetInt is entered
    {
        cout << "Enter an integer value:\n";
        int GetInt;
        cin >> GetInt;

        // if wrong data type OR less than the minimum
        if (cin.fail() || GetInt > max)
        {
            cin.clear();            // clear the failure flag
            cin.ignore(99999, '\n'); // clear any values in the buffer after failed GetInt
            cout << "Input is invalid; please try again.\n";    // prompt user to try again
        }
        else
        {
            cin.ignore(99999, '\n'); // clear any extra info in the buffer after failed GetInt
            return GetInt;   // return the valid integer GetInt
        }
    }
}