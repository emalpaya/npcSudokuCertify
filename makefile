shopping: main.o Game.o GetInt.o Menu.o
	g++ -std=c++11 main.o Game.o GetInt.o Menu.o -o shopping

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Game.o: Game.cpp Game.hpp
	g++ -std=c++11 -c Game.cpp

GetInt.o: GetInt.cpp GetInt.hpp
	g++ -std=c++11 -c GetInt.cpp

Menu.o: Menu.cpp Menu.hpp
	g++ -std=c++11 -c Menu.cpp
	
# adapted from TA's Makefile Example by Harlan James  
# Project Name
PROJ = CS325_HW3_Malpaya_Eva

zip:
	zip $(PROJ).zip *.cpp *.hpp *.pdf *.txt makefile
clean:
	rm *.o