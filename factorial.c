#include <stdio.h>
int main (){
    int i,fact=1,j;
 printf ("  entert  the factorial:" );

    scanf("%d",&j);
    for (i = 1; i <=j; i++)
    {
        fact=fact*i;
    }
    
    printf ("  thefactorial is %d",fact);


    return 0;
}