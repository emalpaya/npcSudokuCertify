CS325_HW8_Malpaya_Eva
README.md
Instructions

TO RUN shopping:

1.  Enter 'make sudoku' into the command line to compile and make executable.
2.  Enter './sudoku' into the command line to run executable.
3.  Default board will display, followed by your working copy of the board.
4.  Enter '1' to Add or change a value on the board. Will be prompted
    for row then column number of spot to change on board, then the value
    to change it to.
5.  When board is filled, enter '2' at the menu display to have solution
    verified/certified. 
6.  Program will display whether your solution is correct or incorrect.
    If correct, program will exit.
7.  At any point during the menu display, enter '3' to quit and exit the 
    game.

GAME RULES:
*   The board must be filled with values from 1 - 9 such that every row, column,
    and segment contains the numbers 1 - 9 without any repetitions.

Example terminal output:

flip1 ~/CS325/HW3 154% make shopping
g++ -std=c++11 -c main.cpp
g++ -std=c++11 -c Game.cpp
g++ -std=c++11 -c GetInt.cpp
g++ -std=c++11 -c Menu.cpp
g++ -std=c++11 main.o Game.o GetInt.o Menu.o -o shopping
flip1 ~/CS325/HW3 155% ./shopping
Solve the Sudoku Puzzle.

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
2. Submit and Check answer
3. Quit

Enter an integer value:
2
Your solution is incorrect.

Solve the Sudoku Puzzle.

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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
0

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
0

What number would you like to add to ROW 0 COL 0?
(enter 1 - 9)?:
Enter an integer value:
4

Solve the Sudoku Puzzle.

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
0   |  4        |  2  6     |  7     1  |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
0
Input is invalid; please try again.
Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

Sorry, that value is already given.
You may not change that value.

Solve the Sudoku Puzzle.

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
0   |  4        |  2  6     |  7     1  |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
0

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

What number would you like to add to ROW 0 COL 1?
(enter 1 - 9)?:
Enter an integer value:
3

Solve the Sudoku Puzzle.

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
0   |  4  3     |  2  6     |  7     1  |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
0

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
2

What number would you like to add to ROW 0 COL 2?
(enter 1 - 9)?:
Enter an integer value:
5

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6     |  7     1  |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
0

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
5

What number would you like to add to ROW 0 COL 5?
(enter 1 - 9)?:
Enter an integer value:
9

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7     1  |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
0

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
7

What number would you like to add to ROW 0 COL 7?
(enter 1 - 9)?:
Enter an integer value:
8

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
2

What number would you like to add to ROW 1 COL 2?
(enter 1 - 9)?:
Enter an integer value:
2

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |     7     |     9     |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

What number would you like to add to ROW 1 COL 3?
(enter 1 - 9)?:
Enter an integer value:
5

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  5  7     |     9     |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
5

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

Sorry, that value is already given.
You may not change that value.

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  5  7     |     9     |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
5

What number would you like to add to ROW 1 COL 5?
(enter 1 - 9)?:
Enter an integer value:
1

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  5  7  1  |     9     |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
6

What number would you like to add to ROW 1 COL 6?
(enter 1 - 9)?:
Enter an integer value:
4

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  5  7  1  |  4  9     |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
8

What number would you like to add to ROW 1 COL 8?
(enter 1 - 9)?:
Enter an integer value:
3

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  5  7  1  |  4  9  3  |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
2

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
2

What number would you like to add to ROW 2 COL 2?
(enter 1 - 9)?:
Enter an integer value:
7

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  5  7  1  |  4  9  3  |
2   |  1  9  7  |        4  |  5        |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
2

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

What number would you like to add to ROW 2 COL 3?
(enter 1 - 9)?:
Enter an integer value:
8

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  5  7  1  |  4  9  3  |
2   |  1  9  7  |  8     4  |  5        |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
2

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
4

What number would you like to add to ROW 2 COL 4?
(enter 1 - 9)?:
Enter an integer value:
3

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  5  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5        |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
2

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
7

What number would you like to add to ROW 2 COL 7?
(enter 1 - 9)?:
Enter an integer value:
6

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  5  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6     |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
2

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
8

What number would you like to add to ROW 2 COL 8?
(enter 1 - 9)?:
Enter an integer value:
2

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  5  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
2

What number would you like to add to ROW 3 COL 2?
(enter 1 - 9)?:
Enter an integer value:
6

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  5  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1        |     4     |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
10
Input is invalid; please try again.
Enter an integer value:
1

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

What number would you like to add to ROW 1 COL 3?
(enter 1 - 9)?:
Enter an integer value:
4

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1        |     4     |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
9
Input is invalid; please try again.
Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
4

What number would you like to add to ROW 3 COL 4?
(enter 1 - 9)?:
Enter an integer value:
9

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9     |     4     |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
5

What number would you like to add to ROW 3 COL 5?
(enter 1 - 9)?:
Enter an integer value:
5

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |     4     |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
6

What number would you like to add to ROW 3 COL 6?
(enter 1 - 9)?:
Enter an integer value:
3

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4     |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
8

What number would you like to add to ROW 3 COL 8?
(enter 1 - 9)?:
Enter an integer value:
7

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
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
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
4

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
0

What number would you like to add to ROW 4 COL 0?
(enter 1 - 9)?:
Enter an integer value:
3

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3     4  |  6     2  |  9        |
5   |     5     |        3  |     2  8  |
____|___________________________________|
6   |        9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
4

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

What number would you like to add to ROW 4 COL 1?
(enter 1 - 9)?:
Enter an integer value:
7

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6     2  |  9        |
5   |     5     |        3  |     2  8  |
____|___________________________________|
6   |        9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
4

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
4

What number would you like to add to ROW 4 COL 4?
(enter 1 - 9)?:
Enter an integer value:
8

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9        |
5   |     5     |        3  |     2  8  |
____|___________________________________|
6   |        9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
4

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
7

What number would you like to add to ROW 4 COL 7?
(enter 1 - 9)?:
Enter an integer value:
1

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1     |
5   |     5     |        3  |     2  8  |
____|___________________________________|
6   |        9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
4

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
8

What number would you like to add to ROW 4 COL 8?
(enter 1 - 9)?:
Enter an integer value:
5

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |     5     |        3  |     2  8  |
____|___________________________________|
6   |        9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
5

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
0

What number would you like to add to ROW 5 COL 0?
(enter 1 - 9)?:
Enter an integer value:
9

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5     |        3  |     2  8  |
____|___________________________________|
6   |        9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
5

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
2

What number would you like to add to ROW 5 COL 2?
(enter 1 - 9)?:
Enter an integer value:
1

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |        3  |     2  8  |
____|___________________________________|
6   |        9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
5

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

What number would you like to add to ROW 5 COL 3?
(enter 1 - 9)?:
Enter an integer value:
7

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7     3  |     2  8  |
____|___________________________________|
6   |        9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
5

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
4

What number would you like to add to ROW 5 COL 4?
(enter 1 - 9)?:
Enter an integer value:
4

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |     2  8  |
____|___________________________________|
6   |        9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
5

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
6

What number would you like to add to ROW 5 COL 6?
(enter 1 - 9)?:
Enter an integer value:
6

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |        9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
6

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
0

What number would you like to add to ROW 6 COL 0?
(enter 1 - 9)?:
Enter an integer value:
5

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5     9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
6

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

What number would you like to add to ROW 6 COL 1?
(enter 1 - 9)?:
Enter an integer value:
1

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3        |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
6

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
4

What number would you like to add to ROW 6 COL 4?
(enter 1 - 9)?:
Enter an integer value:
2

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2     |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
6

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
5

What number would you like to add to ROW 6 COL 5?
(enter 1 - 9)?:
Enter an integer value:
6

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |     7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
6

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
6

What number would you like to add to ROW 6 COL 6?
(enter 1 - 9)?:
Enter an integer value:
8

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |     4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
7

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
0

What number would you like to add to ROW 7 COL 0?
(enter 1 - 9)?:
Enter an integer value:
2

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4     |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
7

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
2

What number would you like to add to ROW 7 COL 2?
(enter 1 - 9)?:
Enter an integer value:
8

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |     5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
7

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

What number would you like to add to ROW 7 COL 3?
(enter 1 - 9)?:
Enter an integer value:
9

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5     |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
7

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
5

What number would you like to add to ROW 7 COL 5?
(enter 1 - 9)?:
Enter an integer value:
7

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5  7  |     3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
7

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
6

What number would you like to add to ROW 7 COL 6?
(enter 1 - 9)?:
Enter an integer value:
1

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5  7  |  1  3  6  |
8   |  7     3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
8

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

What number would you like to add to ROW 8 COL 1?
(enter 1 - 9)?:
Enter an integer value:
6

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5  7  |  1  3  6  |
8   |  7  6  3  |     1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
8

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

What number would you like to add to ROW 8 COL 3?
(enter 1 - 9)?:
Enter an integer value:
4

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5  7  |  1  3  6  |
8   |  7  6  3  |  4  1  8  |           |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
8

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
6

What number would you like to add to ROW 8 COL 6?
(enter 1 - 9)?:
Enter an integer value:
2

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5  7  |  1  3  6  |
8   |  7  6  3  |  4  1  8  |  2        |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
8

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
7

What number would you like to add to ROW 8 COL 7?
(enter 1 - 9)?:
Enter an integer value:
5

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5  7  |  1  3  6  |
8   |  7  6  3  |  4  1  8  |  2  5     |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
8

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
8

What number would you like to add to ROW 8 COL 8?
(enter 1 - 9)?:
Enter an integer value:
9

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5  7  |  1  3  6  |
8   |  7  6  3  |  4  1  8  |  2  5  9  |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
8

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

What number would you like to add to ROW 8 COL 1?
(enter 1 - 9)?:
Enter an integer value:
0
Input is invalid; please try again.
Enter an integer value:
3

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5  7  |  1  3  6  |
8   |  7  3  3  |  4  1  8  |  2  5  9  |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
2
Your solution is incorrect.

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5  7  |  1  3  6  |
8   |  7  3  3  |  4  1  8  |  2  5  9  |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
8

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

What number would you like to add to ROW 8 COL 1?
(enter 1 - 9)?:
Enter an integer value:
6

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5  7  |  1  3  6  |
8   |  7  6  3  |  4  1  8  |  2  5  9  |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
2
Your solution is incorrect.

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  4  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5  7  |  1  3  6  |
8   |  7  6  3  |  4  1  8  |  2  5  9  |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
1
Which ROW # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
1

Which COL # would you like to change or update
(enter 0 - 8)?:
Enter an integer value:
3

What number would you like to add to ROW 1 COL 3?
(enter 1 - 9)?:
Enter an integer value:
5

Solve the Sudoku Puzzle.

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
0   |  4  3  5  |  2  6  9  |  7  8  1  |
1   |  6  8  2  |  5  7  1  |  4  9  3  |
2   |  1  9  7  |  8  3  4  |  5  6  2  |
____|___________________________________|
3   |  8  2  6  |  1  9  5  |  3  4  7  |
4   |  3  7  4  |  6  8  2  |  9  1  5  |
5   |  9  5  1  |  7  4  3  |  6  2  8  |
____|___________________________________|
6   |  5  1  9  |  3  2  6  |  8  7  4  |
7   |  2  4  8  |  9  5  7  |  1  3  6  |
8   |  7  6  3  |  4  1  8  |  2  5  9  |
____|___________________________________|

What would you like to do?
Please enter 1-3:
1. Change or Add a value
2. Submit and Check answer
3. Quit

Enter an integer value:
2
Your solution is correct.
Thanks for playing!

C:\Users\malpa\source\repos\cs325_portfolioProject\Debug\cs325_portfolioProject.exe (process 13224) exited with code 0.
Press any key to close this window . . .
