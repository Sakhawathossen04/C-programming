#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
       
      printf("You entered number is negative ");
    } 
    else
        printf("You entered number is positive");

    return 0;
}