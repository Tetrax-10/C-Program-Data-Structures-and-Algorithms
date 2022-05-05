// Pattern 2

// I/P : num=5
// O/P :
// *
// * *
// * * *
// * * * *
// * * * * *

// Solution :

#include <stdio.h>
int main()
{
    int num, row, col;
    scanf("%d", &num); // num=3
    for (row = 1; row <= num; row++, printf("\n"))
        for (col = 1; col <= row; col++)
            printf("*");
    return 0;
}
