info: ClassInfo.h _main.cpp
	g++ -g -Wall -o test.out _main.cpp

run: test.out
	./test.out
clean:
	rm -rf test.out
