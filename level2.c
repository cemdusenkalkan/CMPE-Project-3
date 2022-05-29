#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
float solve (float a, float b) {
   return -(b/a) ;
}


int main()
{
    FILE* ptr;
    char str[50];
    ptr = fopen("Cmpe3Project.txt", "a+");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
    printf("hello, i can solve linear equations. ");
    printf("there are some examples for equations and you can try it yourself. please choose your variables for x and y.\n");
   
 
    while (fgets(str, 50, ptr) != NULL) {
        printf("%s", str);
        
    }
 
    fclose(ptr);
    
//float solve (float a, float b) {
   //return -(b/a) ;

//}
float a;
float b;
   
   printf ("\nenter the value of a: ") ;
   scanf ("%f", &a );
   printf ("\nenter the value of b: ") ;
   scanf ("%f", &b );
   if (a == 0) {
      printf ("no solution" ) ; 
   }
   else {
      float solution = solve (a,b) ;
      printf (" the value of x is : %f" ,solution ) ;
   }
   return 0;


}