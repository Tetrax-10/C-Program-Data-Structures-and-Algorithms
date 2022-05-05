#include <stdio.h>
int main()
{
    int num, row, col;
    scanf("%d", &num);
    for (row = 1; row <= num; row++, printf("\n")) // 2<=5
    {
        for (col = 1; col <= row; col++) // 2<=2
        {
            printf("%d ", col);
        }
    }
    return 0;
}
