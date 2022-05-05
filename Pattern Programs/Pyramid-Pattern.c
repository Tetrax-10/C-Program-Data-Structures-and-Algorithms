// Pyramid Pattern

// I/P : num=4

// O/P :

//       *
//     * * *
//   * * * * *
// * * * * * * *

// Solution :

#include <stdio.h>
int main()
{
    int num, row, col;
    scanf("%d", &num); // num=3
    /*for(row=1 ; row<=num; row++,printf("\n"))
    {
        for(col=1 ; col<=num-row; col++)
            printf(" ");
        for(col=1 ; col<=2*row-1; col++)
            printf("*");
    }*/
    for (row = num; row >= 1; row--, printf("\n"))
    {
        for (col = 1; col <= num - row; col++)
            printf(" ");
        for (col = 1; col <= 2 * row - 1; col++)
            printf("*");
    }
    return 0;
}
