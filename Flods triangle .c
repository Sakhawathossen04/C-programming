//1 
//2 3 
//4 5 6 
//7 8 9 10 
//11 12 13 14 15 
#include <stdio.h>
int main()
{

    int row, col, n, count = 0;
    printf("enter the number :");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", ++count);
        }
        printf("\n");
    }
}