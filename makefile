

all: test.cpp Deque.hpp
	g++ -ldl test.cpp -o test
	
	
clean:
	rm -f test *.o
