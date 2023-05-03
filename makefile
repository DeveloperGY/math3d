make: library

library: obj
	ar rcs out/libm3.a obj/*.o
	cp src/math3d.h out

obj:
	cd obj ;\
	g++ ../src/**/*.cpp -c -O2