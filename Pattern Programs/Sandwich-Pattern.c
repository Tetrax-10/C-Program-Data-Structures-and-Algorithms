// Sandwich Pattern

// Solution :

#include <stdio.h>
int main()
{
    int num, row, col, val, start, count = 0;
    scanf("%d", &num);
    for (row = 0; row < num; row += 2, printf("\n"))
    {
        val = num * row + 1;
        for (col = 1; col <= num; col++)
            printf("%d ", val++);
    }
    start = (num / 2) * 2 - 1;
    for (row = start; row >= 1; row -= 2, printf("\n"))
    {
        val = num * row + 1;
        for (col = 1; col <= num; col++)
            printf("%d ", val++);
    }
    return 0;
}


// Formatted Code will be updated soon