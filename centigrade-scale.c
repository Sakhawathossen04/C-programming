#include<stdio.h>
int main (){
    int tem;

    printf (" Enter your tempareture :\n");

    scanf ("%d",&tem);





    if ( tem==0)
    {
         printf (" Freezing weather  :\n");
    }
     
     else if ( tem <=20)
     {
         printf ("  cold weather  :\n");
     }
     
     else if ( tem <=30 && tem <=40)
     {
         printf ("  normal weather  :\n");
     }

    else printf (" the weather is very hots  :\n");

      return 0;
}