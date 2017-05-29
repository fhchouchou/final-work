main:main.o my_queue.o
	g++ main.o my_queue.o -o main
main.o:main.cpp
	g++ -c main.cpp
my_queue.o:my_queue.cpp
	g++ -c my_queue.cpp
clean:
	rm main *.o
