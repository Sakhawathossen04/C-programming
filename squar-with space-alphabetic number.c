//AAAAA
//B   B
//C   C
//D   D
//EEEEE


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
                printf ("%c",row+64);
            }
            else
            printf (" ");
            
       }
        printf ("\n");
    }
    
}