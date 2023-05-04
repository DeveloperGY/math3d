make: build library

library:
	ar rcs out/libm3.a obj/*.o
	cp src/math3d.h out

build:
	cd obj ;\
	g++ ../src/**/*.cpp -c -O2

tests:
	g++ test/*.cpp -o test/bin/cpp -Iout -Lout -lm3
	gcc test/*.c -o test/bin/c -Iout -Lout -lm3
	./test/bin/c
	./test/bin/cpp