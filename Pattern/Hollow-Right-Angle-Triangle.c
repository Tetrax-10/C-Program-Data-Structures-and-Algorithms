// Hollow Right Angle Triangle

// Solution

#include <stdio.h>
int main()
{
    int num, row, col;
    scanf("%d", &num); // num=3
    for (row = 1; row <= num; row++, printf("\n"))
    {
        for (col = 1; col <= num; col++)
        {
            if (col == 1 || row == num || col == row)
                printf("*");
            else
                printf(" ");
        }
    }
    return 0;
}
