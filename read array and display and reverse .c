//Write a program in C to read n number of values in an array and display them in reverse order.

#include <stdio.h>
int main (){ 
        int a[100];
        int n,i;
        printf ("enter the number of array:");
        scanf("%d",&n);
           printf("Input %d number of elements in the array :\n",n);


           for ( i = 1; i < n; i++)
           {
             printf (" element is %d ",i);
             scanf (" %d ", &a[i]);
           }
           
           for ( i = 1; i <n; i++)
           {
              printf ( "%d ",a[i]);
           }
            printf("\n\n");
         for ( i =n-1 ; i >=0 ; i--)
         {
           printf ( "%d ",a[i]);
         }
        
         
          printf("\n\n");

    return 0;
}