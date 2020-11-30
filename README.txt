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

flip2 ~/CS325/HW8 159% make sudoku
g++ -std=c++11 -c main.cpp
g++ -std=c++11 -c Board.cpp
g++ -std=c++11 -c Game.cpp
g++ -std=c++11 -c GetInt.cpp
g++ -std=c++11 -c Menu.cpp
g++ -std=c++11 main.o Board.o Game.o GetInt.o Menu.o -o sudoku
flip2 ~/CS325/HW8 160% ./sudoku
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
0   |  1        |  2  6     |  7     1  |
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

.
.
.

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
flip2 ~/CS325/HW8 155% 