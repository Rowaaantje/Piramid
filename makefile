all:
	g++ pyramidgen.cpp pyramidgen.h -o program

	./program
clean:
	rm program