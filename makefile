Prog:CLI.o parser.o testView.o

parser.o:parser.h
	g++ -ansi -pedantic -Wall -c "view/parser.cpp" 
CLI.o: parser.h CLI.h 
	g++ -ansi -pedantic -Wall -c "view/CLI.cpp" 
testView.o:CLI.h 
 	g++ -ansi -pedantic -Wall -c "view/CLI.cpp" 
