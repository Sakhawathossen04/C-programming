//111
 //00
  //1
   




#include <stdio.h>
int main (){
    int row,col,n;
    printf ("enter the number:"); 
    scanf ("%d",&n);
    for (row =n; row >=1; row--)
    {
       for (col =1;col<=n-row; col++)
       {
         printf (" ");
       }
       
       for (col =1;col<=row; col++)
       {
         printf ("%d",row%2);
       }
       printf ("\n");

    }
    

    return 0;
}