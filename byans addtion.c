#include<stdio.h>
int main (){
    int num1,num2,t1,t2,flag=0;
   
    scanf("%d %d ",&num1,&num2);
    while ( num1 >0 && num2 >0)
    {
        t1=num1%10;
    num1=num1/10;
        t2=num2%10;
        num2/=10;
        if ( t1+t2>9)
        {
            flag =1;
            break;
        }
        

    }
    
    if ( flag==0)
    
       printf ("no");
    
    else 
    printf ("yes");
    
    return 0;
}








