/****************************************************************
* Author: Eva Malpaya
* Date Created: 10/18/2020
* Last Modification Date: 10/19/2020
* Assignment Number: CS325 HW 3 Problem 4
* Filename: Menu.cpp
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
  ** Program name: Menu.cpp
  ** Author: Eva Malpaya
  ** Date: 12/10/2019
  ** Description: The implementation file for the Menu class.
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

#include "Menu.hpp"

  /*
          Menu::Menu()
          Constructor.
  */
Menu::Menu()
{

}

/*
    Menu::~Menu()
    Destructor.
*/
Menu::~Menu()
{
    display.clear();
    options.clear();
}

/*
    Menu::addDisplay(string)
*/
void Menu::addDisplay(string newDisplay)
{
    display.push_back(newDisplay);
}

/*
    Menu::addOption(string)
*/
void Menu::addOption(string newOption)
{
    options.push_back(newOption);
}

/*
    Menu::resetDisplay()
*/
void Menu::resetDisplay()
{
    display.clear();
}

/*
    Menu::resetOptions()
*/
void Menu::resetOptions()
{
    options.clear();
}

/*
    Menu::replaceDisplay(int, string)
*/
void Menu::replaceDisplay(int index, string newDisplay)
{
    display[index] = newDisplay;
}

/*
    Menu::replaceOption(int, string)
*/
void Menu::replaceOption(int index, string newOption)
{
    options[index] = newOption;
}

/*
    Menu::show()
*/
void Menu::show()
{
    // show display
    for (int i = 0; i < static_cast<int>(display.size()); i++)
    {
        cout << display[i] << endl;
    }

    // show options
    for (int i = 0; i < static_cast<int>(options.size()); i++)
    {
        cout << i + 1 << ". " << options[i] << endl;
    }
    cout << endl;
}