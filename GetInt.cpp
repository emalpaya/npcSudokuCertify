/****************************************************************
* Author: Eva Malpaya
* Date Created: 10/18/2020
* Last Modification Date: 10/19/2020
* Assignment Number: CS325 HW 3 Problem 4
* Filename: GetInt.cpp
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
  ** Program name: GetInt.cpp
  ** Author: Eva Malpaya
  ** Date: 12/10/2019
  ** Description: The implementation file for the GetInt class.
  ** The GetInt class prompts the user for an integer
  ** input, validates their input, clears extraneous input, and re-
  ** prompts until an acceptable input is received. It includes
  ** functions that can be called when an input less than or
  ** greater than a certain integer is needed, or when an input
  ** between two integers is needed.
  ** Code adapted from LearnCPP example (retrieved in October 2019):
  ** https://www.learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
  *********************************************************************/

#include <iostream>
#include <typeinfo>
#include "GetInt.hpp"
using std::cout;
using std::cin;
using std::string;
using std::endl;

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