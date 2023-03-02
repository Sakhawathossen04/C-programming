#include<stdio.h>
int main ()
{
    int n;
    float C,F;
  

  printf("\n1.Fahrenheit To Celsius:");
 printf("\n1.Celsius To Fahrenheit :");
 printf("\nEnter Your Choice:");
     
scanf(" %d",&n);
    
   switch (n)
   {
   case 1 : 
   printf("\nEnter Fahrenheit :");
   scanf("%f",&F);
   C= 5*(F-32)/9;
   printf("\n Celcius =%f",C);
    break;
   
    case 2 : 
   printf("\nEnter Celcius :");
   scanf("%f",&C);
   F= ( ( 9*C)/5) +32 ;
   printf("\n Celcius =%f",F);
    break;

   default:

   printf(" ErroR!!!! ");
   
   }
   



    return 0;
}