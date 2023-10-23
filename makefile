all:
	g++ main.cpp methods.cpp main.h -o program

clean:
	rm program

run: all
	./program



