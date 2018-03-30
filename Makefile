Source:  Header.o Source.o
	g++ -o Header Source.o Header.o

Header.o:Header.cpp Header.h
	g++ -c Header.cpp

Source.o: Source.cpp Header.h
	g++ -c Source.cpp

clean:
	rm Header *.o
