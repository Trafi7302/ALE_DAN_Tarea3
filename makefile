all:
	g++ -c libreria.cpp
	g++ -c algoritmoFuncionesTarea3.cpp
	g++ -o ejecutable libreria.o algoritmoFuncionesTarea3.o
	./ejecutable