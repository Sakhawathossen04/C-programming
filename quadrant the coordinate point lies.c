#include<stdio.h>
int main (){

    int x,y;
    printf("Enter the value of X:\n");
    printf("Enter the value of Y:\n");
    scanf("%d",&x);
    scanf("%d",&y);
    if ( x>=0 && y>=0 )
    {
        printf("The coordinate point (%d,%d) lies in the First quandrant.\n",x,y);
    }
    
    else  if ( x<=0 && y>=0 )
    {
        printf("The coordinate point (%d,%d) lies in the secound quandrant.\n",x,y);
    }

    
    else  if ( x<=0 && y<=0 )
    {
        printf("The coordinate point (%d,%d) lies in the 3rd quandrant.\n",x,y);
    }


    
    else  if ( x>=0 && y<=0 )
    {
        printf("The coordinate point (%d,%d) lies in the 4th quandrant.\n",x,y);
    }









    return 0;
}