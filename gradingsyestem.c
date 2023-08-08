#include <stdio.h>
int main (){
    
    int x;
    char a,b;
    printf ("Enter the grade:\n");
    printf ("grade A ,press 1:\n");
    printf ("grade B ,press 2:\n");
    printf ("grade C ,press 3:\n");
printf ("grade F ,press 4:\n");
    scanf ("%d",&x);
    switch (x)
    {
    case 1 :
        printf ("your grade is exiclent");
        break;
    case 2 :
        printf ("your grade is very good");
        break;
        case 3 :
        printf ("your grade is good");
        break;
    default:
      printf ("bad");
        break;
    }
    
    return 0;
}