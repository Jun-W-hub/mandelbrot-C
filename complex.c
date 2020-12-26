#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include "complex.h"


//calculate add two complex numbers
complex_t add_complex(complex_t a1,complex_t a2){
  complex_t add;

  add.real=a1.real+a2.real;
  add.imag=a1.imag+a2.imag;
  return(add);

}

//calculate the product of two complex numbers
complex_t multiply_complex(complex_t a1, complex_t a2){

  complex_t mu;

  mu.real=(a1.real*a2.real) - (a1.imag*a2.imag);
  mu.imag=(a1.real*a2.imag) + (a1.imag*a2.real);
return (mu);
}

//abs
double abs_complex(complex_t c){

  double a;

  a=sqrt(c.real*c.real+c.imag*c.imag);

return(a);}

