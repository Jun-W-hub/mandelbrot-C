mandelbrot:complex.o mandelbrot.o main.o
	gcc -o mandelbrot main.o mandelbrot.o complex.o -lm 
main.o:main.c complex.h mandelbrot.h
	gcc -c main.c 
mandelbrot.o:mandelbrot.c mandelbrot.h
	gcc -c mandelbrot.c 
complex.o: complex.c complex.h
	gcc -c complex.c 
clean:
	rm *.o mandelbrot 
	ls-FC 
