#include <stdio.h>
int main (){
   
   int i,j,k;
   for ( i = 1; i <=5; i++) // rows
   {
        for ( j =5; j >i ; j--) // left space 
        {
           printf (" ");
        }



        for ( k = 1; k <=i; k++)  // *,middle space or right side space
        {
           printf (" * ");
        }
        

        printf ("\n");
        
   }
   

   
    return 0;
}