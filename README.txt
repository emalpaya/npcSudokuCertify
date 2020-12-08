CS325_HW8_Malpaya_Eva
README.md
Instructions

TO RUN shopping:

1.  Enter 'make sudoku' into the command line to compile and make executable.
2.  Enter './sudoku' into the command line to run executable.
3.  Default board will display, followed by your working copy of the board.
4.  Enter '1' to Add or change a value on the 'Your Progress' board. Will be 
    prompted for row then column number of spot to change on board, then the 
    value to change it to.
5.  Enter '2' for the Extra Credit option of using the solving algorithm to 
    solve the sudoku puzzle instance. This will fill the 'Your Progress' board.
6.  When board is filled, enter '3' at the menu display to have solution
    verified/certified. 
7.  Program will display whether your solution is correct or incorrect.
    If correct, program will exit.
8.  At any point during the menu display, enter '4' to quit and exit the 
    game.

GAME RULES:
*   The board must be filled with values from 1 - 9 such that every row, column,
    and segment contains the numbers 1 - 9 without any repetitions.

Example terminal output:
flip2 ~/CS325/HW8 153% make sudoku
g++ -std=c++11 -c main.cpp
g++ -std=c++11 -c Board.cpp
g++ -std=c++11 -c Game.cpp
g++ -std=c++11 -c GetInt.cpp
g++ -std=c++11 -c Menu.cpp
g++ -std=c++11 main.o Board.o Game.o GetInt.o Menu.o -o sudoku
flip2 ~/CS325/HW8 154% ./sudoku
GAME RULES:
Solve the Sudoku Puzzle.
Fill the 'Your Progress' board below with
integer values such that every row,
column, and partitioned 3x3 segment
contains distinct values from 1-9.

Starting Puzzle:
    |  COL:
ROW:|  0  1  2  |  3  4  5  |  6  7  8  |
____|___________________________________|
0   |           |  2  6     |  7     1  |
1   |  6  8     |     7     |     9     |
2   |  1  9     |        4  |  5        |
____|___________________________________|
3   |  8  2     |  1        |     4     |
4   |        4  |  6     2  |  9        |
5   |     5     |        3  |     2  8  |
____|___________________________________|
6   |        9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

Your Progress:
    |  COL:
ROW:|  0  1  2  |  3  4  5  |  6  7  8  |
____|___________________________________|
0   |           |  2  6     |  7     1  |
1   |  6  8     |     7     |     9     |
2   |  1  9     |        4  |  5        |
____|___________________________________|
3   |  8  2     |  1        |     4     |
4   |        4  |  6     2  |  9        |
5   |     5     |        3  |     2  8  |
____|___________________________________|
6   |        9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. EXTRA CREDIT: Fill with Solving Algorithm
3. Submit and Check answer
4. Quit

Enter an integer value:
