netflix1:
	g++ netflix.cpp prog.cpp -o netflix

CC = g++
prog_file = netflix
$(prog_file): $(prog_file).o prog.o
	$(CC)$(prog_file).o prog.o -o $(prog_file)
$(prog_file).o: $(prog_file).cpp
	$(CC) -c $(prog_file).cpp
prog.o:	prog.cpp
	$(CC) -c prog.cpp
