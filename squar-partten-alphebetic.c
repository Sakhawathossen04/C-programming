//AAA
//BBB
//CCC
#include<stdio.h>
int main (){
    int row,col,n;
    printf ("enter the number :");
    scanf("%d",&n);

    for (row =1;row<=n ;row++)
    {
        
    for (col =1;col<=n ;col++)
    {
        printf ("%c",row+64);
    }
    printf ("\n");
    }
    
    
        return 0;
}