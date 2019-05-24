OBJECTS = main.cpp
STD = -std=c++17
MYFLAGS = -g -Wall -O3
CXX = g++
EXEC = main

all: $(OBJECTS)
	$(CXX) $(STD) $(MYFLAGS) $(OBJECTS) -o $(EXEC)

clean: 
	rm $(EXEC)

