#include <stdio.h>
#include <stdlib.h>

void display(int *mat[])
{
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {

            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int issafe(int *mat[], int row, int col, int d)
{
    int i, j;
    // checking entire row
    for (i = 0; i < 9; i++)
    {
        if (mat[row][i] == d)
        {
            return 0;
        }
    }
    // checking entire col
    for (i = 0; i < 9; i++)
    {
        if (mat[i][col] == d)
        {
            return 0;
        }
    }
    int x = row / 3 * 3;
    int y = col / 3 * 3;
    for (i = x; i <= x + 2; i++)
    {
        for (j = y; j <= y + 2; j++)
        {
            if (mat[i][j] == d)
            {
                return 0;
            }
        }
    }
    return 1;
}
void solve(int *mat[], int row, int col)
// row=0 col=1
{
    if (row == 8 && col == 9)
    {
        display(mat);
    }
    else
    {
        if (col == 9)
        {
            row++;
            col = 0;
        }
        if (mat[row][col] == 0) // 0==0
        {
            for (int d = 1; d <= 9; d++)
            {
                if (issafe(mat, row, col, d) == 1)
                {
                    mat[row][col] = d;
                    solve(mat, row, col + 1);
                    mat[row][col] = 0;
                }
            }
        }
        else
        {
            solve(mat, row, col + 1); // solve(0,1)
        }
    }
}
int main()
{
    int *mat[9];
    int i;
    for (i = 0; i < 9; i++)
    {
        mat[i] = (int *)calloc(sizeof(int), 9);
    }
    int j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    solve(mat, 0, 0);
}