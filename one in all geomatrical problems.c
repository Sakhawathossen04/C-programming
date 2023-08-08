
#include <stdio.h>

int main() {
    
     float a,b,radius,area,pi;
     pi=3.1416;
     int x;

     printf("INPUT 1 FOR AREA OF CIRCLE:\n");
     printf("INPUT 2 FOR AREA OF retangular:\n");
     printf("INPUT 3 FOR AREA OF triangle:\n");
     
     scanf  ("%d",&x);

     switch (x)
     {
     case 1:
             printf ("Enter your radius:\n");
             scanf ("%f",&radius);
             area = pi * radius*radius;
             printf (" your circle is  %.3f",area);
        break;
      case 2:
             printf ("Enter your length a :\n");
              printf ("Enter your weight b:\n");
             scanf ("%f %f", &a,&b);
             area = a*b;
             printf (" your retangular  is  %.3f",area);
        break;
     case 3:
  printf ("Enter your length a :\n");
              printf ("Enter your weight b:\n");
             scanf ("%f %f", &a,&b);
             area = (a*b)/2;
             printf (" your triangle  is  %.3f",area);

        break;

        default  :
  printf("Input correct option\n");
        break;
     }

    return 0;
}