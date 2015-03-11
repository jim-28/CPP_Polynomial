RunProgram: polynomial.o posynomial.o main.o
	g++ -o RunProgram polynomial.o posynomial.o main.o

polynomial.o: polynomial.cpp func.h
	g++ -c polynomial.cpp

posynomial.o: posynomial.cpp func.h
	g++ -c posynomial.cpp

main.o: main.cpp func.h
	g++ -c main.cpp

clean:
	rm -r *.o
