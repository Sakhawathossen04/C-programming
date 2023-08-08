//1+3+5+...N
#include <stdio.h>
int main (){
    int n,i,sum=0;
    printf ("enter the series last number :");
    scanf("%d",&n);
    printf ("1+3+5+......%d",n);
    for ( i = 01; i <=n; i=i+2)
    {
         sum =sum+i;
    }
    printf (" sum of the series n:%d",sum);
    
    return 0;
}