#include <stdio.h>
int main()
{
    int num, row, col, val = 1, start, diff, val1;
    scanf("%d", &num);
    start = num * num + 1;
    diff = num - 1;
    for (row = 1; row <= num; row++, printf("\n"))
    {
        val1 = start;
        for (col = 1; col <= num; col++)
        {
            if (col < row)
                printf(" ");
            else
                printf("%d ", val++);
        }
        for (col = row; col <= num; col++)
        {
            printf("%d ", start++);
        }
        start = val1 - diff;
        diff--;
    }
    return 0;
}

// Will Be formatted Soon