#include <stdio.h>

float solve (float a, float b) {
   return -(b/a) ;
}
int main() {
   float a=0, b=0 ;
   printf ("enter the value of a: ") ;
   scanf ("%f", &a );
   printf ("enter the value of b: ") ;
   scanf ("%f", &b );
   if (a == 0) {
      printf ("no solution" ) ; 
   }
   else {
      float solution = solve (a,b) ;
      printf (" the value of x is : %f" ,solution ) ;
   }
   return 0;
 
