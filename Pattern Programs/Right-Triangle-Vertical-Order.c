#include <stdio.h>
int main()
{
    int num, row, col, diff, val;
    scanf("%d", &num);
    for (row = 1; row <= num; row++, printf("\n"))
    {
        val = row;
        diff = num - 1;
        for (col = 1; col <= row; col++)
        {
            printf("%d ", val);
            val = val + diff;
            diff--;
        }
    }
    return 0;
}
