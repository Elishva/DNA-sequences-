CC=g++
prog:parser.o 

parser.o:parser.cpp parser.h
	$(CC) -c -pedantic -Wall -Werror -Wconversion -ansi parser.cpp
     
