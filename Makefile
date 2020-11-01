# Brett Roach
# cs23 Project-3
CXX= g++

CXXFLAGS= -std=c++11 -Wall -Wno-uninitialized

wordsearch: wordsearch.o bag.o word.o file.o
	${CXX} ${CXXFLAGS} ${LDFLAGS} $^ -o $@

clean:
	/bin/rm -f wordsearch *.o
