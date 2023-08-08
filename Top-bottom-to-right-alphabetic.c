//ABC
 //AB
  //A
   




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
         printf ("%c",row +64);
       }
       printf ("\n");

    }
    

    return 0;
}