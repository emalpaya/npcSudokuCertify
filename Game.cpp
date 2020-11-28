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
 * This class serves as a driver to be called upon by main.
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
    menu.addDisplay("Welcome to my Shopping Program");
    menu.addDisplay("Demo for CS 325");
    menu.addDisplay("Week 3: Dynamic Programming");
    menu.addDisplay("");
    menu.addDisplay("Begin Demo?");
    menu.addDisplay("");
    menu.addDisplay("Please enter 1-2:");

    // initialize main menu options
    menu.addOption("Start");
    menu.addOption("Exit");

    // initialize userChoice
    userChoice = 0;

    // initialize timesPlayed
    timesPlayed = 0;
}

Game::~Game()
{

} // Destructor

///////////////////////////////////////////////
// Getters
///////////////////////////////////////////////

int Game::getTimesPlayed()
{
    return timesPlayed;
}
int Game::getUserChoice()
{
    return userChoice;
}

///////////////////////////////////////////////
// Setters
///////////////////////////////////////////////
void Game::setTimesPlayed(int newTimesPlayed)
{
    timesPlayed = newTimesPlayed;
}
void Game::setUserChoice(int newUserChoice)
{
    userChoice = newUserChoice;
}


///////////////////////////////////////////////
// Helper
///////////////////////////////////////////////
int Game::titleScreen()
{
    // displays title screen; gets
    // and validates user input.
    // adjusts for times user has played.

    if (timesPlayed == 0)
    {
        menu.show();
    }
    else
    {
        menu.resetDisplay();
        menu.addDisplay("Thanks for viewing.");
        menu.addDisplay("");
        menu.addDisplay("Demo again?");
        menu.addDisplay("");
        menu.addDisplay("Please enter 1-2:");
        menu.show();
    }
    return getInteger.isBetween(1, 2);
}

void Game::gameIntro()
{

}

///////////////////////////////////////////////
// Gameplay
///////////////////////////////////////////////
/*
 * playGame()
 * Primary driver function. I had intended
 * to modularize this function further, but
 * ran out of time.
 *
 * input: shopping.txt
 * output: results.txt
 *
 */
void Game::playGame()     
{
    std::string inputFileName = "shopping.txt"; //#UPDATEME per assignment
    std::string outputFileName = "results.txt";//#UPDATEME per assignment
    std::ifstream inputFile;
    std::ofstream outputFile; 
    string line;

    int testCases = 0;  //holds the number of test cases
    int numItems = 0;   //holds the number of items per test case
    int* prices = NULL; //holds the prices of items per test case
    int* weights = NULL;    //holds the weights of items of test case
    int numFamily = 0;  //holds the number of family members per test case
    int* famWeights = NULL; //holds max weight of family members per test case
    int* memberChoices = NULL;  //holds family member's item choices
    int** maxProfit = NULL; //2d array for bottom-up approach of profits
    int** famChoices = NULL; //holds all family members' item choices
    int totalPrice = 0; //holds the total profit for all family members


    // attempt to open the input file
    inputFile.open(inputFileName.c_str(), std::ios::in);
    if (!inputFile)
    {
        cout << "File could not be opened.\n" << endl;
    }

    // Open the output file to receive modification
    outputFile.open(outputFileName.c_str(), std::ios::trunc);
    if (!outputFile)
    {
        cout << "Cannot open the output file." << endl;
    }

    /* PREPARE THE INPUT */

    // get Test Cases
    std::getline(inputFile, line);
    testCases = std::stoi(line);

    for (int a = 0; a < testCases; a++)
    {
        // get number of items
        std::getline(inputFile, line);
        numItems = std::stoi(line);

        // initialize the item tables
        prices = new int[numItems + 1];
        weights = new int[numItems + 1];

        // get the item prices and weights
        for (int b = 0; b < numItems + 1; b++)
        {
            if (b == 0)
            {
                prices[b] = 0;
                weights[b] = 0;
            }
            else
            {
                // get item line
                std::getline(inputFile, line);
                std::istringstream iss(line);

                // get item price
                std::getline(iss, line, ' ');
                prices[b] = std::stoi(line);

                // get item weight
                std::getline(iss, line, ' ');
                weights[b] = std::stoi(line);
            }
        }

        // get the number of family members
        std::getline(inputFile, line);
        numFamily = std::stoi(line);

        // initialize the fam tables
        famWeights = new int[numFamily];

        // get the family member max weights
        for (int c = 0; c < numFamily; c++)
        {
            // get item line
            std::getline(inputFile, line);
            famWeights[c] = std::stoi(line);
        }

        // initialize the array to hold
        // all family member's choices
        famChoices = new int* [numFamily];
        for (int h = 0; h < numFamily; h++)
        {
            famChoices[h] = new int[numItems + 1];
        }

        // print all test info for debugging #debugme
        //cout << "Test Case: " << a + 1 << endl;
        //cout << "Number of items: " << numItems << endl;
        //cout << "Prices of items: ";
        //for (int d = 0; d < numItems + 1; d++)
        //{
        //    cout << prices[d] << ' ';
        //}
        //cout << endl;

        //cout << "Weights of items: ";
        //for (int e = 0; e < numItems + 1; e++)
        //{
        //    cout << weights[e] << ' ';
        //}
        //cout << endl;

        //cout << "Number in family: " << numFamily << endl;
        //cout << "Family weights: ";
        //for (int f = 0; f < numFamily; f++)
        //{
        //    cout << famWeights[f] << ' ';
        //}
        //cout << endl;
        //cout << endl;

        /* SEND TO FUNCTION */

        // per family member per test
        for (int g = 0; g < numFamily; g++)
        {
            // initialize tables to fill
            // bottom-up table of profits
            maxProfit = new int* [numItems + 1];
            for (int k = 0; k < numItems + 1; k++)
            {
                maxProfit[k] = new int[famWeights[g] + 1];
            }

            // table of memberChoices
            memberChoices = new int[numItems + 1];
            for (int i = 0; i < numItems + 1; i++)
            {
                memberChoices[i] = 0;
            }

            // runs the optimization algorithm
            goShopping(numItems, prices, weights, famWeights[g], maxProfit);

            // gets items to choose
            backTrace(numItems, prices, weights, famWeights[g], maxProfit, memberChoices);

            // add family member profit to total price
            totalPrice = totalPrice + maxProfit[numItems][famWeights[g]];

            //#debugme
            //cout << "Member Items" << endl;
            //cout << g + 1 << ": ";
            //printArrayResults(memberChoices, numItems + 1);
            //cout << endl;

            // add memberChoices to the family member output
            famChoices[g] = memberChoices;

            /*delete[] memberChoices;*/
            memberChoices = NULL;
        }


        /* OUTPUT TEST CASE RESULTS */

        ////#debugme
        //// print results to screen
        //cout << "Test Case " << a + 1 << endl;
        //cout << "Total Price " << totalPrice << endl;
        //cout << "Member Items" << endl;

        //for (int p = 0; p < numFamily; p++)
        //{
        //    cout << p + 1 << ": ";
        //    printArrayResults(famChoices[p], numItems + 1);
        //}

        // print results to file
        outputFile << "Test Case " << a + 1 << endl;
        outputFile << "Total Price " << totalPrice << endl;
        outputFile << "Member Items" << endl;

        for (int p = 0; p < numFamily; p++)
        {
            outputFile << p + 1 << ": ";

            for (int q = 1; q < numItems + 1; q++)
            {
                if (famChoices[p][q] != 0)
                {
                    outputFile << q << ' ';
                }
            }
            outputFile << endl;
        }
        

        // reset for next test
        for (int m = 0; m < numItems; m++)
        {
            delete[] maxProfit[m];
        }

        for (int n = 0; n < numFamily; n++)
        {
            delete[] famChoices[n];
        }
        
        delete[] memberChoices;
        delete[] maxProfit;
        delete[] prices;
        delete[] weights;
        delete[] famWeights;
        delete[] famChoices;
        

        memberChoices = NULL;
        maxProfit = NULL;
        prices = NULL;
        weights = NULL;
        famWeights = NULL;
        famChoices = NULL;

        totalPrice = 0;
    }

    // notify file written
    cout << "Results written to random.txt" << endl << endl;


    // clear memory
    delete[] maxProfit;
    delete[] prices;
    delete[] weights;
    delete[] famWeights;
    delete[] memberChoices;

    maxProfit = NULL;
    prices = NULL;
    weights = NULL;
    famWeights = NULL;
    memberChoices = NULL;

    // close files
    inputFile.close();
    outputFile.close();
}

/*
 * printArray()
 * Helper function to print an array.
 *
 * input: array to be sorted, size of the array
 * output: none
 */
void Game::printArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << ' ';
    }
    cout << endl;
}

/*
 * printChoices()
 * Exactly like printArray() but adjusted
 * for 0 index on memberChoices table.
 * Used for debugging purposes only.
 * #debugme
 *
 * input: array to be sorted, size of the array
 * output: none
 */
void Game::printChoices(int* array, int size)
{
    for (int i = 1; i < size; i++)
    {
        std::cout << array[i] << ' ';
    }
    cout << endl;
}

/*
 * printArrayResults()
 * Exactly like printChoices() but adjusted
 * to display in example output given in
 * homework prompt.
 *
 * input: array to be sorted, size of the array
 * output: none
 */
void Game::printArrayResults(int* array, int size)
{
    for (int i = 1; i < size; i++)
    {
        if (array[i] != 0)
        {
            std::cout << i << ' ';
        }
    }
    cout << endl;
}



/*
 *  goShopping()
 *  Optimization algorithm to 'shop' for
 *  one person. Utilizes the bottom-up
 *  tableization method to calculate the
 *  maximum profit a person should choose
 *  based on the available items' prices
 *  and weights, as well as the max weight
 *  the person can carry.
 *  
 *  input:  number of items,
 *          array of item prices,
 *          array of item weights,
 *          max weight person can carry,
 *          table to fill of max profit.
 *
 *  output: none
 *
 *  Code adapted from (Retrieved October 2020):
 *  https://youtu.be/zRza99HPvkQ
 *  https://youtu.be/PfkBS9qIMRE
 *
 */
void Game::goShopping(int numberOfItems, int* prices, int* weights, int maxWeight, int** maxProfit)
{    
    /* fill the table to get our max profit */
    // for the number of items (number of rows)
    for (int i = 0; i <= numberOfItems; i++)
    {
        // for the max weight person can carry (number of columns)
        for (int j = 0; j <= maxWeight; j++)
        {
            // if zero items or zero weight can carry, set to 0 in table
            // for calculating purposes
            if (i == 0 || j == 0)
            {
                maxProfit[i][j] = 0;
            }
            // else if item weight is less than the weight person
            // can carry
            else if (weights[i] <= j)
            {
                // take the previous item combination if it's higher profit
                // OR take the current item plus previous item combination
                // if higher profit
                maxProfit[i][j] = max(maxProfit[i - 1][j], prices[i] + maxProfit[i - 1][j - weights[i]]);
            }
            // else item is too heavy for person; go with previous item
            else
            {
                maxProfit[i][j] = maxProfit[i - 1][j];
            }

            //cout << maxProfit[i][j] << ' '; //#debugme
        }
        //cout << endl;
    }
    //#debugme
    //cout << endl;
    //cout << "max profit: " << maxProfit[numberOfItems][maxWeight] << endl;
    //cout << endl;
}

/*
 *  backTrace()
 *  helper function to 'back trace' a
 *  max profit table to see which items
 *  to pick for a person. This version
 *  does not allow repetition of items;
 *  i.e., a person may only take one of
 *  each type of item.
 *
 *  input:  number of items,
 *          array of item prices,
 *          array of item weights,
 *          max weight person can carry,
 *          table of max profit to back trace,
 *          table to fill of items to choose.
 *
 *  output: none
 *
 *  Visual representation of back tracing
 *  provided by (Retrieved October 2020):
 *  https://youtu.be/PfkBS9qIMRE
 *  but code was written by me and adapted
 *  from version in video to not allow
 *  for item repetition.
 *
 */
void Game::backTrace(int numberOfItems, int* prices, int* weights, int maxWeight, int** maxProfit, int* choices)
{
    int y = numberOfItems; //4
    int z = maxWeight; //8
    // fill an array with the number of each item to choose
    while (y != 0 && z != 0)
    {
        if (maxProfit[y][z] != maxProfit[y - 1][z])
        {
            choices[y] = choices[y] + 1;
            z = z - weights[y];
        }
        y--;
    }

}
