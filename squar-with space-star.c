//*****
//*   *
//*   *
//*   *
//*****


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
                printf (" *");
            }
            else
            printf (" ");
            
       }
        printf ("\n");
    }
    
}