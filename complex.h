#ifndef complex_h
#define complex_h


typedef struct{double real, imag;
              } complex_t;



//calculate add two complex numbers
complex_t add_complex(complex_t a1,complex_t a2);

//calculate the product of two complex numbers
complex_t multiply_complex(complex_t a1, complex_t a2);

//abs
double abs_complex(complex_t c);

#endif

