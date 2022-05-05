// Pattern 3

// I/P : num=5
// O/P :

// * * * * *
//   * * * *
//     * * *
//       * *
//         *

// Solution :

#include <stdio.h>
int main()
{
    int num, row, col;
    scanf("%d", &num); // num=3
    /*for(row=1 ; row<=num; row++,printf("\n"))
    {
        for(col=1 ; col<=num-row;  col++)
            printf(" ");
        for(col=1; col<=row; col++)
            printf("*");
    }*/
    for (row = num; row >= 1; row--, printf("\n")) // 4>=1
    {
        for (col = 1; col <= num; col++) // 1<=5
        {
            if (col <= num - row) // 1<=1
                printf(" ");      // SSSS*
            else
                printf("*"); //*****
        }
    }
    return 0;
}
