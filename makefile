make: build library

library:
	ar rcs out/libm3.a obj/*.o
	cp src/math3d.h out

build:
	cd obj ;\
	g++ ../src/**/*.cpp -c -O2