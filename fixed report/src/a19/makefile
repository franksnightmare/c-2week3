FORK = fork.o pid.o waitforchild.o childprocesstester.o parentprocesstester.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: fork/%.cc fork/fork.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(FORK) fork/fork.h
	g++ -std=c++11 -Wall -o main main.cc $(FORK) fork/fork.h
