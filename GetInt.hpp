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
#ifndef GETINT_HPP
#define GETINT_HPP
#include <iostream>
#include <typeinfo>
using std::cout;
using std::cin;
using std::string;
using std::endl;

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
class GetInt
{
    private:

    public:
        GetInt();
        int isGreaterThan(int);
        int isBetween(int, int);
        int isLessThan(int);
};
#endif /* GetInt_hpp */
