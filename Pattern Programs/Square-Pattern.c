// Pattern 1

// I/P : num=3
// O/P :

// * * *
// * * *
// * * *

// Solution :

#include <stdio.h>
int main()
{
    int num, row, col;
    scanf("%d", &num); // num=3
    for (row = num; row >= 1; row--, printf("\n"))
        for (col = num; col >= 1; col--)
            printf("*  ");
    return 0;
}
