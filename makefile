output: vector_main.o vector_lib.o
	g++ vector_main.o vector_lib.o -o output

vector_main.o: vector_main.cpp
	g++ -c vector_main.cpp

vector_lib.o: vector_lib.cpp vector3D.h
	g++ -c vector_lib.cpp vector3D.h

clear:
	rm *.o output
