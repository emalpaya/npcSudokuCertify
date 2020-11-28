/****************************************************************
* Author: Eva Malpaya
* Date Created: 10/18/2020
* Last Modification Date: 10/19/2020
* Assignment Number: CS325 HW 3 Problem 4
* Filename: Menu.hpp
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
  ** Program name: Menu.hpp
  ** Author: Eva Malpaya
  ** Date: 12/10/2019
  ** Description: The header file for the Menu class.
  ** Private class members include two string vectors to hold the
  ** main display message and options.
  ** Public class members include a constructor and destructor;
  ** resetters and replacers for the display or option vectors;
  ** and a show() function which prints the menu in its entirety--
  ** display and options included.
  ** Code was adapted from instructor's suggestion in piazza question
  ** thread titled 'Code organization (where to put menu)' (retrieved
  ** November 2019): https://piazza.com/class/k0rofchnorj31s?cid=470
  *********************************************************************/

#ifndef Menu_HPP
#define Menu_HPP
#include <iostream>
#include <typeinfo>
#include <vector>
#include <typeinfo>
using std::cout;
using std::string;
using std::endl;

class Menu
{
private:
    std::vector<string> display;
    std::vector<string> options;

public:
    Menu();
    ~Menu();

    void addDisplay(std::string);
    void addOption(std::string);

    void resetDisplay();
    void resetOptions();

    void replaceDisplay(int, std::string);
    void replaceOption(int, std::string);

    void show();
};
#endif /* Menu_hpp */