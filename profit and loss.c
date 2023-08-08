#include <stdio.h>
int main (){   
     
    int buy_price ,sell_price ,profite;

    printf ("enter the buy price :\n");
    printf ("enter the sell price :\n");
    scanf ("%d",&buy_price);
    scanf ("%d",&sell_price);

    if (buy_price > sell_price  )
    {
        profite= (buy_price - sell_price);
        printf (" your lose is %d",profite);
    }
    else if (buy_price < sell_price  )
    {
        profite= (sell_price - buy_price);
        printf (" your profite is %d",profite);
    }

    else {
            printf ("  %d is your buy price and %d is your sell price ,so no profite no lose",buy_price,sell_price);

    }
    return 0;
}