//a
//ab
//abc

#include<stdio.h>
int main (){
    int n,row,col;
    printf (
        "enter the number:\n"
    );
    scanf ("%d",&n);
    for (row = 1; row <=n; row++)
    {
       for ( col = 1; col <=row; col++)
       {
          printf("%c",col+96);
       }
        printf ("\n");
    } 
    
    return 0;
}