#include<stdio.h>
int main (){
     
      int m,p,c,t1,t2;

      printf("enter the value of math:\n");
      printf("enter the value of physices:\n");
      printf("enter the value of chemistry:\n");
      scanf("%d",&m);
      scanf("%d",&p);
      scanf("%d",&c);
      
      t1=m+p+c;
      t2=m+p;
      printf(" total number of phy and math and chem =%d\n",m+p+c );
       printf(" total number of phy and math=%d\n",m+p );
     

     if ( m>=65 && p>=55 && c>=50 && t1>=190 && t2>=140 )
     {
        printf("you are elagible");
     }
     else
     {
        printf("you are not elagible");
     }
     




    return 0;
}