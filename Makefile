main: main.o DevilsFruit.o Paramecia.o Zoan.o Logia.o Being.o Marina.o Pirata.o Revolucionario.o
	g++ main.o DevilsFruit.o Paramecia.o Zoan.o Logia.o Being.o Marina.o Pirata.o Revolucionario.o -o main
main.o: main.cpp DevilsFruit.h Paramecia.h Zoan.h Logia.h Being.h Marina.h Pirata.h Revolucionario.h
	g++ -c main.cpp
DevilsFruit.o: DevilsFruit.h DevilsFruit.cpp
	g++ -c DevilsFruit.cpp
Paramecia.o: DevilsFruit.h Paramecia.h Paramecia.cpp
	g++ -c Paramecia.cpp
Zoan.o: DevilsFruit.h Zoan.h Zoan.cpp
	g++ -c Zoan.cpp
Logia.o: DevilsFruit.h Logia.h Logia.cpp
	g++ -c Logia.cpp
Being.o: DevilsFruit.h Being.h Being.cpp
	g++ -c Being.cpp
Marina.o: Being.h Marina.h Marina.cpp
	g++ -c Marina.cpp
Pirata.o: Being.h Pirata.h Pirata.cpp
	g++ -c Pirata.cpp
Revolucionario.o: Being.h Revolucionario.h Revolucionario.cpp
	g++ -c Revolucionario.cpp
Clean:
	rm -f *.o temp
