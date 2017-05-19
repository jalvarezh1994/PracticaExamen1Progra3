Practica: main.o Dothraki.o Familia.o Guardia.o Lannister.o PequenasFamiliasNobles.o Starks.o Targaryen.o
	g++ main.o Dothraki.o Familia.o Guardia.o Lannister.o PequenasFamiliasNobles.o Starks.o Targaryen.o -o main

main.o: main.cpp Dothraki.h Familia.h Guardia.h Lannister.h PequenasFamiliasNobles.h Starks.h Targaryen.h
	g++ -c main.cpp

Familia.o: Familia.cpp Familia.h
	g++ -c Familia.cpp

Starks.o: Starks.cpp Starks.h Familia.h
	g++ -c Starks.cpp

Lannister.o: Lannister.cpp Lannister.h Familia.h
	g++ -c Lannister.cpp

Targaryen.o: Targaryen.cpp Targaryen.h Familia.h
	g++ -c Targaryen.cpp

PequenasFamiliasNobles.o: PequenasFamiliasNobles.cpp PequenasFamiliasNobles.h
	g++ -c PequenasFamiliasNobles.cpp

Dothraki.o: Dothraki.cpp Dothraki.h
	g++ -c Dothraki.cpp

Guardia.o: Guardia.cpp Guardia.h
	g++ -c Guardia.cpp

clean:
	rm -f *.o *.main
