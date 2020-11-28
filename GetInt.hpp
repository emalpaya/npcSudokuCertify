/****************************************************************
* Author: Eva Malpaya
* Date Created: 10/18/2020
* Last Modification Date: 10/19/2020
* Assignment Number: CS325 HW 3 Problem 4
* Filename: GetInt.hpp
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
  ** Program name: GetInt.hpp
  ** Author: Eva Malpaya
  ** Date: 12/10/2019
  ** Description: The header file for the GetInt class.
  ** The GetInt class prompts the user for an integer
  ** input, validates their input, clears extraneous input, and re-
  ** prompts until an acceptable input is received. It includes
  ** functions that can be called when an input less than or
  ** greater than a certain integer is needed, or when an input
  ** between two integers is needed.
  ** Code adapted from LearnCPP example (retrieved in October 2019):
  ** https://www.learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
  *********************************************************************/

#ifndef GETINT_HPP
#define GETINT_HPP

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
