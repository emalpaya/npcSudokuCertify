//  Created by Eva Malpaya on 12/7/20.
//  Copyright © 2020 Eva Malpaya. All rights reserved.
/****************************************************************
* Author: Eva Malpaya
* Date Created: 11/28/2020
* Last Modification Date: 12/7/2020
* Assignment Number: CS325 HW 8 Portfolio Project
* Filename: Menu.hpp
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
#ifndef Menu_HPP
#define Menu_HPP
#include <iostream>
#include <typeinfo>
#include <vector>
#include <typeinfo>
using std::cout;
using std::string;
using std::endl;

 /*
  * Description: Menu class
  * Author: Eva Malpaya
  * Date: 12/10/2019
  * Private class members include two string vectors to hold the
  * main display message and options.
  * Public class members include a constructor and destructor;
  * resetters and replacers for the display or option vectors;
  * and a show() function which prints the menu in its entirety--
  * display and options included.
  * Code was adapted from instructor's suggestion in piazza question
  * thread titled 'Code organization (where to put menu)' (retrieved
  * November 2019): https://piazza.com/class/k0rofchnorj31s?cid=470
 */
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