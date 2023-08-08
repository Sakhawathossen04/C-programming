//12345
//1   5
//1   5
//1   5
//12345

#include <stdio.h>
int main (){
    int row,col,n;
    printf ("enter the number:");
    scanf("%d",&n);
    for ( row = 1; row <=n; row++)
    {
        for ( col = 1; col <=n; col++)
       {  
            if (col==1||col==n||row==1||row==n )
            {
                printf ("%d",col);
            }
            else
            printf (" ");
            
       }
        printf ("\n");
    }
    
}