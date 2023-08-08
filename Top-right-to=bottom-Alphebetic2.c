//     A
//    BB
//   CCC
#include <stdio.h>
int main (){
    int n,row,col;

    printf ("Enter the number:");
    scanf ("%d",&n);

    for (row = 1; row <=n; row++)
    {   
        //lopp 1 for space creating //
       for ( col = 1; col <=n-row; col++)
       {
         printf (" ",col);
       }
         //lopp 2 for printing number //
       for ( col =1; col <= row; col++)
       {
        printf("%c",row+64);
          
       }
     printf ("\n");





    }
}