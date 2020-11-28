CS325_HW3_Malpaya_Eva
README.md
Instructions

TO RUN shopping:

1. Enter 'make shopping' into the command line to compile.
2. Enter './shopping' into the command line to execute.
3. When prompted, enter '1' for option 'Start.'
4. Results will be output to a file named 'results.txt' within the same directory.
5. When prompted again, enter '2' for option 'Exit' to quit and close the program.

Example terminal output:

flip1 ~/CS325/HW3 154% make shopping
g++ -std=c++11 -c main.cpp
g++ -std=c++11 -c Game.cpp
g++ -std=c++11 -c GetInt.cpp
g++ -std=c++11 -c Menu.cpp
g++ -std=c++11 main.o Game.o GetInt.o Menu.o -o shopping
flip1 ~/CS325/HW3 155% ./shopping
Welcome to my Shopping Program
Demo for CS 325
Week 3: Dynamic Programming

Begin Demo?

Please enter 1-2:
1. Start
2. Exit

Enter an integer value:
1
Results written to random.txt

Thanks for viewing.

Demo again?

Please enter 1-2:
1. Start
2. Exit

Enter an integer value:
2
flip1 ~/CS325/HW3 156% cat results.txt
Test Case 1
Total Price 72
Member Items
1: 1
Test Case 2
Total Price 568
Member Items
1: 3 4
2: 3 6
3: 3 6
4: 3 4 6
flip1 ~/CS325/HW3 157%
