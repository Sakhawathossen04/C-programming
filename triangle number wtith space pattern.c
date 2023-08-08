//1    
//12   
//1 3  
//1  4 
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
            if (col==1||row==n||row==col )
            {
                printf ("%d",col);
            }
            else
            printf (" ");
            
       }
        printf ("\n");
    }
    
}