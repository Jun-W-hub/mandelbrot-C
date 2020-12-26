#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include "complex.h"
#include "mandelbrot.h"


//check the complex number c is mandelbrot set or not
complex_t mandelbrot(int n, complex_t c){

  complex_t f1;
  double a;
 //calculate the complex number
  if (n==0){
     f1.real=c.real;
     f1.imag=c.imag;}

  else {f1=mandelbrot(n-1,c);
     f1=multiply_complex(f1,f1);
     f1=add_complex(c,f1);}

  a=abs_complex(f1);

 // check the complex number is smaller than 10000 or not
  if(a==10000||a>10000) {f1.real=10000; f1.imag=10000;};
  return f1;
}

