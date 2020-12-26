#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include "complex.h"
#include "mandelbrot.h"

 complex_t c;

int main(void)
{
 complex_t f;
 double x,y,a;
 int i,r,n=15;

 FILE *fp=fopen("mande.txt","w");

 //check every row in the mandelbrot(n)
 for(r=0;r<=100;r++)
 { y=-1.12+(r*0.02);

   //check every character in the mandelbrot(n)
   for(i=0;i<=120;i++)
   { x=-2.0+(i*0.022);
     c.real=x;
     c.imag=y;
     f=mandelbrot(n,c);

     if (f.real==10000 && f.imag==10000) fprintf(fp," ");
     else fprintf(fp,"1");

    }
   fprintf(fp,"\n");


  }
  fclose(fp);

  return 0;
}
