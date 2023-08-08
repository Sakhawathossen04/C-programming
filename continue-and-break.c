#include <stdio.h>
int main() {  
      
      int i;
      for ( i = 10; i <=100; i++)
      {
        if ( i%2==0)
        {
            printf("%d\n",i);
            continue;


            
        }
                    if (i>80)
           break;
      }
      
   
    
    return 0;
}
