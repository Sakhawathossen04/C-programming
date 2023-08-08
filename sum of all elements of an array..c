#include <stdio.h>
int main (){
        int arr[100];
        int i,n ,sum;
        sum =0;
        printf (" enter the arry:");
        scanf("%d",&n);
        for ( i = 0; i <=n; i++)
        {
             printf ("the element :%d\t",i);
             scanf ("%d",&arr[i]);
        }
         
        for ( i = 0; i <=n; i++)
        {
            sum =sum+i;
        }
        printf ("the totaol sum of areray is :%d",sum);

    return 0;
}