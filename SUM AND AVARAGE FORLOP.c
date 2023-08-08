#include <stdio.h>
int main (){
    
    int i,x ,sum;
    printf (" enter your value :\n");
    scanf (" %d",&x);

    for (  i = 1; i <x; i++)
    {
        printf (" number %d \n",i);

        sum +=i;
        printf ( " %d \n",sum);
    }
    
   
    return 0;
}