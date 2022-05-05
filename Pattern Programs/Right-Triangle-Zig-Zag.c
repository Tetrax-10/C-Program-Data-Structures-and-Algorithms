#include <stdio.h>
int main()
{
    int num, row, col, val;
    scanf("%d", &num);
    for (row = 1; row <= num; row++, printf("\n"))
    {
        if (row % 2 == 1)
        {
            val = (row * (row + 1)) / 2;
            for (col = 1; col <= row; col++)
                printf("%d ", val--);
        }
        else
        {
            val = (row * (row - 1)) / 2 + 1;
            for (col = 1; col <= row; col++)
                printf("%d ", val++);
        }
    }
    return 0;
}
