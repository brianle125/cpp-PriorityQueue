all: PQtest

PQtest: PQtest.o
	g++ -Wall -o PQtest PQtest.o

PQtest.o: PQtest.cpp PQ.h BinaryHeap.h dsexceptions.h
	g++ -Wall -o PQtest.o -c PQtest.cpp

clean:
	rm -f PQtest *.o

