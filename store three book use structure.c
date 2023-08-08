#include<stdio.h>

struct store 
{
    char name;
    int adtion;
    float price;
};

int main (){
    
    struct store book1,book2;
    printf ("wntwe the book racord:\n");

     scanf("%c %d %f",&book1.name,&book1.adtion,&book1.price );
     scanf("%c %d %f",&book2.name,&book2.adtion,&book2.price );
     printf("%c %d %f",book1.name,book1.adtion,book1.price );
    printf("%c %d %f",book2.name,book2.adtion,book2.price );
    
   
}


