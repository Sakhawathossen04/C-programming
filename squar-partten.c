//111
//222
//333
#include<stdio.h>
int main (){
    int row,col,n;
    printf ("enter the number :");
    scanf("%d",&n);

    for (row =1;row<=n ;row++)
    {
        
    for (col =1;col<=n ;col++)
    {
        printf ("%d",row);
    }
    printf ("\n");
    }
    
    
        return 0;
}